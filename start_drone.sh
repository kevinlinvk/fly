#!/bin/bash
# 启动无人机端 ROS2 节点
cd src/delivery_drone/delivery_drone

# 可选：激活虚拟环境
# source /path/to/venv/bin/activate

export DRONE_ID=drone001
export DELIVERY_BACKEND_URL=ws://127.0.0.1:8000/ws/drone

python delivery_drone_node.py 