#!/usr/bin/env python3
"""
Offboard功能测试脚本
用于验证无人机节点能否正确进入offboard模式
"""

import rclpy
from rclpy.node import Node
from px4_msgs.msg import VehicleCommand, TrajectorySetpoint, OffboardControlMode
import time

class OffboardTestNode(Node):
    def __init__(self):
        super().__init__('offboard_test_node')
        
        # 创建发布器
        self.cmd_pub = self.create_publisher(VehicleCommand, "/fmu/in/vehicle_command", 10)
        self.setpoint_pub = self.create_publisher(TrajectorySetpoint, "/fmu/in/trajectory_setpoint", 10)
        self.offboard_control_mode_pub = self.create_publisher(OffboardControlMode, "/fmu/in/offboard_control_mode", 10)
        
        # 创建定时器（10Hz）
        self.timer = self.create_timer(0.1, self.timer_callback)
        
        # 计数器
        self.counter = 0
        
        self.get_logger().info('Offboard测试节点启动')
        self.get_logger().info('将发送OffboardControlMode和TrajectorySetpoint消息')
        self.get_logger().info('10秒后尝试切换到offboard模式')

    def timer_callback(self):
        """定时器回调函数"""
        # 发布OffboardControlMode消息
        offboard_msg = OffboardControlMode()
        offboard_msg.position = True
        offboard_msg.velocity = False
        offboard_msg.acceleration = False
        offboard_msg.attitude = False
        offboard_msg.body_rate = False
        offboard_msg.thrust_and_torque = False
        offboard_msg.direct_actuator = False
        offboard_msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.offboard_control_mode_pub.publish(offboard_msg)
        
        # 发布TrajectorySetpoint消息
        setpoint_msg = TrajectorySetpoint()
        setpoint_msg.position = [0.0, 0.0, -5.0]  # 悬停在5米高度
        setpoint_msg.yaw = 0.0
        setpoint_msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
        self.setpoint_pub.publish(setpoint_msg)
        
        # 10秒后切换到offboard模式
        if self.counter == 100:  # 10秒 = 100 * 0.1秒
            self.get_logger().info('切换到Offboard模式')
            cmd_msg = VehicleCommand()
            cmd_msg.command = 176  # VEHICLE_CMD_DO_SET_MODE
            cmd_msg.param1 = 1.0
            cmd_msg.param2 = 6.0   # PX4_CUSTOM_MAIN_MODE_OFFBOARD
            cmd_msg.target_system = 1
            cmd_msg.target_component = 1
            cmd_msg.source_system = 1
            cmd_msg.source_component = 1
            cmd_msg.from_external = True
            cmd_msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
            self.cmd_pub.publish(cmd_msg)
            
        # 11秒后解锁
        if self.counter == 110:
            self.get_logger().info('解锁无人机')
            cmd_msg = VehicleCommand()
            cmd_msg.command = 400  # VEHICLE_CMD_COMPONENT_ARM_DISARM
            cmd_msg.param1 = 1.0   # ARM
            cmd_msg.target_system = 1
            cmd_msg.target_component = 1
            cmd_msg.source_system = 1
            cmd_msg.source_component = 1
            cmd_msg.from_external = True
            cmd_msg.timestamp = int(self.get_clock().now().nanoseconds / 1000)
            self.cmd_pub.publish(cmd_msg)
            
        self.counter += 1
        
        # 每100次打印一次状态
        if self.counter % 100 == 0:
            self.get_logger().info(f'运行时间: {self.counter * 0.1:.1f}秒')

def main(args=None):
    rclpy.init(args=args)
    node = OffboardTestNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main() 