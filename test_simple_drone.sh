#!/bin/bash
# 简化无人机测试脚本

echo "=== 简化无人机测试 ==="

# 激活ROS2环境
cd /home/fly/fly
source install/setup.bash

# 停止现有的无人机节点
pkill -f delivery_drone_node.py 2>/dev/null || true
sleep 2

echo "1. 检查PX4 SITL状态..."
if pgrep -f "px4.*gz_x500" > /dev/null; then
    echo "✓ PX4 SITL正在运行"
else
    echo "✗ PX4 SITL未运行，请先启动: make px4_sitl gz_x500"
    exit 1
fi

echo "2. 检查GPS数据..."
timeout 5 ros2 topic echo /fmu/out/vehicle_gps_position --once > /dev/null 2>&1
if [ $? -eq 0 ]; then
    echo "✓ GPS数据正常"
else
    echo "✗ GPS数据异常"
    exit 1
fi

echo "3. 启动无人机节点..."
cd src/delivery_drone/delivery_drone
export DRONE_ID=test_drone
export DELIVERY_BACKEND_URL=ws://127.0.0.1:8000/ws/drone

# 在后台启动无人机节点
python3 delivery_drone_node.py &
DRONE_PID=$!

echo "无人机节点已启动 (PID: $DRONE_PID)"

# 等待节点初始化
sleep 5

echo "4. 检查节点状态..."
if ros2 node list | grep -q delivery_drone; then
    echo "✓ 无人机节点已注册"
else
    echo "✗ 无人机节点未注册"
    kill $DRONE_PID 2>/dev/null
    exit 1
fi

echo "5. 检查话题发布..."
if ros2 topic info /fmu/in/vehicle_command | grep -q "Publisher count: [1-9]"; then
    echo "✓ 命令话题正常发布"
else
    echo "✗ 命令话题发布异常"
fi

echo "6. 运行基本功能测试..."
cd /home/fly/fly
python3 test_drone_functions.py &
TEST_PID=$!

echo "功能测试已启动 (PID: $TEST_PID)"
echo "测试将持续约18秒..."

# 等待测试完成
sleep 20

# 清理
kill $DRONE_PID $TEST_PID 2>/dev/null || true
echo "测试完成，已清理进程"

echo "=== 测试结束 ===" 