# 常见问题与调试FAQ

## 1. 依赖与环境

- Q: `ros-jazzy-px4-msgs`没有apt包怎么办？
  - A: 需源码编译`px4_msgs`，见DEPLOYMENT.md相关章节。
- Q: `websockets`库找不到？
  - A: 用`pip install --target $(python3 -c 'import site; print(site.getsitepackages()[0])') websockets`安装到colcon运行时目录。
- Q: FastDDS/Micro XRCE-DDS Agent编译报错？
  - A: 检查依赖，参考官方文档或DEPLOYMENT.md。

## 2. 编译与运行

- Q: colcon build找不到依赖？
  - A: 确认所有依赖已用rosdep安装，必要时用`--ignore-src`参数。
- Q: 启动无人机节点时提示未收到GPS？
  - A: 检查PX4仿真或真机连接，节点会持续报错并等待。
- Q: 启动后端/前端端口冲突？
  - A: 检查端口占用，修改启动端口或释放端口。

## 3. 消息与接口

- Q: 无人机节点与后端通信断开？
  - A: 节点会自动重连，检查后端服务是否正常。
- Q: 订单/无人机状态不同步？
  - A: 检查WebSocket连接与后端日志，确认状态上报正常。

## 4. 环境变量与参数

- Q: 如何配置多机并发？
  - A: 启动多个节点，分别设置不同`DRONE_ID`。
- Q: 如何修改起飞高度/等待时间？
  - A: 设置`TAKEOFF_ALT`、`WAIT_TAKEOFF`等环境变量。

## 5. 扩展与二次开发

- Q: 如何对接真实无人机？
  - A: 保持PX4/MAVROS桥接，节点订阅真实GPS即可。
- Q: 如何扩展更多任务类型？
  - A: 修改后端调度算法与节点业务流程，支持多点配送、动态避障等。

## 6. 调试技巧

- 查看日志：无人机节点、后端均有详细日志，便于排查问题。
- 使用前端/接口实时监控所有状态。
- 如遇复杂依赖问题，建议分步手动编译与测试。 