import rclpy
from rclpy.node import Node
from px4_msgs.msg import SensorGps
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

class GpsPrintNode(Node):
    def __init__(self):
        super().__init__('gps_print_node')
        qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )
        self.create_subscription(
            SensorGps,
            '/fmu/out/vehicle_gps_position',
            self.gps_callback,
            qos
        )
        self.get_logger().info('已启动，等待GPS消息...')

    def gps_callback(self, msg):
        self.get_logger().info(
            f"收到GPS: lat={msg.latitude_deg}, lon={msg.longitude_deg}, altitude_msl_m={msg.altitude_msl_m}, fix_type={msg.fix_type}"
        )


def main(args=None):
    rclpy.init(args=args)
    node = GpsPrintNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main() 