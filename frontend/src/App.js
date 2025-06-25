import React from 'react';
import { Layout, Tabs } from 'antd';
import OrderTable from './components/OrderTable';
import DroneTable from './components/DroneTable';
import MapView from './components/MapView';
import 'antd/dist/reset.css';

const { Header, Content, Footer } = Layout;

function App() {
  return (
    <Layout>
      <Header style={{ color: '#fff', fontSize: 20 }}>无人机送外卖后台管理系统</Header>
      <Content style={{ padding: 24 }}>
        <Tabs defaultActiveKey="1" items={[{
          key: '1',
          label: '订单管理',
          children: <OrderTable />
        }, {
          key: '2',
          label: '无人机管理',
          children: <DroneTable />
        }, {
          key: '3',
          label: '地图总览',
          children: <MapView />
        }]} />
      </Content>
      <Footer style={{ textAlign: 'center' }}>基于ROS2+FastAPI+PX4仿真多无人机送外卖系统</Footer>
    </Layout>
  );
}

export default App;
