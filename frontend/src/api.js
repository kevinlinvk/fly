import axios from 'axios';

const BASE_URL = '';

// 订单相关API
export const fetchOrders = () => axios.get(`${BASE_URL}/orders`);
export const addOrder = (order) => axios.post(`${BASE_URL}/add_order`, order);
export const updateOrder = (order_id, data) => axios.put(`${BASE_URL}/orders/${order_id}`, data);
export const deleteOrder = (order_id) => axios.delete(`${BASE_URL}/orders/${order_id}`);

// 无人机相关API
export const fetchDrones = () => axios.get(`${BASE_URL}/drones`);

// 其他API可按需扩展 