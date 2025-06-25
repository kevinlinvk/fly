import React, { useEffect, useState } from 'react';
import { MapContainer, TileLayer, Marker, Popup } from 'react-leaflet';
import { fetchDrones, fetchOrders } from '../api';
import 'leaflet/dist/leaflet.css';

const center = [31.2304, 121.4737];

const MapView = () => {
  const [drones, setDrones] = useState([]);
  const [orders, setOrders] = useState([]);

  const loadData = async () => {
    try {
      const dres = await fetchDrones();
      setDrones(dres.data);
      const ores = await fetchOrders();
      setOrders(ores.data);
    } catch {}
  };

  useEffect(() => {
    loadData();
    const timer = setInterval(loadData, 5000);
    return () => clearInterval(timer);
  }, []);

  return (
    <MapContainer center={center} zoom={13} style={{ height: 400, width: '100%' }}>
      <TileLayer url="https://{s}.tile.openstreetmap.org/{z}/{x}/{y}.png" />
      {drones.map(drone => (
        <Marker key={drone.drone_id} position={drone.location}>
          <Popup>
            <div>无人机ID: {drone.drone_id}<br/>状态: {drone.status}<br/>订单: {drone.order_id}</div>
          </Popup>
        </Marker>
      ))}
      {orders.map(order => (
        <Marker key={order.order_id + '_pickup'} position={order.pickup}>
          <Popup>订单取餐点: {order.order_id}</Popup>
        </Marker>
      ))}
      {orders.flatMap(order => order.dropoffs.map((d, i) => (
        <Marker key={order.order_id + '_dropoff_' + i} position={d}>
          <Popup>订单送餐点: {order.order_id}</Popup>
        </Marker>
      )))}
    </MapContainer>
  );
};

export default MapView; 