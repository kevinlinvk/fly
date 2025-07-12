#!/usr/bin/env python3
"""
无人机功能测试脚本
"""

import rclpy
from rclpy.node import Node
from px4_msgs.msg import VehicleCommand, TrajectorySetpoint, OffboardControlMode
import time
import math

class DroneTester(Node):
    def __init__(self):
        super().__init__('drone_tester')
        
        # 创建发布器
        self.cmd_pub = self.create_publisher(VehicleCommand, "/fmu/in/vehicle_command", 10)
        self.setpoint_pub = self.create_publisher(TrajectorySetpoint, "/fmu/in/trajectory_setpoint", 10)
        self.offboard_control_mode_pub = self.create_publisher(OffboardControlMode, "/fmu/in/offboard_control_mode", 10)
        
        # 创建定时器
        self.timer = self.create_timer(0.1, self.timer_callback)
        
        # 状态变量
        self.counter = 0
        self.is_offboard = False
        self.is_armed = False
        
        self.get_logger().info("无人机测试器初始化完成")

    def timer_callback(self):
        """定时器回调函数"""
        # 发布OffboardControlMode
        self.publish_offboard_control_mode()
        
        # 发布TrajectorySetpoint
        self.publish_trajectory_setpoint()
        
        # 切换到offboard模式
        if self.counter == 10 and not self.is_offboard:
            self.get_logger().info("切换到Offboard模式")
            self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_DO_SET_MODE, 1.0, 6.0)
            self.is_offboard = True
            
        # 解锁无人机
        if self.counter == 11 and not self.is_armed:
            self.get_logger().info("解锁无人机")
            self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, 1.0)
            self.is_armed = True
            
        # 起飞测试
        if self.counter == 20:
            self.get_logger().info("测试起飞")
            self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_NAV_TAKEOFF, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 5.0)
            
        # 悬停测试
        if self.counter == 50:
            self.get_logger().info("测试悬停")
            self.goto_position(0.0, 0.0, -5.0)
            
        # 移动测试
        if self.counter == 80:
            self.get_logger().info("测试移动")
            self.goto_position(5.0, 0.0, -5.0)
            
        if self.counter == 110:
            self.get_logger().info("测试返回")
            self.goto_position(0.0, 0.0, -5.0)
            
        # 降落测试
        if self.counter == 140:
            self.get_logger().info("测试降落")
            self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_NAV_LAND, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
            
        # 锁定无人机
        if self.counter == 170:
            self.get_logger().info("锁定无人机")
            self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_COMPONENT_ARM_DISARM, 0.0)
            
        # 结束测试
        if self.counter == 180:
            self.get_logger().info("测试完成")
            self.destroy_node()
            rclpy.shutdown()
            
        self.counter += 1

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

    def publish_trajectory_setpoint(self):
        """发布TrajectorySetpoint消息"""
        msg = TrajectorySetpoint()
        msg.position = [0.0, 0.0, -5.0]  # 默认悬停位置
        msg.yaw = 0.0
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.setpoint_pub.publish(msg)

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

    def goto_position(self, x, y, z):
        """飞行到指定位置"""
        msg = TrajectorySetpoint()
        msg.position = [x, y, z]
        msg.yaw = 0.0
        msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.setpoint_pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    tester = DroneTester()
    
    try:
        rclpy.spin(tester)
    except KeyboardInterrupt:
        pass
    finally:
        tester.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main() 