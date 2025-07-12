#!/bin/bash
# 启动无人机端 ROS2 节点

# 设置错误处理
set -e

# 检查是否已经有无人机节点在运行
if pgrep -f "delivery_drone_node.py" > /dev/null; then
    echo "警告：检测到无人机节点已在运行，正在停止..."
    pkill -f delivery_drone_node.py
    sleep 2
fi

# 切换到项目目录
cd /home/fly/fly

# 激活ROS2环境
source install/setup.bash

# 切换到无人机节点目录
cd src/delivery_drone/delivery_drone

# 设置环境变量
export DRONE_ID=drone001
export DELIVERY_BACKEND_URL=ws://127.0.0.1:8000/ws/drone

# 检查依赖
echo "检查依赖..."
python3 -c "import rclpy, websockets, px4_msgs" 2>/dev/null || {
    echo "错误：缺少必要的依赖包"
    echo "请确保已安装：rclpy, websockets, px4_msgs"
    exit 1
}

# 检查PX4 SITL是否运行
if ! pgrep -f "px4.*gz_x500" > /dev/null; then
    echo "警告：未检测到PX4 SITL仿真器运行"
    echo "请先运行: make px4_sitl gz_x500"
    echo "是否继续启动无人机节点？(y/N)"
    read -r response
    if [[ ! "$response" =~ ^[Yy]$ ]]; then
        exit 1
    fi
fi

# 检查后端服务是否运行
if ! curl -s http://127.0.0.1:8000/health > /dev/null 2>&1; then
    echo "警告：未检测到后端服务运行"
    echo "请先启动后端服务"
    echo "是否继续启动无人机节点？(y/N)"
    read -r response
    if [[ ! "$response" =~ ^[Yy]$ ]]; then
        exit 1
    fi
fi

echo "启动无人机节点..."
python3 delivery_drone_node.py 