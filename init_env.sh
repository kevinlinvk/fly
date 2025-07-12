#!/usr/bin/env bash
# 适用于 Ubuntu 24.04 + ROS2 Jazzy 的一键环境初始化脚本
# 用于多无人机仿真系统
set -e

# 1. 基础依赖
sudo apt update
sudo apt install -y git wget curl python3-pip python3-colcon-common-extensions build-essential cmake ninja-build python3-vcstool python3-rosdep lsb-release locales npm

# 2. ROS2 Jazzy 安装
if ! [ -f /opt/ros/jazzy/setup.bash ]; then
  sudo apt install -y software-properties-common
  sudo add-apt-repository universe
  sudo apt update && sudo apt install -y curl
  sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
  echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
  sudo apt update
  sudo apt install -y ros-jazzy-desktop
fi
source /opt/ros/jazzy/setup.bash

# 3. 初始化rosdep
sudo rosdep init || true
rosdep update

# 4. PX4 SITL 依赖
sudo apt install -y python3-jinja2 python3-empy python3-toml python3-numpy python3-yaml python3-dev libxml2-utils libgtest-dev clang-format

# 5. MAVROS/px4_ros_com 桥接
sudo apt install -y ros-jazzy-mavros ros-jazzy-mavros-extras

# 6. Micro XRCE-DDS Agent
if ! command -v MicroXRCEAgent &> /dev/null; then
  cd Micro-XRCE-DDS-Agent
  mkdir -p build && cd build
  cmake ..
  make -j$(nproc)
  sudo make install
  cd ../..
fi

# 7. Python依赖（后端/无人机节点）
cd backend
pip3 install --break-system-packages -r requirements.txt
cd ..

# 8. Node依赖（前端）
cd frontend
npm install
cd ..

# 9. ROS2工作区依赖
cd src/px4_msgs
rosdep install --from-paths . --ignore-src -y
cd ../..
colcon build --symlink-install

# 10. 常见问题修复
# websockets依赖（如无人机节点报错）
pip3 install --break-system-packages websockets

# 11. 环境变量建议
# echo 'export DRONE_ID=drone001' >> ~/.bashrc
# echo 'export DELIVERY_BACKEND_URL=ws://127.0.0.1:8000/ws/drone' >> ~/.bashrc

# 12. 完成

echo "\n环境初始化完成！请依次启动 PX4、MAVROS、Micro XRCE-DDS Agent、后端、无人机节点和前端。"
echo "如遇依赖问题，请参考 doc/DEPLOYMENT.md 或 README.md。" 