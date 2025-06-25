# 多无人机送外卖仿真系统（ROS2 + FastAPI + PX4 + React）

本项目实现了一个基于ROS2、FastAPI、PX4仿真和React前端的多无人机送外卖系统，支持无人机自动注册、任务分配、状态上报、地图可视化和管理后台。

---

## 系统架构

```mermaid
graph TD
  PX4["PX4-Autopilot<br/>(Gazebo SITL)"] -- UDP/MAVLink --> MAVROS[MAVROS/px4_ros_com<br/>(ROS2桥接)]
  MAVROS -- ROS2 Topic/Service --> DroneNode[delivery_drone<br/>(ROS2节点)]
  DroneNode -- HTTP/REST --> Backend[FastAPI后端]
  Backend -- REST API --> Frontend[React前端管理系统]
```

---

## 主要功能
- 多无人机自动注册、位置上报、状态同步
- 订单管理、自动分配最近空闲无人机
- 无人机节点自动接单、模拟飞行、状态上报
- 前端可视化后台：订单/无人机管理、地图标注
- 支持PX4仿真与MAVROS桥接，便于后续对接真实飞控

---

## 快速部署与测试

### 1. 启动PX4仿真
```bash
cd PX4-Autopilot
make px4_sitl gazebo
```

### 2. 启动MAVROS桥接
```bash
source /opt/ros/humble/setup.bash
ros2 launch mavros px4.launch.py fcu_url:=udp://:14540@127.0.0.1:14557
```

### 3. 启动后端服务
```bash
cd backend
pip install --break-system-packages -r requirements.txt
uvicorn main:app --reload --host 0.0.0.0 --port 8000
```

### 4. 编译并启动无人机节点
```bash
cd ~/fly
colcon build
source install/setup.bash
ros2 run delivery_drone delivery_drone_node
```

### 5. 启动前端管理系统
```bash
cd frontend
npm install
npm start
```

### 6. 添加订单（可用前端或curl）
```bash
curl -X POST "http://127.0.0.1:8000/add_order" -H "Content-Type: application/json" -d '{"pickup":[31.2305,121.4738],"dropoffs":[[31.2315,121.4805]]}'
```

---

## 目录结构
```
fly/
├── PX4-Autopilot/           # PX4源码（仿真环境）
├── backend/                 # FastAPI后端服务
│   └── main.py
├── src/
│   └── delivery_drone/      # ROS2无人机包
│       └── delivery_drone_node.py
├── frontend/                # React前端管理系统
│   └── src/
│       ├── api.js
│       └── components/
│           ├── OrderTable.js
│           ├── DroneTable.js
│           └── MapView.js
├── doc/                     # 技术细节与开发文档
│   └── TECHNICAL_DETAILS.md
└── README.md
```

---

## 典型用例
- 多无人机注册与调度，自动分配最近空闲无人机
- 订单增删改查，状态实时同步
- 地图可视化无人机与订单位置
- 支持批量下单、模拟多机协同

---

## 主要依赖
- ROS2 Humble（rclpy、mavros、px4_ros_com）
- PX4-Autopilot（SITL仿真）
- FastAPI、uvicorn、pydantic、requests
- React、Ant Design、Leaflet、axios
- Python 3.10+

---

## 扩展建议
- 对接真实MAVROS/px4_ros_com话题，实现无人机真实飞控
- 支持多机协同、任务优先级、动态调度
- Web前端可视化、数据库持久化
- 支持更多任务类型（如多点配送、动态避障等）

---

## 参考资料
- PX4官方文档：https://docs.px4.io/
- MAVROS文档：https://github.com/mavlink/mavros
- FastAPI文档：https://fastapi.tiangolo.com/
- ROS2文档：https://docs.ros.org/
- Ant Design：https://ant.design/
- Leaflet：https://leafletjs.com/

---

## 技术细节

### 1. PX4仿真
- 使用PX4-Autopilot源码（如 `~/PX4-Autopilot`）
- 启动命令：`make px4_sitl gazebo`
- 支持Gazebo仿真环境，默认UDP端口14540/14557

### 2. MAVROS/px4_ros_com桥接
- 典型命令：
  ```bash
  ros2 launch mavros px4.launch.py fcu_url:=udp://:14540@127.0.0.1:14557
  ```
- 作用：让ROS2节点能通过标准话题/服务控制仿真无人机

### 3. 后端服务（backend/main.py）
- FastAPI实现，支持：
  - `/register_drone`：无人机注册/心跳，自动更新状态
  - `/add_order`：添加订单，自动分配给最近的空闲无人机
  - `/next_order`：无人机获取分配给自己的订单
  - `/drone_status`：无人机上报状态
  - `/orders` `/drones`：查询所有订单和无人机状态
- 订单分配算法：基于欧氏距离，分配给距离pickup最近的idle无人机
- 支持多无人机并发、重复注册、状态实时同步

### 4. 无人机节点（delivery_drone/delivery_drone_node.py）
- 启动时自动注册，注册失败自动重试
- 支持通过环境变量配置DRONE_ID、后端地址
- 定期请求订单，自动接单、模拟飞行、上报状态
- 支持多机并发，自动打印后端无人机列表
- 可扩展对接MAVROS/px4_ros_com实现真实飞控

### 5. 典型流程
1. 启动PX4仿真和MAVROS桥接
2. 启动后端服务
3. 启动一个或多个无人机节点
4. 添加订单，后端自动分配，节点自动接单、模拟飞行、上报状态
5. 可通过API实时查看所有无人机和订单状态

---

## 文档与支持
- 详细API文档见 http://127.0.0.1:8000/docs
- 如需定制开发、仿真脚本、算法扩展，请联系开发者 