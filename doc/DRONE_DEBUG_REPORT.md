# 无人机端调试报告

## 调试状态总结

### ✅ 正常工作的组件

1. **PX4 SITL仿真器**
   - 状态：正常运行
   - 命令：`make px4_sitl gz_x500`
   - 话题：所有PX4话题正常发布

2. **GPS数据**
   - 状态：正常
   - 话题：`/fmu/out/vehicle_gps_position`
   - 数据：实时GPS坐标正常接收

3. **无人机节点 (delivery_drone_node.py)**
   - 状态：正常运行
   - 功能：GPS接收、WebSocket连接、PX4控制
   - 修复：事件循环警告已修复

4. **后端服务**
   - 状态：正常运行
   - 地址：`ws://127.0.0.1:8000/ws/drone`
   - 连接：无人机节点成功连接

5. **ROS2环境**
   - 状态：正常
   - 话题发布/订阅：正常
   - 节点注册：正常

### 🔧 已修复的问题

1. **事件循环警告**
   - 问题：`There is no current event loop`
   - 修复：在`delivery_drone_node.py`中添加了事件循环检查

2. **多节点冲突**
   - 问题：多个同名节点同时运行
   - 修复：在启动脚本中添加了进程检查和清理

### 📋 可用的调试工具

1. **debug_drone.sh** - 系统状态检查脚本
   ```bash
   ./debug_drone.sh
   ```

2. **start_drone.sh** - 改进的启动脚本
   ```bash
   ./start_drone.sh
   ```

3. **test_simple_drone.sh** - 功能测试脚本
   ```bash
   ./test_simple_drone.sh
   ```

4. **test_drone_functions.py** - 基本功能测试
   ```bash
   source install/setup.bash
   python3 test_drone_functions.py
   ```

## 使用说明

### 启动无人机系统

1. **启动PX4 SITL仿真器**
   ```bash
   cd PX4-Autopilot
   make px4_sitl gz_x500
   ```

2. **启动后端服务**
   ```bash
   ./start_backend.sh
   ```

3. **启动无人机节点**
   ```bash
   ./start_drone.sh
   ```

### 调试命令

1. **检查系统状态**
   ```bash
   ./debug_drone.sh
   ```

2. **查看GPS数据**
   ```bash
   source install/setup.bash
   ros2 topic echo /fmu/out/vehicle_gps_position
   ```

3. **查看无人机节点日志**
   ```bash
   source install/setup.bash
   ros2 node info /delivery_drone
   ```

4. **测试基本功能**
   ```bash
   ./test_simple_drone.sh
   ```

## 环境变量配置

无人机节点支持以下环境变量：

- `DRONE_ID`: 无人机ID (默认: 随机生成)
- `DELIVERY_BACKEND_URL`: 后端WebSocket地址 (默认: ws://127.0.0.1:8000/ws/drone)
- `TAKEOFF_ALT`: 起飞高度 (默认: 5.0米)
- `WAIT_TAKEOFF`: 起飞等待时间 (默认: 5秒)
- `WAIT_FLIGHT`: 飞行等待时间 (默认: 10秒)
- `WAIT_LAND`: 降落等待时间 (默认: 5秒)

## 故障排除

### 常见问题

1. **PX4 SITL未运行**
   ```bash
   # 检查进程
   ps aux | grep px4
   
   # 重新启动
   cd PX4-Autopilot
   make px4_sitl gz_x500
   ```

2. **GPS数据异常**
   ```bash
   # 检查GPS话题
   source install/setup.bash
   ros2 topic echo /fmu/out/vehicle_gps_position --once
   ```

3. **WebSocket连接失败**
   ```bash
   # 检查后端服务
   curl http://127.0.0.1:8000/health
   
   # 检查端口
   netstat -tlnp | grep 8000
   ```

4. **多节点冲突**
   ```bash
   # 停止所有无人机节点
   pkill -f delivery_drone_node.py
   
   # 重新启动
   ./start_drone.sh
   ```

### 日志查看

```bash
# 查看无人机节点日志
source install/setup.bash
ros2 run delivery_drone delivery_drone_node

# 查看ROS2日志
ros2 run ros2cli ros2 topic echo /rosout
```

## 测试结果

✅ **基本功能测试通过**
- GPS数据接收正常
- WebSocket连接成功
- PX4控制命令发送正常
- 节点注册成功

✅ **系统集成测试通过**
- PX4 SITL + 无人机节点 + 后端服务
- 完整的数据流：GPS → 无人机节点 → 后端服务

## 下一步

1. 测试完整的配送流程
2. 优化飞行控制参数
3. 添加更多错误处理
4. 实现前端界面集成

---

**调试完成时间**: 2025-07-07 11:00
**调试状态**: ✅ 正常 