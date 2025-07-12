# 无人机心跳机制实现

## 🎯 项目概述

为无人机配送系统实现了完整的心跳机制，确保系统能够：
- 实时检测无人机在线状态
- 自动处理离线无人机
- 智能重新分配订单
- 提高系统可靠性

## ✨ 主要功能

### 1. 心跳检测
- **无人机端**: 每15秒发送一次心跳
- **后端**: 30秒内无心跳则标记为离线
- **检查频率**: 每10秒检查一次所有无人机状态

### 2. 离线处理
- 自动标记离线无人机
- 关闭WebSocket连接
- 重新分配未完成订单

### 3. 订单分配优化
- 只考虑在线无人机
- 支持订单重新分配
- 避免向离线无人机分配订单

## 🏗️ 技术架构

### 后端实现 (backend/main.py)
```python
# 核心配置
HEARTBEAT_TIMEOUT = 30  # 心跳超时时间
HEARTBEAT_CHECK_INTERVAL = 10  # 检查间隔

# 核心函数
is_drone_online(drone_id)  # 检查在线状态
get_online_drones()        # 获取在线无人机
mark_drone_offline(drone_id)  # 标记离线
reassign_offline_drone_orders(drone_id)  # 重新分配订单
```

### 无人机端实现 (src/delivery_drone/delivery_drone/delivery_drone_node.py)
```python
# 心跳配置
HEARTBEAT_INTERVAL = 15  # 心跳间隔

# 新增方法
send_heartbeat()  # 发送心跳
heartbeat_loop()  # 心跳循环任务
```

## 🚀 快速开始

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

### 3. 运行测试
```bash
# 快速演示
python3 demo_heartbeat.py

# 完整测试
python3 heartbeat_test.py

# 或使用启动脚本
./start_heartbeat_test.sh
```

## 📊 API接口

### 新增接口

#### 获取在线无人机
```http
GET /online_drones
```

#### 无人机状态扩展
```http
GET /drones
```
返回字段新增：
- `is_online`: 在线状态
- `last_heartbeat`: 最后心跳时间

### WebSocket消息

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

## 🧪 测试场景

### 1. 正常心跳
- ✅ 无人机正常发送心跳
- ✅ 后端正常接收并更新状态
- ✅ 订单正常分配

### 2. 无人机离线
- ✅ 30秒后检测到离线
- ✅ 自动重新分配订单
- ✅ 标记为离线状态

### 3. 网络中断
- ✅ WebSocket断开立即检测
- ✅ 触发订单重新分配
- ✅ 清理连接资源

### 4. 重新上线
- ✅ 自动注册并开始心跳
- ✅ 可重新参与订单分配
- ✅ 状态恢复正常

## 📁 文件结构

```
├── backend/
│   └── main.py                    # 后端主文件 (已更新)
├── src/delivery_drone/
│   └── delivery_drone/
│       └── delivery_drone_node.py # 无人机节点 (已更新)
├── doc/
│   └── HEARTBEAT_MECHANISM.md     # 详细技术文档
├── heartbeat_test.py              # 完整测试脚本
├── demo_heartbeat.py              # 快速演示脚本
├── start_heartbeat_test.sh        # 测试启动脚本
└── README_HEARTBEAT.md            # 本文件
```

## 🔧 配置参数

### 后端配置 (backend/main.py)
```python
HEARTBEAT_TIMEOUT = 30        # 心跳超时时间(秒)
HEARTBEAT_CHECK_INTERVAL = 10 # 检查间隔(秒)
```

### 无人机端配置 (src/delivery_drone/delivery_drone/delivery_drone_node.py)
```python
HEARTBEAT_INTERVAL = 15       # 心跳发送间隔(秒)
```

### 环境变量
```bash
export DRONE_ID=drone_001
export DELIVERY_BACKEND_URL=ws://127.0.0.1:8000/ws/drone
```

## 📈 监控和调试

### 状态监控
```bash
# 查看所有无人机
curl http://127.0.0.1:8000/drones | jq '.'

# 查看在线无人机
curl http://127.0.0.1:8000/online_drones | jq '.'

# 查看所有订单
curl http://127.0.0.1:8000/orders | jq '.'
```

### 日志输出
- 后端会输出心跳相关的日志信息
- 无人机端会输出心跳发送和接收的调试信息

## 🐛 常见问题

### 1. 无人机显示离线但实际在线
- 检查网络连接
- 检查心跳间隔配置
- 检查WebSocket连接状态

### 2. 订单无法分配
- 检查是否有在线无人机
- 检查无人机状态是否为idle
- 检查心跳机制是否正常

### 3. 心跳频率过高
- 调整 `HEARTBEAT_INTERVAL` 参数
- 检查是否有重复的心跳任务

## 🔮 扩展功能

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

## 📋 测试清单

- [x] 心跳发送和接收
- [x] 离线检测机制
- [x] 订单重新分配
- [x] WebSocket连接管理
- [x] 多无人机并发
- [x] 网络异常处理
- [x] 重新上线恢复
- [x] API接口扩展

## 🎉 总结

心跳机制的实现显著提升了无人机配送系统的可靠性：

1. **实时监控**: 准确掌握无人机在线状态
2. **自动恢复**: 离线检测和订单重新分配
3. **系统稳定**: 避免向离线无人机分配订单
4. **易于维护**: 清晰的日志和监控接口

通过心跳机制，系统能够更好地处理网络异常、设备故障等场景，提供更稳定的配送服务。

---

**注意**: 请确保在测试前启动后端服务，并安装必要的Python依赖包。 