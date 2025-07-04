# FastAPI后端接口与调度算法

## 1. 主要接口

### 1.1 无人机注册
```http
POST /register_drone
{
  "drone_id": "drone_test",
  "location": [31.23, 121.47]
}
```
- 支持重复注册，自动更新位置和状态

### 1.2 添加订单
```http
POST /add_order
{
  "pickup": [31.2305, 121.4738],
  "dropoffs": [[31.2315, 121.4805]]
}
```
- 自动分配给最近的空闲无人机，无空闲则waiting

### 1.3 查询订单/无人机
```http
GET /orders
GET /drones
```
- 实时返回所有订单/无人机状态

### 1.4 订单分配与调度
- 基于pickup点与所有idle无人机的欧氏距离，分配给最近的无人机
- 无空闲无人机则订单状态为waiting，待有空闲后再分配
- 支持多无人机并发、重复注册、状态实时同步

### 1.5 订单执行与状态流转
- 订单状态：waiting → assigned → delivering → finished
- 无人机状态：idle/busy
- 每到达一个点自动上报，订单完成后无人机恢复idle

### 1.6 WebSocket接口
- `/ws/drone`：无人机实时注册、位置/状态同步、订单推送
- 消息类型：
  - `register`、`location`、`status`、`order`、`confirm_dropoff`、`pong`等
- 支持断线重连、心跳、实时推送

## 2. 典型数据结构

- 订单：
```json
{
  "order_id": 1,
  "pickup": [31.2305, 121.4738],
  "dropoffs": [[31.2315, 121.4805]],
  "status": "assigned",
  "assigned_drone": "drone123",
  "current_dropoff": 0
}
```
- 无人机：
```json
{
  "drone_id": "drone123",
  "location": [31.23, 121.47],
  "status": "idle",
  "order_id": 1
}
```

## 3. 典型业务流程

1. 无人机注册/心跳
2. 添加订单，后端自动分配
3. 无人机自动接单、飞行、上报状态
4. 订单完成后状态流转，相关无人机恢复idle
5. 前端/接口实时查询所有状态

## 4. 扩展与健壮性

- 支持多机并发、重复注册、断线重连
- 订单/无人机状态实时同步，便于可视化与调度
- 可扩展支持任务优先级、动态调度、数据库持久化等 