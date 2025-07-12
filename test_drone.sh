#!/bin/bash
# 测试无人机节点启动脚本

echo "=== 无人机节点测试脚本 ==="
echo "当前目录: $(pwd)"

# 检查ROS2环境
if ! command -v ros2 &> /dev/null; then
    echo "错误: ROS2未安装或未source环境"
    exit 1
fi

# 检查PX4环境
if [ ! -d "PX4-Autopilot" ]; then
    echo "错误: PX4-Autopilot目录不存在"
    exit 1
fi

# 检查无人机节点代码
if [ ! -f "src/delivery_drone/delivery_drone/delivery_drone_node.py" ]; then
    echo "错误: 无人机节点代码不存在"
    exit 1
fi

echo "1. 检查ROS2话题..."
echo "   可用话题:"
ros2 topic list | grep -E "(gps|vehicle)" || echo "   未找到相关话题"

echo ""
echo "2. 检查GPS话题发布者..."
ros2 topic info /fmu/out/vehicle_gps_position 2>/dev/null || echo "   GPS话题不存在或未发布"

echo ""
echo "3. 启动GPS测试节点..."
echo "   按Ctrl+C停止测试"
cd src/delivery_drone/delivery_drone
python3 test_gps_connection.py 