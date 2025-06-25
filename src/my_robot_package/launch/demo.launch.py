from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='my_robot_package',
            executable='simple_publisher',
            name='publisher_node',
            output='screen'
        ),
        Node(
            package='my_robot_package',
            executable='simple_subscriber',
            name='subscriber_node',
            output='screen'
        )
    ]) 