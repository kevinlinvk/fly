# 多无人机送外卖仿真系统（ROS2 + FastAPI + PX4 + React）

本项目实现了一个基于ROS2、FastAPI、PX4仿真和React前端的多无人机自动配送系统，支持无人机自动注册、任务分配、状态上报、地图可视化和管理后台。

---

## 快速上手

1. 启动PX4仿真：
   ```bash
   cd PX4-Autopilot
   make px4_sitl gazebo
   ```
2. 启动MAVROS桥接：
   ```bash
   source /opt/ros/humble/setup.bash
   ros2 launch mavros px4.launch.py fcu_url:=udp://:14540@127.0.0.1:14557
   ```
3. 启动Micro XRCE-DDS Agent：
   ```bash
   MicroXRCEAgent udp4 -p 8888
   ```
4. 启动后端服务：
   ```bash
   cd backend
   pip install --break-system-packages -r requirements.txt
   uvicorn main:app --reload --host 0.0.0.0 --port 8000
   ```
5. 编译并启动无人机节点：
   ```bash
   colcon build
   source install/setup.bash
   ros2 run delivery_drone delivery_drone_node
   ```
6. 启动前端管理系统：
   ```bash
   cd frontend
   npm install
   npm start
   ```

详细部署、参数配置、常见问题请查阅下方文档。

---

## 项目文档索引

- [系统架构与数据流](doc/ARCHITECTURE.md)
- [部署与环境配置](doc/DEPLOYMENT.md)
- [无人机节点实现详解](doc/DRONE_NODE.md)
- [后端API与调度算法](doc/BACKEND_API.md)
- [前端实现说明](doc/FRONTEND.md)
- [常见问题与调试FAQ](doc/FAQ.md)
- [参考资料与外部链接](doc/REFERENCE.md)

---

## 主要功能
- 多无人机自动注册、位置上报、状态同步
- 订单管理、自动分配最近空闲无人机
- 无人机节点自动接单、真实GPS飞行、状态上报
- 前端可视化后台：订单/无人机管理、地图标注
- 支持PX4仿真与MAVROS桥接，便于后续对接真实飞控

---

## 目录结构
```
fly/
├── PX4-Autopilot/           # PX4源码（仿真环境）
├── backend/                 # FastAPI后端服务
├── src/                     # ROS2无人机包及消息
├── frontend/                # React前端管理系统
├── doc/                     # 详细技术文档（推荐查阅）
└── README.md
```

---

## 参考与支持
- 详细API文档见 http://127.0.0.1:8000/docs
- 更多资料请查阅 [doc/REFERENCE.md](doc/REFERENCE.md)
- 如需定制开发、仿真脚本、算法扩展，请联系开发者 