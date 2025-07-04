# 系统架构与数据流

## 1. 总体架构

本系统为多无人机自动配送仿真平台，核心由四大部分组成：

- **PX4-Autopilot仿真**：负责无人机动力学与飞控，支持Gazebo SITL。
- **ROS2无人机节点（delivery_drone_node.py）**：通过订阅/发布PX4 ROS2话题，控制无人机起飞、飞行、降落，实时获取GPS，WebSocket对接后端。
- **FastAPI后端**：负责无人机注册、订单管理、调度分配、状态同步，支持REST与WebSocket接口。
- **React前端**：可视化管理后台，支持订单/无人机管理、地图展示。

### 架构图

```mermaid
graph TD
  PX4["PX4-Autopilot\n(Gazebo SITL)"] -- UDP/MAVLink --> MAVROS[MAVROS/px4_ros_com\n(ROS2桥接)]
  MAVROS -- ROS2 Topic/Service --> DroneNode[delivery_drone\n(ROS2节点)]
  DroneNode -- WebSocket/REST --> Backend[FastAPI后端]
  Backend -- REST API --> Frontend[React前端管理系统]
```

## 2. 各模块职责

- **PX4-Autopilot**：无人机仿真与飞控，支持多机SITL，UDP与ROS2桥接通信。
- **MAVROS/px4_ros_com**：桥接ROS2与PX4，支持位置/姿态/任务控制。
- **delivery_drone_node**：无人机任务节点，自动注册、接单、真实GPS飞行、状态上报。
- **backend**：FastAPI后端，负责无人机注册、订单管理、任务分配、状态同步。
- **frontend**：React前端，管理后台、地图、表格。

## 3. 数据流与通信协议

- PX4 <-> MAVROS/px4_ros_com：UDP/MAVLink
- MAVROS/px4_ros_com <-> delivery_drone_node：ROS2 Topic/Service
- delivery_drone_node <-> backend：WebSocket（实时）、REST（注册/状态上报）
- backend <-> frontend：REST API

## 4. 核心依赖

- ROS2 Humble（rclpy、mavros、px4_ros_com）
- PX4-Autopilot（SITL仿真）
- FastAPI、uvicorn、pydantic、requests
- React、Ant Design、Leaflet、axios
- Python 3.10+
- Micro XRCE-DDS Agent、px4_msgs源码编译 