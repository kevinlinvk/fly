# 无人机配送系统 API 使用指南

## 概述

通过阅读 `doc/BACKEND_API.md` 文档，我了解了系统的API接口。本指南将详细介绍如何通过API增加订单。

## API 基础信息

- **后端服务地址**: `http://127.0.0.1:8000`
- **API文档**: `http://127.0.0.1:8000/docs` (FastAPI自动生成的交互式文档)
- **WebSocket地址**: `ws://127.0.0.1:8000/ws/drone`

## 主要API接口

### 1. 添加订单 - POST /add_order

这是增加订单的核心API接口。

#### 请求格式
```http
POST /add_order
Content-Type: application/json

{
  "pickup": [纬度, 经度],
  "dropoffs": [[纬度1, 经度1], [纬度2, 经度2], ...]
}
```

#### 响应格式
```json
{
  "result": "ok",
  "order_id": 1,
  "assigned_drone": "drone_001"
}
```

#### 示例

**使用curl命令:**
```bash
curl -X POST http://127.0.0.1:8000/add_order \
  -H 'Content-Type: application/json' \
  -d '{
    "pickup": [47.397971, 8.546164],
    "dropoffs": [[47.398971, 8.547164], [47.396971, 8.545164]]
  }'
```

**使用Python requests:**
```python
import requests

url = "http://127.0.0.1:8000/add_order"
data = {
    "pickup": [47.397971, 8.546164],
    "dropoffs": [[47.398971, 8.547164], [47.396971, 8.545164]]
}

response = requests.post(url, json=data)
result = response.json()
print(f"订单ID: {result['order_id']}")
print(f"分配无人机: {result['assigned_drone']}")
```

### 2. 注册无人机 - POST /register_drone

在添加订单前，需要确保有可用的无人机。

#### 请求格式
```http
POST /register_drone
Content-Type: application/json

{
  "drone_id": "drone_001",
  "location": [纬度, 经度]
}
```

#### 示例
```bash
curl -X POST http://127.0.0.1:8000/register_drone \
  -H 'Content-Type: application/json' \
  -d '{"drone_id": "drone_001", "location": [47.397971, 8.546164]}'
```

### 3. 查询订单 - GET /orders

查看所有订单的状态。

#### 示例
```bash
curl http://127.0.0.1:8000/orders
```

### 4. 查询无人机 - GET /drones

查看所有无人机的状态。

#### 示例
```bash
curl http://127.0.0.1:8000/drones
```

## 订单分配逻辑

根据API文档，订单分配遵循以下规则：

1. **距离优先**: 系统会计算取货点与所有空闲无人机的欧氏距离
2. **最近分配**: 将订单分配给距离取货点最近的空闲无人机
3. **等待机制**: 如果没有空闲无人机，订单状态为 `waiting`，等待有空闲无人机时再分配

## 订单状态流转

- `waiting` → `assigned` → `delivering` → `finished`

## 实际使用示例

### 完整的工作流程

1. **启动后端服务**
   ```bash
   ./start_backend.sh
   ```

2. **注册无人机** (如果还没有)
   ```bash
   curl -X POST http://127.0.0.1:8000/register_drone \
     -H 'Content-Type: application/json' \
     -d '{"drone_id": "drone_001", "location": [47.397971, 8.546164]}'
   ```

3. **添加订单**
   ```bash
   curl -X POST http://127.0.0.1:8000/add_order \
     -H 'Content-Type: application/json' \
     -d '{
       "pickup": [47.397971, 8.546164],
       "dropoffs": [[47.398971, 8.547164], [47.396971, 8.545164]]
     }'
   ```

4. **查看结果**
   ```bash
   curl http://127.0.0.1:8000/orders
   curl http://127.0.0.1:8000/drones
   ```

### 使用提供的测试工具

我们创建了以下工具来帮助测试API：

1. **api_examples.sh** - Shell脚本示例
   ```bash
   ./api_examples.sh
   ```

2. **test_add_order.py** - Python交互式测试工具
   ```bash
   python3 test_add_order.py
   ```

## 坐标系统

系统使用GPS坐标系统：
- **纬度**: 范围 -90 到 90
- **经度**: 范围 -180 到 180
- **格式**: [纬度, 经度]

### PX4 SITL默认坐标
- **默认位置**: [47.397971, 8.546164] (苏黎世附近)

## 错误处理

### 常见错误

1. **后端服务未运行**
   ```
   curl: (7) Failed to connect to 127.0.0.1 port 8000
   ```
   解决：启动后端服务 `./start_backend.sh`

2. **没有可用无人机**
   ```json
   {
     "result": "ok",
     "order_id": 1,
     "assigned_drone": null
   }
   ```
   解决：注册更多无人机或等待现有无人机完成订单

3. **坐标格式错误**
   ```json
   {
     "detail": "Validation error"
   }
   ```
   解决：检查坐标格式，确保是数字数组

## 高级用法

### 批量添加订单

```python
import requests
import time

orders = [
    {
        "pickup": [47.397971, 8.546164],
        "dropoffs": [[47.398971, 8.547164]]
    },
    {
        "pickup": [47.398971, 8.547164],
        "dropoffs": [[47.396971, 8.545164]]
    }
]

for i, order in enumerate(orders, 1):
    response = requests.post("http://127.0.0.1:8000/add_order", json=order)
    result = response.json()
    print(f"订单 {i}: ID={result['order_id']}, 无人机={result['assigned_drone']}")
    time.sleep(1)  # 避免请求过快
```

### 监控订单状态

```python
import requests
import time

def monitor_orders():
    while True:
        response = requests.get("http://127.0.0.1:8000/orders")
        orders = response.json()
        
        print(f"\n时间: {time.strftime('%H:%M:%S')}")
        for order in orders:
            print(f"订单 {order['order_id']}: {order['status']} -> {order.get('assigned_drone', '未分配')}")
        
        time.sleep(5)  # 每5秒检查一次

# monitor_orders()
```

## 总结

通过API增加订单的步骤：

1. 确保后端服务运行
2. 确保有可用的无人机（通过WebSocket连接或API注册）
3. 使用 `POST /add_order` 接口添加订单
4. 系统自动分配最近的空闲无人机
5. 无人机自动执行配送任务

系统支持多无人机并发、实时状态同步、自动故障恢复等特性，是一个完整的无人机配送调度系统。 