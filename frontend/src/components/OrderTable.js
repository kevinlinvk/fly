import React, { useEffect, useState } from 'react';
import { Table, Button, Modal, Form, Input, message } from 'antd';
import { fetchOrders, addOrder, updateOrder, deleteOrder } from '../api';

const OrderTable = () => {
  const [orders, setOrders] = useState([]);
  const [loading, setLoading] = useState(false);
  const [modalVisible, setModalVisible] = useState(false);
  const [editingOrder, setEditingOrder] = useState(null);
  const [form] = Form.useForm();

  const loadOrders = async () => {
    setLoading(true);
    try {
      const res = await fetchOrders();
      setOrders(res.data);
    } catch (e) {
      message.error('获取订单失败');
    }
    setLoading(false);
  };

  useEffect(() => {
    loadOrders();
  }, []);

  const handleAdd = () => {
    setEditingOrder(null);
    form.resetFields();
    setModalVisible(true);
  };

  const handleEdit = (record) => {
    setEditingOrder(record);
    form.setFieldsValue(record);
    setModalVisible(true);
  };

  const handleDelete = async (order_id) => {
    try {
      await deleteOrder(order_id);
      message.success('删除成功');
      loadOrders();
    } catch {
      message.error('删除失败');
    }
  };

  const handleOk = async () => {
    try {
      const values = await form.validateFields();
      if (editingOrder) {
        await updateOrder(editingOrder.order_id, values);
        message.success('修改成功');
      } else {
        await addOrder(values);
        message.success('添加成功');
      }
      setModalVisible(false);
      loadOrders();
    } catch (e) {
      message.error('操作失败');
    }
  };

  const columns = [
    { title: '订单ID', dataIndex: 'order_id', key: 'order_id' },
    { title: '取餐点', dataIndex: 'pickup', key: 'pickup', render: v => v && v.join(',') },
    { title: '送餐点', dataIndex: 'dropoffs', key: 'dropoffs', render: v => v && v.map(d=>d.join(',')).join(' | ') },
    { title: '状态', dataIndex: 'status', key: 'status' },
    { title: '操作', key: 'action', render: (_, record) => (
      <>
        <Button type="link" onClick={() => handleEdit(record)}>编辑</Button>
        <Button type="link" danger onClick={() => handleDelete(record.order_id)}>删除</Button>
      </>
    ) },
  ];

  return (
    <div>
      <Button type="primary" onClick={handleAdd} style={{ marginBottom: 16 }}>新增订单</Button>
      <Table rowKey="order_id" columns={columns} dataSource={orders} loading={loading} />
      <Modal
        title={editingOrder ? '编辑订单' : '新增订单'}
        open={modalVisible}
        onOk={handleOk}
        onCancel={() => setModalVisible(false)}
      >
        <Form form={form} layout="vertical">
          <Form.Item name="pickup" label="取餐点（格式：[纬度,经度]）" rules={[{ required: true }]}> <Input placeholder="如：[31.23,121.47]" /> </Form.Item>
          <Form.Item name="dropoffs" label="送餐点（格式：[[纬度,经度],[纬度,经度]]）" rules={[{ required: true }]}> <Input placeholder="如：[[31.23,121.48],[31.24,121.49]]" /> </Form.Item>
          <Form.Item name="status" label="状态"> <Input /> </Form.Item>
        </Form>
      </Modal>
    </div>
  );
};

export default OrderTable; 