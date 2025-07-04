#!/bin/bash
# 一键启动后端、前端、Micro XRCE-DDS Agent、无人机端（调试友好版，需gnome-terminal）

# 检查端口占用
function check_port() {
  if lsof -i:$1 &>/dev/null; then
    echo "[警告] 端口$1已被占用，相关服务可能已在运行或端口冲突。"
  fi
}

check_port 8000  # FastAPI
check_port 3000  # React
check_port 8888  # Micro XRCE-DDS Agent

# 启动Micro XRCE-DDS Agent
if ! pgrep -f MicroXRCEAgent &>/dev/null; then
  gnome-terminal --title="Micro XRCE-DDS Agent" -- bash -c "./start_uxrce_agent.sh; exec bash"
else
  echo "Micro XRCE-DDS Agent 已在运行"
fi
sleep 1

# 启动后端
if ! lsof -i:8000 &>/dev/null; then
  gnome-terminal --title="FastAPI后端" -- bash -c "cd backend && uvicorn main:app --host 0.0.0.0 --port 8000 --reload; exec bash"
else
  echo "FastAPI后端已在运行"
fi
sleep 1

# 启动前端
if ! lsof -i:3000 &>/dev/null; then
  gnome-terminal --title="React前端" -- bash -c "cd frontend && npm start; exec bash"
else
  echo "React前端已在运行"
fi
sleep 1

# 启动无人机节点（支持多机并发，示例启动2架）
for ID in drone001 drone002; do
  gnome-terminal --title="无人机节点 $ID" -- bash -c "cd src/delivery_drone/delivery_drone && export DRONE_ID=$ID && export DELIVERY_BACKEND_URL=ws://127.0.0.1:8000/ws/drone && python delivery_drone_node.py; exec bash"
done

echo "所有服务已尝试启动。可在各终端窗口查看日志，调试时可单独重启某一服务。" 