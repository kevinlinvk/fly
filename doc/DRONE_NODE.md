# ROS2无人机节点（delivery_drone_node.py）详解

## 1. 主要功能

- 启动时自动注册到后端，注册失败自动重试
- 订阅 `/fmu/out/vehicle_global_position` 获取真实GPS，10秒未收到持续报错并等待
- 发布 `/fmu/in/vehicle_command`、`/fmu/in/trajectory_setpoint` 控制无人机解锁、起飞、降落、飞行
- 通过WebSocket与后端通信，自动接单、上报状态、同步位置
- 支持多点配送（pickup+多个dropoff），每到达一个点自动上报
- 参数可通过环境变量配置（如DRONE_ID、后端地址、起飞高度等）
- 日志详细，异常健壮，支持多机并发

## 2. 启动与参数

- 启动命令：
  ```bash
  ros2 run delivery_drone delivery_drone_node
  ```
- 主要环境变量：
  - `DRONE_ID`：无人机ID，支持多机并发
  - `DELIVERY_BACKEND_URL`：后端WebSocket地址
  - `TAKEOFF_ALT`、`WAIT_TAKEOFF`、`WAIT_FLIGHT`、`WAIT_LAND`：飞行参数

## 3. 主要流程

1. **等待真实GPS**：
   - 订阅`/fmu/out/vehicle_global_position`，10秒未收到持续报错，直到收到为止。
2. **注册与心跳**：
   - 通过WebSocket向后端注册，失败自动重连。
3. **接收订单**：
   - 后端推送订单，节点自动接单。
4. **飞行控制**：
   - 解锁→起飞→飞往pickup点→降落→上报→依次飞往每个dropoff点→降落→上报→订单完成。
   - 所有飞行均基于真实GPS，GPS转本地NED坐标。
5. **状态上报**：
   - 每到达一个点自动上报状态，支持"arrived"、"landed_pickup"、"landed_dropoff"、"finished"等。
6. **异常处理**：
   - WebSocket断线自动重连，注册/上报失败自动重试。
   - 未收到GPS持续报错，PX4仿真/真机断开时不会误飞。

## 4. 关键代码结构

- `DeliveryDrone(Node)`：主节点类，集成ROS2与WebSocket逻辑
- `gps_callback`：实时更新GPS，首次获取时设定home点
- `wait_for_gps`：启动时等待真实GPS，未连上持续报错
- `arm/takeoff/land/goto_xyz`：PX4控制指令封装
- `gps_to_local`：GPS转本地NED坐标（简化版）
- `connect/safe_send/safe_recv`：WebSocket通信与自动重连
- `handle_order/fly_to`：自动接单、飞行、降落、状态上报全流程
- `run`：主循环，先等待GPS，后连接后端并监听任务

## 5. 主要消息与接口

- 订阅：`/fmu/out/vehicle_global_position`（类型：VehicleGlobalPosition）
- 发布：
  - `/fmu/in/vehicle_command`（类型：VehicleCommand）
  - `/fmu/in/trajectory_setpoint`（类型：TrajectorySetpoint）
- WebSocket消息类型：
  - `register`、`location`、`status`、`order`、`confirm_dropoff`、`pong`等

## 6. 健壮性与扩展性

- 支持多机并发，参数可配置
- 日志详细，便于调试
- 断线/异常自动重试，适合仿真与真机混合环境
- 可扩展对接更多PX4话题/服务，实现更复杂的飞控逻辑 