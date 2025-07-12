import rclpy
from rclpy.node import Node
import asyncio
import websockets
import os
import random
import json
# 注意：如遇"VehicleGlobalPosition is unknown import symbol"报错，请确保已正确编译并source px4_msgs包，详见FAQ文档。
from px4_msgs.msg import VehicleCommand, TrajectorySetpoint, VehicleGlobalPosition, SensorGps, OffboardControlMode, VehicleStatus  # noqa: F401
import math
import threading
import time  # 新增
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

# 默认参数
DEFAULT_TAKEOFF_ALT = 5.0
DEFAULT_WAIT_TAKEOFF = 5
DEFAULT_WAIT_FLIGHT = 10
DEFAULT_WAIT_LAND = 5
GPS_TIMEOUT = 10  # 秒
HEARTBEAT_INTERVAL = 15  # 心跳间隔15秒

class DeliveryDrone(Node):
    def __init__(self):
        super().__init__('delivery_drone')

        # 配置参数
        self.backend_url = os.environ.get("DELIVERY_BACKEND_URL", "ws://127.0.0.1:8000/ws/drone")
        self.drone_id = os.environ.get("DRONE_ID", f"drone{random.randint(100,999)}")
        self.takeoff_alt = float(os.environ.get("TAKEOFF_ALT", DEFAULT_TAKEOFF_ALT))
        self.wait_takeoff = int(os.environ.get("WAIT_TAKEOFF", DEFAULT_WAIT_TAKEOFF))
        self.wait_flight = int(os.environ.get("WAIT_FLIGHT", DEFAULT_WAIT_FLIGHT))
        self.wait_land = int(os.environ.get("WAIT_LAND", DEFAULT_WAIT_LAND))
        
        # 状态变量
        self.current_order = None
        self.current_dropoff = 0
        self.location = None  # 真实GPS位置
        self.status = "idle"
        self.ws = None
        self.home_gps = None
        self.last_gps_time = None
        
        # 心跳相关
        self.last_heartbeat_time = 0
        self.heartbeat_task = None
        
        # Offboard模式相关
        self.offboard_setpoint_counter = 0
        self.is_offboard_mode = False
        self.is_armed = False
        
        # PX4 ROS2 发布器
        self.cmd_pub = self.create_publisher(VehicleCommand, "/fmu/in/vehicle_command", 10)
        self.setpoint_pub = self.create_publisher(TrajectorySetpoint, "/fmu/in/trajectory_setpoint", 10)
        self.offboard_control_mode_pub = self.create_publisher(OffboardControlMode, "/fmu/in/offboard_control_mode", 10)
        
        # 订阅GPS，使用与PX4一致的QoS
        qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )
        self.gps_sub = self.create_subscription(
            SensorGps,
            "/fmu/out/vehicle_gps_position",
            self.gps_callback,
            qos
        )
        
        # 订阅PX4状态反馈，使用与PX4一致的QoS（BEST_EFFORT）
        qos_status = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )
        self.vehicle_status = None
        self.vehicle_status_sub = self.create_subscription(
            VehicleStatus,
            "/fmu/out/vehicle_status_v1",
            self.vehicle_status_callback,
            qos_status
        )
        
        # 创建定时器用于offboard控制（10Hz）
        self.offboard_timer = self.create_timer(0.1, self.offboard_control_callback)
        
        self.in_offboard_mission = False  # 新增：是否处于offboard任务
        
        self.get_logger().info(f"无人机节点初始化完成: {self.drone_id}")

    def gps_callback(self, msg):
        """GPS回调函数"""
        lat = msg.latitude_deg
        lon = msg.longitude_deg
        self.location = [lat, lon]
        self.last_gps_time = time.time()
        if self.home_gps is None and self.location is not None:
            self.home_gps = self.location.copy()
            self.get_logger().info(f"设置初始GPS位置: {self.home_gps}")

    def wait_for_gps(self, timeout=GPS_TIMEOUT, max_retry=3):
        """等待GPS数据"""
        self.get_logger().info("等待GPS数据...")
        retry = 0
        start_time = time.time()
        while self.location is None:
            rclpy.spin_once(self, timeout_sec=1.0)  # 关键：调度回调
            retry += 1
            if time.time() - start_time > timeout:
                self.get_logger().error(f"{timeout}秒内未收到GPS数据，退出程序")
                import sys
                sys.exit(1)
        self.get_logger().info(f"GPS数据就绪: {self.location}")

    # -------------------- Offboard 控制相关 --------------------
    def offboard_control_callback(self):
        """Offboard控制回调函数，10Hz运行"""
        if not self.in_offboard_mission:
            return  # 只有在任务中才发布offboard消息
        # 发布OffboardControlMode消息
        self.publish_offboard_control_mode()
        # 发布TrajectorySetpoint消息
        self.publish_trajectory_setpoint()
        # 优化：先持续发布setpoint，后切模式、解锁
        if self.offboard_setpoint_counter == 10 and not self.is_offboard_mode:
            self.get_logger().info("切换到Offboard模式（真实状态判断）")
            self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_DO_SET_MODE, 1.0, 6.0)
        if self.offboard_setpoint_counter == 12 and not self.is_armed:
            self.get_logger().info("解锁无人机（真实状态判断）")
            self.arm()
        if self.offboard_setpoint_counter < 20:
            self.offboard_setpoint_counter += 1

    def publish_offboard_control_mode(self):
        """发布OffboardControlMode消息"""
        msg = OffboardControlMode()
        msg.position = True
        msg.velocity = False
        msg.acceleration = False
        msg.attitude = False
        msg.body_rate = False
        msg.thrust_and_torque = False
        msg.direct_actuator = False
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.offboard_control_mode_pub.publish(msg)
        self.get_logger().info(f"[调试] 发布OffboardControlMode: position={msg.position}")

    def publish_trajectory_setpoint(self):
        """发布TrajectorySetpoint消息"""
        msg = TrajectorySetpoint()
        msg.position = [0.0, 0.0, -self.takeoff_alt]
        msg.yaw = 0.0
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.setpoint_pub.publish(msg)
        self.get_logger().info(f"[调试] 发布TrajectorySetpoint: {msg.position}, yaw={msg.yaw}")

    def publish_vehicle_command(self, command, param1=0.0, param2=0.0, param3=0.0, param4=0.0, param5=0.0, param6=0.0, param7=0.0):
        """发布VehicleCommand消息"""
        msg = VehicleCommand()
        msg.param1 = param1
        msg.param2 = param2
        msg.param3 = param3
        msg.param4 = param4
        msg.param5 = param5
        msg.param6 = param6
        msg.param7 = param7
        msg.command = command
        msg.target_system = 1
        msg.target_component = 1
        msg.source_system = 1
        msg.source_component = 1
        msg.from_external = True
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.cmd_pub.publish(msg)
        self.get_logger().info(f"[调试] 发布VehicleCommand: command={command}, param1={param1}, param2={param2}")

    # -------------------- PX4 控制相关 --------------------
    def arm(self):
        """解锁无人机"""
        self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, 1.0)
        self.get_logger().info("发送解锁指令")

    def disarm(self):
        """锁定无人机"""
        self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, 0.0)
        self.get_logger().info("发送锁定指令")

    def takeoff(self, altitude=None):
        """起飞到指定高度"""
        alt = altitude if altitude is not None else self.takeoff_alt
        self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_NAV_TAKEOFF, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, alt)
        self.get_logger().info(f"发送起飞指令，高度{alt}米")

    def land(self):
        """降落"""
        self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_NAV_LAND, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
        self.get_logger().info("发送降落指令")

    def goto_xyz(self, x, y, z):
        """飞行到本地坐标点（在offboard模式下）"""
        if not self.is_offboard_mode:
            self.get_logger().warn("未在offboard模式下，无法发送位置设定值")
            return
            
        # 发布新的位置设定值
        msg = TrajectorySetpoint()
        msg.position = [x, y, z]
        msg.yaw = 0.0
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.setpoint_pub.publish(msg)
        self.get_logger().info(f"发送飞行目标: x={x}, y={y}, z={z}")

    def gps_to_local(self, gps):
        """GPS转本地NED坐标"""
        if self.home_gps is None:
            self.get_logger().error("home_gps 未初始化")
            raise ValueError("home_gps 未初始化")
            
        R = 6378137.0
        lat0, lon0 = self.home_gps
        lat, lon = gps
        dlat = math.radians(lat - lat0)
        dlon = math.radians(lon - lon0)
        x = dlat * R
        y = dlon * R * math.cos(math.radians(lat0))
        z = -self.takeoff_alt

        return x, y, z

    # -------------------- WebSocket 通信相关 --------------------
    async def connect(self):
        """连接WebSocket"""
        while True:
            try:
                self.ws = await websockets.connect(self.backend_url)
                await self.register()
                self.get_logger().info(f"WebSocket连接成功: {self.backend_url}")
                break
            except Exception as e:
                self.get_logger().error(f"WebSocket连接失败: {e}，3秒后重试...")
                await asyncio.sleep(3)

    async def safe_send(self, msg):
        try:
            if not self.ws or getattr(self.ws, 'close_code', None) is not None:
                raise RuntimeError("WebSocket未连接或已关闭")
            await self.ws.send(json.dumps(msg))
        except Exception as e:
            self.get_logger().error(f"WebSocket发送失败: {e}")
            raise

    async def safe_recv(self):
        try:
            if not self.ws or getattr(self.ws, 'close_code', None) is not None:
                raise RuntimeError("WebSocket未连接或已关闭")
            msg = await self.ws.recv()
            return msg
        except Exception as e:
            self.get_logger().error(f"WebSocket接收失败: {e}")
            raise

    async def register(self):
        """注册无人机"""
        msg = {
            "type": "register",
            "drone_id": self.drone_id,
            "location": self.location
        }
        await self.safe_send(msg)
        resp = await self.safe_recv()
        if resp:
            self.get_logger().info(f"注册成功: {resp}")
        else:
            self.get_logger().error("注册失败")

    async def update_location(self, new_location):
        """更新位置"""
        self.location = new_location
        msg = {
            "type": "location",
            "drone_id": self.drone_id,
            "location": self.location
        }
        await self.safe_send(msg)

    async def report_status(self, status, location, finished=False):
        """报告状态"""
        msg = {
            "type": "status",
            "drone_id": self.drone_id,
            "status": status,
            "location": location,
            "order_id": self.current_order["order_id"] if self.current_order else None
        }
        await self.safe_send(msg)
        if finished:
            self.status = "idle"
            self.get_logger().info(f"订单{msg['order_id']}已完成")

    async def send_heartbeat(self):
        """发送心跳"""
        msg = {
            "type": "heartbeat",
            "drone_id": self.drone_id,
            "timestamp": time.time(),
            "location": self.location
        }
        await self.safe_send(msg)
        self.last_heartbeat_time = time.time()
        self.get_logger().debug(f"发送心跳: {self.drone_id} 位置: {self.location}")

    async def listen(self):
        try:
            while True:
                msg = await self.safe_recv()
                if not msg:
                    await asyncio.sleep(1)
                    continue
                data = json.loads(msg)
                if data.get("type") == "order":
                    self.get_logger().info(f"收到新订单: {data['order']}")
                    await self.handle_order(data["order"])
                elif data.get("type") == "ping":
                    await self.safe_send({"type": "pong"})
                elif data.get("type") == "heartbeat_ack":
                    self.get_logger().debug(f"收到心跳确认: {self.drone_id}")
                elif data.get("type") == "pong":
                    self.get_logger().debug(f"收到pong响应: {self.drone_id}")
                else:
                    self.get_logger().info(f"收到消息: {data}")
        except Exception as e:
            self.get_logger().warning(f"监听任务异常: {e}，即将重连")
        finally:
            if self.ws:
                try:
                    await self.ws.close()
                except Exception:
                    pass
            loop = asyncio.get_event_loop()
            loop.stop()

    async def heartbeat_loop(self):
        try:
            while True:
                await self.send_heartbeat()
                await asyncio.sleep(HEARTBEAT_INTERVAL)
        except Exception as e:
            self.get_logger().warning(f"心跳任务异常: {e}，即将重连")
        finally:
            if self.ws:
                try:
                    await self.ws.close()
                except Exception:
                    pass
            loop = asyncio.get_event_loop()
            loop.stop()

    # -------------------- 业务流程 --------------------
    async def enter_offboard_and_arm(self):
        """严格按流程切换PX4为offboard并解锁，增加解锁重试和详细反馈"""
        self.get_logger().info("[调试] 开始持续发布OffboardControlMode和TrajectorySetpoint...")
        self.in_offboard_mission = True
        self.offboard_setpoint_counter = 0
        # 持续发布setpoint和control_mode至少1秒
        for _ in range(10):
            self.publish_offboard_control_mode()
            self.publish_trajectory_setpoint()
            await asyncio.sleep(0.1)
        self.get_logger().info("[调试] 发布切换Offboard模式指令...")
        self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_DO_SET_MODE, 1.0, 6.0, 0.0, 0.0, 0.0, 0.0, 0.0)
        await asyncio.sleep(0.2)

        # 解锁重试，最多尝试30次（约3秒）
        for i in range(30):
            if not self.is_armed:
                self.get_logger().info(f"[调试] 第{i+1}次尝试解锁...")
                self.arm()
            else:
                break
            await asyncio.sleep(0.1)

        # 等待状态反馈
        for _ in range(30):
            self.get_logger().info(f"[调试] PX4状态: nav_state={getattr(self.vehicle_status, 'nav_state', None)}, arming_state={getattr(self.vehicle_status, 'arming_state', None)}")
            if self.is_offboard_mode and self.is_armed:
                self.get_logger().info("[调试] PX4已进入Offboard并解锁！")
                return True
            await asyncio.sleep(0.1)
        self.get_logger().error("[调试] PX4未能进入Offboard或未解锁！请检查PX4预飞检查、遥控器、safety switch等")
        return False

    async def fly_to(self, gps):
        """飞行到指定GPS位置（使用offboard模式）"""
        self.get_logger().info(f"飞行到: {gps}")
        # 进入offboard并解锁
        ok = await self.enter_offboard_and_arm()
        if not ok:
            self.get_logger().error("无法进入offboard模式，终止任务")
            return
        # 起飞到指定高度
        self.get_logger().info("起飞到指定高度")
        await asyncio.sleep(self.wait_takeoff)
        # 飞往目标位置
        x, y, z = self.gps_to_local(gps)
        self.goto_xyz(x, y, z)
        self.get_logger().info(f"飞往目标位置: {gps} -> 本地坐标: ({x:.2f}, {y:.2f}, {z:.2f})")
        # 等待飞行完成
        await asyncio.sleep(self.wait_flight)
        # 降落
        self.get_logger().info("开始降落")
        self.land()
        await asyncio.sleep(self.wait_land)
        # 更新位置并报告状态
        await self.update_location(gps)
        await self.report_status("arrived", gps)

    async def handle_order(self, order):
        """处理订单"""
        self.get_logger().info(f"处理订单: {order['order_id']}")
        self.current_order = order
        self.status = "busy"
        self.in_offboard_mission = True  # 开始任务，启动offboard控制
        self.offboard_setpoint_counter = 0  # 重新计数，确保每次都能切换
        self.is_offboard_mode = False
        self.is_armed = False
        # 飞往取货点
        await self.fly_to(order["pickup"])
        await self.report_status("landed_pickup", order["pickup"])
        # 飞往投递点
        for idx, dropoff in enumerate(order["dropoffs"]):
            self.current_dropoff = idx
            msg = {
                "type": "confirm_dropoff",
                "order_id": order["order_id"],
                "dropoff_index": idx
            }
            await self.safe_send(msg)
            resp = await self.safe_recv()
            try:
                if resp:
                    data = json.loads(resp)
                    dest = data.get("location", dropoff)
                else:
                    dest = dropoff
            except Exception as e:
                self.get_logger().error(f"解析投递点失败: {e}")
                dest = dropoff
            await self.fly_to(dest)
            await self.report_status("landed_dropoff", dest)
        await self.report_status("finished", order["dropoffs"][-1], finished=True)
        self.current_order = None
        self.in_offboard_mission = False  # 任务结束，停止offboard控制
        self.is_offboard_mode = False
        self.is_armed = False

    async def main_ws_tasks(self):
        tasks = [
            asyncio.create_task(self.heartbeat_loop()),
            asyncio.create_task(self.listen())
        ]
        done, pending = await asyncio.wait(tasks, return_when=asyncio.FIRST_EXCEPTION)
        for task in pending:
            task.cancel()
        if self.ws:
            try:
                await self.ws.close()
            except Exception:
                pass

    def run(self):
        self.get_logger().info("启动无人机节点")
        self.wait_for_gps()
        while True:
            try:
                loop = asyncio.new_event_loop()
                asyncio.set_event_loop(loop)
                loop.run_until_complete(self.connect())
                loop.run_until_complete(self.main_ws_tasks())
            except Exception as e:
                self.get_logger().error(f"主循环异常: {e}")
            finally:
                try:
                    loop.close()
                except Exception:
                    pass
                time.sleep(3)

    def vehicle_status_callback(self, msg):
        self.vehicle_status = msg
        self.get_logger().info(f"[调试] PX4当前模式: nav_state={msg.nav_state}, arming_state={msg.arming_state}")
        # 用真实状态更新本地变量
        self.is_offboard_mode = (msg.nav_state == 14)  # 14 = OFFBOARD
        self.is_armed = (msg.arming_state == 2)        # 2 = ARMED

def main(args=None):
    rclpy.init(args=args)
    node = DeliveryDrone()
    node.run()
    rclpy.shutdown()

if __name__ == "__main__":
    main() 