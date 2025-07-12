#!/bin/bash
# 测试优化后的无人机节点启动脚本

echo "=== 优化后的无人机节点测试脚本 ==="
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
ros2 topic list | grep -E "(gps|vehicle|offboard)" || echo "   未找到相关话题"

echo ""
echo "2. 检查PX4仿真状态..."
if pgrep -f "px4_sitl" > /dev/null; then
    echo "   PX4仿真正在运行"
else
    echo "   PX4仿真未运行，请先启动仿真"
    echo "   启动命令: make px4_sitl gz_x500"
    exit 1
fi

echo ""
echo "3. 设置环境变量..."
export DRONE_ID=drone001
export DELIVERY_BACKEND_URL=ws://127.0.0.1:8000/ws/drone
export TAKEOFF_ALT=5.0
export WAIT_TAKEOFF=5
export WAIT_FLIGHT=10
export WAIT_LAND=5

echo "   DRONE_ID: $DRONE_ID"
echo "   DELIVERY_BACKEND_URL: $DELIVERY_BACKEND_URL"
echo "   TAKEOFF_ALT: $TAKEOFF_ALT"

echo ""
echo "4. 启动优化后的无人机节点..."
echo "   按Ctrl+C停止测试"
echo "   注意观察日志中的offboard模式切换信息"

cd src/delivery_drone/delivery_drone

# 尝试运行优化后的节点
python3 delivery_drone_node.py 