import React, { useEffect, useState } from 'react';
import { Table, message, Tag } from 'antd';
import { fetchDrones } from '../api';

const DroneTable = () => {
  const [drones, setDrones] = useState([]);
  const [loading, setLoading] = useState(false);

  useEffect(() => {
    const load = async () => {
      setLoading(true);
      try {
        const res = await fetchDrones();
        setDrones(res.data);
      } catch (e) {
        message.error('获取无人机信息失败');
      }
      setLoading(false);
    };
    load();
    const timer = setInterval(load, 5000);
    return () => clearInterval(timer);
  }, []);

  const columns = [
    { title: '无人机ID', dataIndex: 'drone_id', key: 'drone_id', align: 'center' },
    { 
      title: '状态', 
      dataIndex: 'status', 
      key: 'status', 
      align: 'center', 
      render: (v, record) => {
        if (record.is_online === false) {
          return <Tag color="red">离线</Tag>;
        }
        if (v === 'idle') {
          return <Tag color="green">空闲</Tag>;
        }
        if (v === 'busy') {
          return <Tag color="blue">忙碌</Tag>;
        }
        return <Tag>未知</Tag>;
      }
    },
    { title: '位置', dataIndex: 'location', key: 'location', align: 'center', render: v => v && v.join(',') },
    { title: '当前订单', dataIndex: 'order_id', key: 'order_id', align: 'center', render: v => v ? v : <span style={{color:'#aaa'}}>无</span> },
  ];

  return (
    <Table
      rowKey="drone_id"
      columns={columns}
      dataSource={drones}
      loading={loading}
      bordered
      pagination={false}
      locale={{ emptyText: '暂无无人机' }}
      size="middle"
    />
  );
};

export default DroneTable;