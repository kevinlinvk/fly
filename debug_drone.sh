#!/bin/bash
# 无人机系统调试脚本

echo "=== 无人机系统调试报告 ==="
echo "时间: $(date)"
echo ""

# 激活ROS2环境
cd /home/fly/fly
source install/setup.bash

echo "=== 1. 系统状态检查 ==="
echo "ROS2环境: $(which ros2)"
echo "Python版本: $(python3 --version)"
echo ""

echo "=== 2. PX4 SITL状态 ==="
if pgrep -f "px4.*gz_x500" > /dev/null; then
    echo "✓ PX4 SITL仿真器正在运行"
    echo "进程信息:"
    ps aux | grep -E "(px4|gz)" | grep -v grep | head -5
else
    echo "✗ PX4 SITL仿真器未运行"
fi
echo ""

echo "=== 3. ROS2话题状态 ==="
echo "GPS话题:"
ros2 topic info /fmu/out/vehicle_gps_position 2>/dev/null || echo "GPS话题不可用"
echo ""

echo "=== 4. 无人机节点状态 ==="
if pgrep -f "delivery_drone_node.py" > /dev/null; then
    echo "✓ 无人机节点正在运行"
    echo "进程信息:"
    ps aux | grep delivery_drone_node.py | grep -v grep
else
    echo "✗ 无人机节点未运行"
fi
echo ""

echo "=== 5. 后端服务状态 ==="
if curl -s http://127.0.0.1:8000/health > /dev/null 2>&1; then
    echo "✓ 后端服务正在运行"
else
    echo "✗ 后端服务未运行或不可访问"
fi
echo ""

echo "=== 6. 依赖包检查 ==="
python3 -c "import rclpy; print('✓ rclpy: 已安装')" 2>/dev/null || echo "✗ rclpy: 未安装"
python3 -c "import websockets; print('✓ websockets: 已安装')" 2>/dev/null || echo "✗ websockets: 未安装"
python3 -c "import px4_msgs; print('✓ px4_msgs: 已安装')" 2>/dev/null || echo "✗ px4_msgs: 未安装"
echo ""

echo "=== 7. 实时GPS数据 ==="
echo "最新GPS数据:"
timeout 5 ros2 topic echo /fmu/out/vehicle_gps_position --once 2>/dev/null || echo "无法获取GPS数据"
echo ""

echo "=== 8. 网络连接测试 ==="
if ping -c 1 127.0.0.1 > /dev/null 2>&1; then
    echo "✓ 本地网络连接正常"
else
    echo "✗ 本地网络连接异常"
fi
echo ""

echo "=== 调试完成 ===" 