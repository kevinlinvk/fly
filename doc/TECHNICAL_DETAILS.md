# 多无人机送外卖系统 技术细节文档

---

## 1. 系统架构与数据流

```mermaid
graph TD
  PX4["PX4-Autopilot\n(Gazebo SITL)"] -- UDP/MAVLink --> MAVROS[MAVROS/px4_ros_com\n(ROS2桥接)]
  MAVROS -- ROS2 Topic/Service --> DroneNode[delivery_drone\n(ROS2节点)]
  DroneNode -- HTTP/REST --> Backend[FastAPI后端]
  Backend -- REST API --> Frontend[React前端管理系统]
```

- PX4-Autopilot：无人机仿真与飞控，支持Gazebo SITL。
- MAVROS/px4_ros_com：ROS2与PX4的通信桥。
- delivery_drone：无人机任务节点，自动注册、接单、模拟飞行、状态上报。
- backend：FastAPI后端，负责无人机注册、订单管理、任务分配、状态同步。
- frontend：React前端，管理后台、地图、表格。

---

## 2. 主要模块说明

### 2.1 PX4-Autopilot
- 目录：PX4-Autopilot/
- 启动仿真：`make px4_sitl gazebo`
- 默认UDP端口：14540/14557

### 2.2 MAVROS/px4_ros_com
- 作用：桥接ROS2与PX4，支持位置/姿态/任务控制。
- 启动示例：
  ```bash
  ros2 launch mavros px4.launch.py fcu_url:=udp://:14540@127.0.0.1:14557
  ```

### 2.3 backend（FastAPI）
- 主要接口：
  - `POST /register_drone`：无人机注册/心跳，自动更新状态
  - `POST /add_order`：添加订单，自动分配给最近的空闲无人机
  - `GET /next_order?drone_id=xxx`：无人机获取分配给自己的订单
  - `POST /drone_status`：无人机上报状态
  - `GET /orders`、`GET /drones`：查询所有订单和无人机状态
- 订单分配算法：基于欧氏距离，系统会自动将新订单分配给距离 pickup 点最近的空闲（idle）无人机。
- 如果没有空闲无人机，订单状态为 waiting，待有无人机空闲后再分配。
- 支持多无人机并发、重复注册、状态实时同步。

### 2.4 delivery_drone（ROS2节点）
- 启动时自动注册，注册失败自动重试
- 支持通过环境变量配置DRONE_ID、后端地址
- 定期请求订单，自动接单、模拟飞行、上报状态
- 支持多机并发，自动打印后端无人机列表
- 可扩展对接MAVROS/px4_ros_com实现真实飞控
- 主要流程：
  1. 启动自动注册
  2. 定期请求订单
  3. 自动接单、模拟飞行、上报状态
  4. 订单完成后回到idle

### 2.5 frontend（React）
- 主要页面：订单管理、无人机管理、地图总览
- 组件：OrderTable、DroneTable、MapView
- API统一封装，自动对接后端
- 地图基于Leaflet，支持无人机/订单位置标注
- 表格支持增删改查、状态实时刷新

---

## 3. 主要接口与数据结构

### 3.1 注册无人机
```http
POST /register_drone
{
  "drone_id": "drone_test",
  "location": [31.23, 121.47]
}
```

### 3.2 添加订单
```http
POST /add_order
{
  "pickup": [31.2305, 121.4738],
  "dropoffs": [[31.2315, 121.4805]]
}
```

### 3.3 查询所有无人机
```http
GET /drones
```

### 3.4 查询所有订单
```http
GET /orders
```

### 3.5 典型返回结构
```json
[
  {
    "drone_id": "drone156",
    "order_id": 1,
    "location": [31.23, 121.47],
    "status": "busy"
  }
]
```

---

## 4. 典型业务流程

1. 启动PX4仿真和MAVROS桥接
2. 启动后端服务
3. 启动一个或多个无人机节点
4. 添加订单，后端自动分配，节点自动接单、模拟飞行、上报状态
5. 可通过前端/接口实时查看所有无人机和订单状态

---

## 5. 关键算法与调度策略
- 订单分配：基于pickup点与所有idle无人机的欧氏距离，分配给最近的无人机
- 状态同步：无人机节点定期上报，后端实时更新
- 异常处理：注册/上报失败自动重试，支持多机并发

---

## 6. 扩展建议与注意事项
- 对接真实MAVROS/px4_ros_com话题，实现无人机真实飞控
- 支持多机协同、任务优先级、动态调度
- Web前端可视化、数据库持久化
- 支持更多任务类型（如多点配送、动态避障等）
- 生产环境建议增加认证、权限、日志、监控等

---

## 7. 依赖环境与版本
- ROS2 Humble（rclpy、mavros、px4_ros_com）
- PX4-Autopilot（SITL仿真）
- FastAPI、uvicorn、pydantic、requests
- React、Ant Design、Leaflet、axios
- Python 3.10+

---

## 8. 参考资料
- PX4官方文档：https://docs.px4.io/
- MAVROS文档：https://github.com/mavlink/mavros
- FastAPI文档：https://fastapi.tiangolo.com/
- ROS2文档：https://docs.ros.org/
- Ant Design：https://ant.design/
- Leaflet：https://leafletjs.com/

## 后端 API 接口说明

- `/register_drone`：无人机注册/心跳，自动更新状态
- `/add_order`：添加订单，自动分配给最近的空闲无人机
- `/next_order`：无人机获取分配给自己的订单
- `/drone_status`：无人机上报状态
- `/orders` `/drones`：查询所有订单和无人机状态

## 订单分配与调度算法

- 订单分配算法：基于欧氏距离，系统会自动将新订单分配给距离 pickup 点最近的空闲（idle）无人机。
- 如果没有空闲无人机，订单状态为 waiting，待有无人机空闲后再分配。
- 支持多无人机并发、重复注册、状态实时同步。

## 系统并发与状态同步

- 支持多架无人机同时注册、接收和执行订单。
- 无人机状态（idle/busy/finished）和位置实时同步到后端。
- 订单状态（waiting/assigned/delivering/finished）自动流转。
- 所有状态和订单信息可通过 `/orders` `/drones` 接口实时查询。

## 典型接口调用流程

1. 无人机通过 `/register_drone` 或 WebSocket 注册并上报位置。
2. 用户/前端通过 `/add_order` 添加新订单。
3. 后端自动分配订单给最近的空闲无人机。
4. 无人机通过 `/next_order` 获取分配给自己的订单。
5. 无人机执行任务并通过 `/drone_status` 上报状态。
6. 订单完成后，状态自动更新，相关无人机恢复 idle。

## 相关脚本

- `start_backend.sh`：启动 FastAPI 后端
- `start_frontend.sh`：启动 React 前端
- `start_drone.sh`：启动无人机端 ROS2 节点
- `start_all.sh`：一键启动所有组件

如需扩展接口或算法，请参考 main.py 及本技术文档相关章节。 