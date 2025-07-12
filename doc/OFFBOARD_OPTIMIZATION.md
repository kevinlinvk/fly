# 无人机Offboard模式优化说明

## 问题描述

在原有的无人机仿真中，当看到新订单后，仿真中的无人机没有动作。这是因为无人机节点没有实现offboard模式的控制逻辑，无法自动进入offboard模式并响应外部控制指令。

## 优化内容

### 1. 添加Offboard控制逻辑

在`delivery_drone_node.py`中添加了完整的offboard模式支持：

- **OffboardControlMode消息发布**：持续发布offboard控制模式消息，告知PX4使用位置控制
- **TrajectorySetpoint消息发布**：发布轨迹设定值，提供位置控制指令
- **自动模式切换**：启动后自动切换到offboard模式
- **自动解锁**：进入offboard模式后自动解锁无人机

### 2. 关键代码改进

#### 新增状态变量
```python
# Offboard模式相关
self.offboard_setpoint_counter = 0
self.is_offboard_mode = False
self.is_armed = False
```

#### 新增发布器
```python
self.offboard_control_mode_pub = self.create_publisher(OffboardControlMode, "/fmu/in/offboard_control_mode", 10)
```

#### 新增定时器
```python
# 创建定时器用于offboard控制（10Hz）
self.offboard_timer = self.create_timer(0.1, self.offboard_control_callback)
```

#### Offboard控制回调函数
```python
def offboard_control_callback(self):
    """Offboard控制回调函数，10Hz运行"""
    # 发布OffboardControlMode消息
    self.publish_offboard_control_mode()
    
    # 发布TrajectorySetpoint消息
    self.publish_trajectory_setpoint()
    
    # 前10个周期后切换到offboard模式并解锁
    if self.offboard_setpoint_counter == 10 and not self.is_offboard_mode:
        self.get_logger().info("切换到Offboard模式")
        self.publish_vehicle_command(VehicleCommand.VEHICLE_CMD_DO_SET_MODE, 1.0, 6.0)
        self.is_offboard_mode = True
        
    # 解锁无人机
    if self.offboard_setpoint_counter == 11 and not self.is_armed:
        self.get_logger().info("解锁无人机")
        self.arm()
        self.is_armed = True
```

### 3. 飞行控制优化

#### 改进的飞行流程
```python
async def fly_to(self, gps):
    """飞行到指定GPS位置（使用offboard模式）"""
    self.get_logger().info(f"飞行到: {gps}")
    
    # 等待offboard模式就绪
    while not self.is_offboard_mode or not self.is_armed:
        self.get_logger().info("等待offboard模式就绪...")
        await asyncio.sleep(1)
    
    # 起飞到指定高度
    self.get_logger().info("起飞到指定高度")
    await asyncio.sleep(self.wait_takeoff)
    
    # 飞往目标位置
    x, y, z = self.gps_to_local(gps)
    self.goto_xyz(x, y, z)
    self.get_logger().info(f"飞往目标位置: {gps} -> 本地坐标: ({x:.2f}, {y:.2f}, {z:.2f})")
    
    # 等待飞行完成
    await asyncio.sleep(self.wait_flight)
    
    # 降落
    self.get_logger().info("开始降落")
    self.land()
    await asyncio.sleep(self.wait_land)
    
    # 更新位置并报告状态
    await self.update_location(gps)
    await self.report_status("arrived", gps)
```

## 使用方法

### 1. 启动PX4仿真
```bash
cd PX4-Autopilot
make px4_sitl gz_x500
```

### 2. 启动优化后的无人机节点
```bash
# 设置环境变量
export DRONE_ID=drone001
export DELIVERY_BACKEND_URL=ws://127.0.0.1:8000/ws/drone
export TAKEOFF_ALT=5.0

# 启动节点
cd src/delivery_drone/delivery_drone
python3 delivery_drone_node.py
```

### 3. 使用测试脚本
```bash
# 使用提供的测试脚本
chmod +x test_offboard_drone.sh
./test_offboard_drone.sh
```

## 预期行为

1. **启动阶段**：
   - 节点启动后等待GPS数据
   - 连接WebSocket后端
   - 开始发布OffboardControlMode和TrajectorySetpoint消息

2. **Offboard模式切换**：
   - 10秒后自动切换到offboard模式
   - 11秒后自动解锁无人机
   - 日志显示"切换到Offboard模式"和"解锁无人机"

3. **订单响应**：
   - 收到新订单后，无人机会自动飞往目标位置
   - 使用offboard模式进行精确位置控制
   - 完成订单后报告状态

## 技术细节

### PX4 Offboard模式要求

根据PX4文档，offboard模式需要：

1. **持续的心跳信号**：至少2Hz的OffboardControlMode消息
2. **设定值消息**：TrajectorySetpoint等位置控制消息
3. **模式切换**：通过VehicleCommand切换到offboard模式
4. **解锁状态**：无人机必须解锁才能飞行

### 消息频率

- **OffboardControlMode**：10Hz（满足2Hz最低要求）
- **TrajectorySetpoint**：10Hz
- **VehicleCommand**：按需发送

### 坐标系

- 使用NED坐标系（PX4标准）
- GPS坐标转换为本地NED坐标
- Z轴向下为负值

## 故障排除

### 常见问题

1. **OffboardControlMode导入错误**：
   - 确保px4_msgs包已正确编译
   - 运行`colcon build`重新编译

2. **无人机不响应**：
   - 检查PX4仿真是否正常运行
   - 确认GPS数据是否正常接收
   - 查看日志中的offboard模式切换信息

3. **模式切换失败**：
   - 确保OffboardControlMode消息持续发送
   - 检查VehicleCommand参数是否正确

### 调试方法

1. **查看话题**：
   ```bash
   ros2 topic list | grep offboard
   ros2 topic echo /fmu/in/offboard_control_mode
   ```

2. **查看日志**：
   - 观察无人机节点的日志输出
   - 特别关注offboard模式切换信息

3. **使用测试脚本**：
   - 运行`test_offboard.py`验证基本功能
   - 确认消息发布正常

## 总结

通过添加完整的offboard模式支持，无人机现在能够：

1. 自动进入offboard模式
2. 响应外部控制指令
3. 执行精确的位置控制
4. 自动处理订单任务

这解决了原有系统中无人机不响应新订单的问题，使整个配送系统能够正常工作。 