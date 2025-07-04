import rclpy
from rclpy.node import Node
import asyncio
import websockets
import os
import random
import json
# 注意：如遇“VehicleGlobalPosition is unknown import symbol”报错，请确保已正确编译并source px4_msgs包，详见FAQ文档。
from px4_msgs.msg import VehicleCommand, TrajectorySetpoint, VehicleGlobalPosition  # noqa: F401
import math
import threading

# 默认参数
DEFAULT_TAKEOFF_ALT = 5.0
DEFAULT_WAIT_TAKEOFF = 5
DEFAULT_WAIT_FLIGHT = 10
DEFAULT_WAIT_LAND = 5
GPS_TIMEOUT = 10  # 秒

class DeliveryDrone(Node):
    def __init__(self):
        super().__init__('delivery_drone')
        # 调试：打印所有环境变量和参数
        self.get_logger().info(f"[DEBUG] 启动参数: DELIVERY_BACKEND_URL={os.environ.get('DELIVERY_BACKEND_URL')}, DRONE_ID={os.environ.get('DRONE_ID')}, TAKEOFF_ALT={os.environ.get('TAKEOFF_ALT')}, WAIT_TAKEOFF={os.environ.get('WAIT_TAKEOFF')}, WAIT_FLIGHT={os.environ.get('WAIT_FLIGHT')}, WAIT_LAND={os.environ.get('WAIT_LAND')}")
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
        # PX4 ROS2 发布器
        self.cmd_pub = self.create_publisher(VehicleCommand, "/fmu/in/vehicle_command", 10)
        self.setpoint_pub = self.create_publisher(TrajectorySetpoint, "/fmu/in/trajectory_setpoint", 10)
        # 订阅GPS
        self.gps_sub = self.create_subscription(
            VehicleGlobalPosition,
            "/fmu/out/vehicle_global_position",
            self.gps_callback,
            10
        )
        self.gps_ready = threading.Event()
        self.get_logger().info(f"[DEBUG] 实际参数: backend_url={self.backend_url}, drone_id={self.drone_id}, takeoff_alt={self.takeoff_alt}, wait_takeoff={self.wait_takeoff}, wait_flight={self.wait_flight}, wait_land={self.wait_land}")
        self.get_logger().info("[DEBUG] DeliveryDrone 节点初始化完成")

    def gps_callback(self, msg):
        # VehicleGlobalPosition: lat/lon为float32，单位度
        self.get_logger().debug(f"[DEBUG] 收到GPS消息: {msg}")
        lat = msg.lat
        lon = msg.lon
        self.location = [lat, lon]
        if self.home_gps is None and self.location is not None:
            self.home_gps = self.location.copy()
            self.get_logger().info(f"[DEBUG] home_gps 初始化: {self.home_gps}")
        self.gps_ready.set()

    def wait_for_gps(self, timeout=GPS_TIMEOUT):
        self.get_logger().info("等待无人机GPS数据...")
        # 调试：打印当前所有话题，辅助排查链路
        try:
            import subprocess
            topics = subprocess.getoutput("ros2 topic list")
            self.get_logger().info(f"[DEBUG] 当前可用ROS2话题: {topics}")
        except Exception as e:
            self.get_logger().error(f"[DEBUG] 获取话题列表失败: {e}")
        while not self.gps_ready.wait(timeout):
            self.get_logger().error(f"{timeout}秒内未收到无人机GPS数据，未连接到无人机，请检查PX4仿真或真机连接！")
        self.get_logger().info(f"已获取无人机GPS: {self.location}")

    # -------------------- PX4 控制相关 --------------------
    def arm(self):
        """解锁无人机"""
        self.get_logger().info("[DEBUG] 发送解锁指令")
        cmd = VehicleCommand()
        cmd.param1 = 1.0
        cmd.command = 400
        self._fill_cmd_header(cmd)
        self.cmd_pub.publish(cmd)
        self.get_logger().info("已发送解锁指令")

    def takeoff(self, altitude=None):
        """起飞到指定高度"""
        alt = altitude if altitude is not None else self.takeoff_alt
        self.get_logger().info(f"[DEBUG] 发送起飞指令，高度: {alt}")
        cmd = VehicleCommand()
        cmd.command = 22
        cmd.param7 = alt
        self._fill_cmd_header(cmd)
        self.cmd_pub.publish(cmd)
        self.get_logger().info(f"已发送起飞指令，高度{alt}米")

    def land(self):
        """降落"""
        self.get_logger().info("[DEBUG] 发送降落指令")
        cmd = VehicleCommand()
        cmd.command = 21
        self._fill_cmd_header(cmd)
        self.cmd_pub.publish(cmd)
        self.get_logger().info("已发送降落指令")

    def goto_xyz(self, x, y, z):
        """飞行到本地坐标点"""
        self.get_logger().info(f"[DEBUG] 发送飞行目标: x={x}, y={y}, z={z}")
        setpoint = TrajectorySetpoint()
        setpoint.position = [x, y, z]
        setpoint.yaw = 0.0
        self.setpoint_pub.publish(setpoint)
        self.get_logger().info(f"已发送飞行目标: x={x}, y={y}, z={z}")

    def _fill_cmd_header(self, cmd):
        cmd.target_system = 1
        cmd.target_component = 1
        cmd.source_system = 1
        cmd.source_component = 1
        cmd.from_external = True

    def gps_to_local(self, gps):
        """GPS转本地NED坐标（简化版）"""
        if self.home_gps is None:
            self.get_logger().error("home_gps 未初始化，无法进行坐标转换！")
            raise ValueError("home_gps 未初始化")
        R = 6378137.0
        lat0, lon0 = self.home_gps
        lat, lon = gps
        dlat = math.radians(lat - lat0)
        dlon = math.radians(lon - lon0)
        x = dlat * R
        y = dlon * R * math.cos(math.radians(lat0))
        z = -self.takeoff_alt
        self.get_logger().debug(f"[DEBUG] GPS转本地坐标: gps={gps} -> x={x}, y={y}, z={z}")
        return x, y, z

    # -------------------- WebSocket 通信相关 --------------------
    async def connect(self):
        while True:
            try:
                self.get_logger().info(f"[DEBUG] 尝试连接WebSocket: {self.backend_url}")
                self.ws = await websockets.connect(self.backend_url)
                await self.register()
                self.get_logger().info(f"已连接WebSocket: {self.backend_url}")
                break
            except Exception as e:
                self.get_logger().error(f"WebSocket连接失败: {e}，3秒后重试...")
                await asyncio.sleep(3)

    async def safe_send(self, msg):
        try:
            if not self.ws:
                await self.connect()
            if self.ws:
                self.get_logger().debug(f"[DEBUG] WebSocket发送: {msg}")
                await self.ws.send(json.dumps(msg))
        except Exception as e:
            self.get_logger().error(f"WebSocket发送失败: {e}")

    async def safe_recv(self):
        try:
            if not self.ws:
                await self.connect()
            if self.ws:
                msg = await self.ws.recv()
                self.get_logger().debug(f"[DEBUG] WebSocket接收: {msg}")
                return msg
        except Exception as e:
            self.get_logger().error(f"WebSocket接收失败: {e}")
        return None

    async def register(self):
        msg = {
            "type": "register",
            "drone_id": self.drone_id,
            "location": self.location
        }
        self.get_logger().info(f"[DEBUG] 注册消息: {msg}")
        await self.safe_send(msg)
        resp = await self.safe_recv()
        if resp:
            self.get_logger().info(f"注册响应: {resp}")
        else:
            self.get_logger().error("注册响应为空，WebSocket可能未连接")

    async def update_location(self, new_location):
        self.location = new_location
        msg = {
            "type": "location",
            "drone_id": self.drone_id,
            "location": self.location
        }
        self.get_logger().debug(f"[DEBUG] 上报位置: {msg}")
        await self.safe_send(msg)

    async def report_status(self, status, location, finished=False):
        msg = {
            "type": "status",
            "drone_id": self.drone_id,
            "status": status,
            "location": location,
            "order_id": self.current_order["order_id"] if self.current_order else None
        }
        self.get_logger().info(f"[DEBUG] 上报状态: {msg}")
        await self.safe_send(msg)
        if finished:
            self.status = "idle"
            self.get_logger().info(f"订单{msg['order_id']}已完成")

    # -------------------- 业务流程 --------------------
    async def fly_to(self, gps):
        self.get_logger().info(f"[DEBUG] fly_to 调用: gps={gps}")
        self.arm()
        await asyncio.sleep(1)
        self.takeoff()
        await asyncio.sleep(self.wait_takeoff)
        x, y, z = self.gps_to_local(gps)
        self.goto_xyz(x, y, z)
        await asyncio.sleep(self.wait_flight)
        self.land()
        await asyncio.sleep(self.wait_land)
        await self.update_location(gps)
        await self.report_status("arrived", gps)

    async def handle_order(self, order):
        self.get_logger().info(f"[DEBUG] handle_order 调用: {order}")
        self.current_order = order
        self.status = "busy"
        await self.fly_to(order["pickup"])
        await self.report_status("landed_pickup", order["pickup"])
        for idx, dropoff in enumerate(order["dropoffs"]):
            self.current_dropoff = idx
            msg = {
                "type": "confirm_dropoff",
                "order_id": order["order_id"],
                "dropoff_index": idx
            }
            self.get_logger().info(f"[DEBUG] 请求投递点确认: {msg}")
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

    async def listen(self):
        while True:
            try:
                msg = await self.safe_recv()
                if not msg:
                    continue
                data = json.loads(msg)
                self.get_logger().info(f"[DEBUG] 收到消息: {data}")
                if data.get("type") == "order":
                    self.get_logger().info(f"收到新订单，立即起飞执行: {data['order']}")
                    await self.handle_order(data["order"])
                elif data.get("type") == "ping":
                    await self.safe_send({"type": "pong"})
                else:
                    self.get_logger().info(f"收到消息: {data}")
            except Exception as e:
                self.get_logger().error(f"WebSocket异常: {e}，尝试重连...")
                await self.connect()

    def run(self):
        self.get_logger().info("[DEBUG] run() 启动")
        self.wait_for_gps()
        loop = asyncio.get_event_loop()
        loop.run_until_complete(self.connect())
        loop.create_task(self.listen())
        loop.run_forever()

def main(args=None):
    rclpy.init(args=args)
    node = DeliveryDrone()
    node.run()
    rclpy.shutdown()

if __name__ == "__main__":
    main() 