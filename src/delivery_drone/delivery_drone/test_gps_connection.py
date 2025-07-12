#!/usr/bin/env python3
"""
GPS连接测试脚本
用于验证无人机节点能否正确接收PX4仿真发布的GPS数据
"""

import rclpy
from rclpy.node import Node
from px4_msgs.msg import SensorGps
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
import time

class GpsTestNode(Node):
    def __init__(self):
        super().__init__('gps_test_node')
        
        # 使用与无人机节点相同的QoS设置
        qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )
        
        # 订阅GPS话题
        self.gps_sub = self.create_subscription(
            SensorGps,
            '/fmu/out/vehicle_gps_position',
            self.gps_callback,
            qos
        )
        
        self.message_count = 0
        self.start_time = time.time()
        
        self.get_logger().info('GPS测试节点启动，等待GPS消息...')
        self.get_logger().info('话题: /fmu/out/vehicle_gps_position')
        self.get_logger().info('消息类型: SensorGps')
        self.get_logger().info('QoS: BEST_EFFORT, KEEP_LAST, depth=1')

    def gps_callback(self, msg):
        """GPS回调函数"""
        self.message_count += 1
        elapsed = time.time() - self.start_time
        
        self.get_logger().info(
            f"[{self.message_count}] GPS数据: "
            f"lat={msg.latitude_deg:.6f}, "
            f"lon={msg.longitude_deg:.6f}, "
            f"alt={msg.altitude_msl_m:.1f}m, "
            f"fix_type={msg.fix_type}, "
            f"运行时间={elapsed:.1f}s"
        )

def main(args=None):
    rclpy.init(args=args)
    node = GpsTestNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('测试结束')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main() 