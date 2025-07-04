# 部署与环境配置

## 1. 依赖环境

- Ubuntu 22.04/20.04，推荐桌面版
- ROS2 Humble（或Jazzy，需源码编译px4_msgs）
- PX4-Autopilot（SITL仿真）
- FastAPI、uvicorn、pydantic、requests
- React、Ant Design、Leaflet、axios
- Python 3.10+
- Micro XRCE-DDS Agent

## 2. 依赖安装与编译

### PX4-Autopilot
```bash
cd PX4-Autopilot
make px4_sitl gazebo
```

### MAVROS/px4_ros_com
```bash
sudo apt install ros-humble-mavros ros-humble-mavros-extras
# 启动桥接
ros2 launch mavros px4.launch.py fcu_url:=udp://:14540@127.0.0.1:14557
```

### px4_msgs源码编译
```bash
cd src/px4_msgs
rosdep install --from-paths . --ignore-src -y
colcon build --packages-select px4_msgs
```

### Micro XRCE-DDS Agent
```bash
cd Micro-XRCE-DDS-Agent
mkdir build && cd build
cmake ..
make -j4
sudo make install
# 启动
MicroXRCEAgent udp4 -p 8888
```

### 后端依赖
```bash
cd backend
pip install --break-system-packages -r requirements.txt
```

### 前端依赖
```bash
cd frontend
npm install
```

## 3. 启动流程

1. 启动PX4仿真：`make px4_sitl gazebo`
2. 启动MAVROS桥接：`ros2 launch mavros px4.launch.py ...`
3. 启动Micro XRCE-DDS Agent：`MicroXRCEAgent udp4 -p 8888`
4. 启动后端：`uvicorn main:app --reload --host 0.0.0.0 --port 8000`
5. 编译并启动无人机节点：`colcon build && source install/setup.bash && ros2 run delivery_drone delivery_drone_node`
6. 启动前端：`npm start`

可用`start_all.sh`一键启动。

## 4. 常见问题与修复

- **px4_msgs无apt包**：需源码编译。
- **websockets依赖找不到**：用`pip install --target $(python3 -c 'import site; print(site.getsitepackages()[0])') websockets`安装到colcon运行时目录。
- **无人机节点未收到GPS**：持续报错并等待，需检查PX4仿真或真机连接。
- **端口冲突/依赖缺失**：检查端口占用与依赖安装。

## 5. 环境变量与参数

- `DRONE_ID`：无人机ID，支持多机并发
- `DELIVERY_BACKEND_URL`：后端WebSocket地址
- `TAKEOFF_ALT`、`WAIT_TAKEOFF`等：飞行参数 