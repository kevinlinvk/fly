# 无人机心跳机制

## 概述

心跳机制用于检测无人机的在线状态，确保只有在线无人机参与订单分配，并在无人机离线时自动重新分配其订单。

## 功能特性

### 1. 心跳检测
- 无人机每15秒发送一次心跳
- 后端30秒内未收到心跳则认为无人机离线
- 每10秒检查一次所有无人机的在线状态

### 2. 离线处理
- 自动标记离线无人机
- 关闭离线无人机的WebSocket连接
- 重新分配离线无人机的未完成订单

### 3. 订单分配优化
- 只考虑在线无人机进行订单分配
- 离线无人机无法接收新订单
- 支持订单重新分配机制

## 技术实现

### 后端实现 (backend/main.py)

#### 心跳配置
```python
HEARTBEAT_TIMEOUT = 30  # 30秒无心跳则认为离线
HEARTBEAT_CHECK_INTERVAL = 10  # 每10秒检查一次心跳
```

#### 核心函数
- `is_drone_online(drone_id)`: 检查无人机是否在线
- `get_online_drones()`: 获取所有在线无人机
- `mark_drone_offline(drone_id)`: 标记无人机为离线
- `reassign_offline_drone_orders(drone_id)`: 重新分配离线无人机订单
- `heartbeat_checker()`: 心跳检查器

#### 数据结构扩展
```python
drones = {
    "drone_id": {
        "location": [lat, lon],
        "status": "idle/busy/offline",
        "last_heartbeat": timestamp,
        "is_online": bool
    }
}
```

### 无人机端实现 (src/delivery_drone/delivery_drone/delivery_drone_node.py)

#### 心跳配置
```python
HEARTBEAT_INTERVAL = 15  # 心跳间隔15秒
```

#### 新增方法
- `send_heartbeat()`: 发送心跳消息
- `heartbeat_loop()`: 心跳循环任务

#### 消息类型
```python
# 发送心跳
{
    "type": "heartbeat",
    "drone_id": "drone_001",
    "timestamp": 1234567890.123
}

# 心跳确认
{
    "type": "heartbeat_ack"
}
```

## API接口

### 新增接口

#### 获取在线无人机
```http
GET /online_drones
```

返回所有在线无人机信息，包括：
- `drone_id`: 无人机ID
- `location`: 位置坐标
- `status`: 状态 (idle/busy)
- `is_online`: 在线状态
- `last_heartbeat`: 最后心跳时间

#### 无人机状态扩展
```http
GET /drones
```

返回所有无人机信息，新增字段：
- `is_online`: 在线状态
- `last_heartbeat`: 最后心跳时间戳

### WebSocket消息扩展

#### 心跳消息
```json
{
    "type": "heartbeat",
    "drone_id": "drone_001",
    "timestamp": 1234567890.123
}
```

#### 心跳确认
```json
{
    "type": "heartbeat_ack"
}
```

## 使用示例

### 1. 启动后端服务
```bash
cd backend
uvicorn main:app --reload --host 0.0.0.0 --port 8000
```

### 2. 启动无人机节点
```bash
# 终端1
source install/setup.bash
ros2 run delivery_drone delivery_drone_node

# 终端2 (启动另一个无人机)
export DRONE_ID=drone_002
ros2 run delivery_drone delivery_drone_node
```

### 3. 测试心跳机制
```bash
python heartbeat_test.py
```

### 4. 监控无人机状态
```bash
# 查看所有无人机
curl http://127.0.0.1:8000/drones

# 查看在线无人机
curl http://127.0.0.1:8000/online_drones
```

## 测试场景

### 1. 正常心跳
- 无人机正常发送心跳
- 后端正常接收并更新状态
- 订单正常分配

### 2. 无人机离线
- 无人机停止发送心跳
- 30秒后后端检测到离线
- 自动重新分配订单

### 3. 网络中断
- WebSocket连接断开
- 后端立即标记为离线
- 触发订单重新分配

### 4. 重新上线
- 无人机重新连接
- 自动注册并开始心跳
- 可重新参与订单分配

## 配置参数

### 后端配置
```python
# backend/main.py
HEARTBEAT_TIMEOUT = 30  # 心跳超时时间(秒)
HEARTBEAT_CHECK_INTERVAL = 10  # 检查间隔(秒)
```

### 无人机端配置
```python
# src/delivery_drone/delivery_drone/delivery_drone_node.py
HEARTBEAT_INTERVAL = 15  # 心跳发送间隔(秒)
```

### 环境变量
```bash
# 无人机配置
export DRONE_ID=drone_001
export DELIVERY_BACKEND_URL=ws://127.0.0.1:8000/ws/drone
```

## 监控和调试

### 日志输出
- 后端会输出心跳相关的日志信息
- 无人机端会输出心跳发送和接收的调试信息

### 状态监控
- 通过 `/drones` 接口查看所有无人机状态
- 通过 `/online_drones` 接口查看在线无人机
- 通过 `/orders` 接口查看订单分配状态

### 常见问题

1. **无人机显示离线但实际在线**
   - 检查网络连接
   - 检查心跳间隔配置
   - 检查WebSocket连接状态

2. **订单无法分配**
   - 检查是否有在线无人机
   - 检查无人机状态是否为idle
   - 检查心跳机制是否正常

3. **心跳频率过高**
   - 调整 `HEARTBEAT_INTERVAL` 参数
   - 检查是否有重复的心跳任务

## 扩展功能

### 1. 心跳统计
- 记录心跳成功率
- 统计网络延迟
- 生成心跳报告

### 2. 自适应心跳
- 根据网络状况调整心跳频率
- 动态调整超时时间
- 智能重连机制

### 3. 集群管理
- 多后端服务支持
- 负载均衡
- 故障转移

## 总结

心跳机制确保了无人机配送系统的可靠性和稳定性：

1. **实时状态监控**: 准确掌握无人机在线状态
2. **自动故障处理**: 离线检测和订单重新分配
3. **系统可靠性**: 避免向离线无人机分配订单
4. **易于扩展**: 支持更多监控和管理功能

通过心跳机制，系统能够更好地处理网络异常、设备故障等场景，提供更稳定的配送服务。 