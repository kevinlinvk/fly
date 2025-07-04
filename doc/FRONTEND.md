# React前端管理系统详解

## 1. 主要页面与功能

- 订单管理（OrderTable）：增删改查、表单校验、状态实时刷新
- 无人机管理（DroneTable）：实时展示所有无人机状态、位置、当前订单
- 地图总览（MapView）：基于Leaflet，实时标注无人机与订单pickup/dropoff点
- API统一封装，自动对接后端REST接口
- 支持定时刷新，界面简洁直观

## 2. 组件结构

- `OrderTable.js`：
  - 展示所有订单，支持新增、编辑、删除
  - 表单校验，支持输入pickup/dropoff点
  - 状态实时刷新，操作便捷
- `DroneTable.js`：
  - 展示所有无人机，状态（idle/busy）彩色标记
  - 实时刷新，显示位置与当前订单
- `MapView.js`：
  - 基于Leaflet地图，标注所有无人机与订单pickup/dropoff点
  - 支持弹窗显示详细信息

## 3. API对接

- 统一封装在`api.js`，包括：
  - `fetchOrders`、`addOrder`、`updateOrder`、`deleteOrder`
  - `fetchDrones`
- 所有接口自动对接FastAPI后端，支持异常处理与消息提示

## 4. 地图与表格功能

- 地图：
  - 使用OpenStreetMap瓦片，中心点可配置
  - 无人机/订单点均有Marker与Popup
- 表格：
  - 支持分页、操作按钮、状态彩色标记
  - 表单支持输入数组格式的经纬度

## 5. 扩展建议

- 支持地图拖拽下单、无人机轨迹回放
- 增加订单/无人机历史记录与统计
- 支持多城市/多区域地图切换
- 前端权限管理、用户登录
- 更丰富的地图交互与可视化 