#!/bin/bash

echo "💓 无人机心跳机制测试启动脚本"
echo "=================================="

# 检查后端服务是否运行
echo "1. 检查后端服务状态..."
if curl -s http://127.0.0.1:8000/docs > /dev/null; then
    echo "✅ 后端服务正在运行"
else
    echo "❌ 后端服务未运行，请先启动后端服务："
    echo "   cd backend && uvicorn main:app --reload --host 0.0.0.0 --port 8000"
    exit 1
fi

# 检查依赖
echo ""
echo "2. 检查Python依赖..."
if python3 -c "import websockets, requests, asyncio" 2>/dev/null; then
    echo "✅ Python依赖已安装"
else
    echo "❌ 缺少Python依赖，请安装："
    echo "   pip install websockets requests"
    exit 1
fi

# 运行测试
echo ""
echo "3. 启动心跳机制测试..."
echo "   测试将启动3个模拟无人机，运行2分钟"
echo "   观察心跳检测、离线检测、订单重新分配等功能"
echo ""

python3 heartbeat_test.py

echo ""
echo "=================================="
echo "测试完成！"
echo ""
echo "其他测试命令："
echo "  # 查看所有无人机状态"
echo "  curl http://127.0.0.1:8000/drones | jq '.'"
echo ""
echo "  # 查看在线无人机"
echo "  curl http://127.0.0.1:8000/online_drones | jq '.'"
echo ""
echo "  # 查看所有订单"
echo "  curl http://127.0.0.1:8000/orders | jq '.'" 