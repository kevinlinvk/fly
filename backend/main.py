from fastapi import FastAPI, HTTPException, WebSocket, WebSocketDisconnect
from pydantic import BaseModel
from typing import List, Dict, Optional
import math
import asyncio
import json
import time
from datetime import datetime, timedelta

app = FastAPI()

orders = []
drones = {}  # drone_id -> {"location": [...], "status": "idle"/"busy", "last_heartbeat": timestamp, "is_online": bool}
drone_ws_map: Dict[str, WebSocket] = {}

# 心跳配置
HEARTBEAT_TIMEOUT = 30  # 30秒无心跳则认为离线
HEARTBEAT_CHECK_INTERVAL = 10  # 每10秒检查一次心跳

class DroneStatus(BaseModel):
    drone_id: str
    status: str
    location: List[float]
    order_id: Optional[int] = None

class NewOrder(BaseModel):
    pickup: List[float]
    dropoffs: List[List[float]]

class DroneRegister(BaseModel):
    drone_id: str
    location: List[float]

def is_drone_online(drone_id: str) -> bool:
    """检查无人机是否在线"""
    if drone_id not in drones:
        return False
    drone_info = drones[drone_id]
    if not drone_info.get("is_online", False):
        return False
    
    last_heartbeat = drone_info.get("last_heartbeat", 0)
    return time.time() - last_heartbeat < HEARTBEAT_TIMEOUT

def get_online_drones() -> Dict[str, dict]:
    """获取所有在线无人机"""
    return {drone_id: info for drone_id, info in drones.items() if is_drone_online(drone_id)}

def mark_drone_offline(drone_id: str):
    """标记无人机为离线状态"""
    if drone_id in drones:
        drones[drone_id]["is_online"] = False
        drones[drone_id]["status"] = "offline"
        print(f"无人机 {drone_id} 已标记为离线")

def reassign_offline_drone_orders(drone_id: str):
    """重新分配离线无人机的订单"""
    reassigned_count = 0
    for order in orders:
        if order.get("assigned_drone") == drone_id and order["status"] in ["assigned", "delivering"]:
            # 寻找新的可用无人机
            nearest_drone = None
            min_dist = float("inf")
            for online_drone_id, info in get_online_drones().items():
                if info["status"] == "idle":
                    dist = math.sqrt((info["location"][0] - order["pickup"][0]) ** 2 + 
                                   (info["location"][1] - order["pickup"][1]) ** 2)
                    if dist < min_dist:
                        min_dist = dist
                        nearest_drone = online_drone_id
            
            if nearest_drone:
                order["assigned_drone"] = nearest_drone
                order["status"] = "assigned"
                drones[nearest_drone]["status"] = "busy"
                print(f"订单 {order['order_id']} 重新分配给无人机 {nearest_drone}")
                reassigned_count += 1
            else:
                order["assigned_drone"] = None
                order["status"] = "waiting"
                print(f"订单 {order['order_id']} 设置为等待状态，无可用无人机")
    
    if reassigned_count > 0:
        print(f"重新分配了 {reassigned_count} 个订单")

async def heartbeat_checker():
    """心跳检查器，定期检查无人机在线状态"""
    while True:
        try:
            current_time = time.time()
            offline_drones = []
            
            for drone_id, info in drones.items():
                if info.get("is_online", False):
                    last_heartbeat = info.get("last_heartbeat", 0)
                    if current_time - last_heartbeat > HEARTBEAT_TIMEOUT:
                        offline_drones.append(drone_id)
            
            # 处理离线无人机
            for drone_id in offline_drones:
                print(f"检测到无人机 {drone_id} 离线")
                mark_drone_offline(drone_id)
                reassign_offline_drone_orders(drone_id)
                
                # 关闭WebSocket连接
                if drone_id in drone_ws_map:
                    try:
                        await drone_ws_map[drone_id].close()
                    except:
                        pass
                    del drone_ws_map[drone_id]
            
            await asyncio.sleep(HEARTBEAT_CHECK_INTERVAL)
        except Exception as e:
            print(f"心跳检查器异常: {e}")
            await asyncio.sleep(HEARTBEAT_CHECK_INTERVAL)

@app.on_event("startup")
async def startup_event():
    """启动时启动心跳检查器"""
    asyncio.create_task(heartbeat_checker())

@app.post("/register_drone")
def register_drone(drone: DroneRegister):
    # 支持重复注册，自动更新位置和状态
    current_time = time.time()
    drones[drone.drone_id] = {
        "location": drone.location, 
        "status": drones.get(drone.drone_id, {}).get("status", "idle"),
        "last_heartbeat": current_time,
        "is_online": True
    }
    print(f"无人机 {drone.drone_id} 注册/更新，当前在线无人机: {len(get_online_drones())}")
    return {"result": "registered", "drones": drones}

@app.post("/update_location")
def update_location(drone: DroneRegister):
    if drone.drone_id in drones:
        drones[drone.drone_id]["location"] = drone.location
        drones[drone.drone_id]["last_heartbeat"] = time.time()
        drones[drone.drone_id]["is_online"] = True
        return {"result": "updated"}
    else:
        raise HTTPException(status_code=404, detail="Drone not registered")

@app.get("/next_order")
def get_next_order(drone_id: str):
    # 只检查在线无人机
    if not is_drone_online(drone_id):
        raise HTTPException(status_code=400, detail="Drone is offline")
        
    for order in orders:
        if order.get("assigned_drone") == drone_id and order["status"] == "assigned":
            order["status"] = "delivering"
            drones[drone_id]["status"] = "busy"
            return order
    raise HTTPException(status_code=404, detail="No orders available")

@app.post("/add_order")
def add_order(new_order: NewOrder):
    order_id = max([o["order_id"] for o in orders], default=0) + 1
    nearest_drone = None
    min_dist = float("inf")
    
    # 只考虑在线无人机
    for drone_id, info in get_online_drones().items():
        if info["status"] == "idle":
            dist = math.sqrt((info["location"][0] - new_order.pickup[0]) ** 2 + 
                           (info["location"][1] - new_order.pickup[1]) ** 2)
            if dist < min_dist:
                min_dist = dist
                nearest_drone = drone_id
    
    if nearest_drone is None:
        assigned_drone = None
        status = "waiting"
    else:
        assigned_drone = nearest_drone
        status = "assigned"
        drones[assigned_drone]["status"] = "busy"
    
    order = {
        "order_id": order_id,
        "pickup": new_order.pickup,
        "dropoffs": new_order.dropoffs,
        "status": status,
        "assigned_drone": assigned_drone,
        "current_dropoff": 0
    }
    orders.append(order)
    return {"result": "ok", "order_id": order_id, "assigned_drone": assigned_drone}

@app.post("/confirm_dropoff")
def confirm_dropoff(order_id: int, dropoff_index: int):
    for order in orders:
        if order["order_id"] == order_id:
            if dropoff_index < len(order["dropoffs"]):
                order["current_dropoff"] = dropoff_index
                order["status"] = "delivering"
                return {"result": "ok", "location": order["dropoffs"][dropoff_index]}
            else:
                raise HTTPException(status_code=400, detail="Invalid dropoff index")
    raise HTTPException(status_code=404, detail="Order not found")

@app.post("/drone_status")
def update_drone_status(status: DroneStatus):
    if status.drone_id in drones:
        drones[status.drone_id]["location"] = status.location
        drones[status.drone_id]["last_heartbeat"] = time.time()
        drones[status.drone_id]["is_online"] = True
        
        if status.status == "finished" and status.order_id is not None:
            for order in orders:
                if order["order_id"] == status.order_id:
                    order["status"] = "finished"
                    drones[status.drone_id]["status"] = "idle"
                    order["assigned_drone"] = None
    return {"result": "received"}

@app.get("/orders")
def list_orders():
    return orders

@app.get("/drones")
def list_drones():
    return [
        {
            "drone_id": k, 
            "order_id": v.get("order_id"), 
            "is_online": v.get("is_online", False),
            "last_heartbeat": v.get("last_heartbeat", 0),
            **v
        }
        for k, v in drones.items()
    ]

@app.get("/online_drones")
def list_online_drones():
    """获取所有在线无人机"""
    return [
        {
            "drone_id": k, 
            "order_id": v.get("order_id"), 
            "is_online": v.get("is_online", False),
            "last_heartbeat": v.get("last_heartbeat", 0),
            **v
        }
        for k, v in get_online_drones().items()
    ]

@app.put("/orders/{order_id}")
def update_order(order_id: int, data: dict):
    for order in orders:
        if order["order_id"] == order_id:
            # 只允许修改pickup、dropoffs、status
            if "pickup" in data:
                order["pickup"] = data["pickup"]
            if "dropoffs" in data:
                order["dropoffs"] = data["dropoffs"]
            if "status" in data:
                order["status"] = data["status"]
            return {"result": "ok"}
    raise HTTPException(status_code=404, detail="Order not found")

@app.delete("/orders/{order_id}")
def delete_order(order_id: int):
    global orders
    for i, order in enumerate(orders):
        if order["order_id"] == order_id:
            del orders[i]
            return {"result": "ok"}
    raise HTTPException(status_code=404, detail="Order not found")

# ========== WebSocket接口 ==========
@app.websocket("/ws/drone")
async def drone_ws(websocket: WebSocket):
    await websocket.accept()
    drone_id = None
    try:
        while True:
            msg = await websocket.receive_text()
            try:
                data = json.loads(msg)
            except Exception:
                await websocket.send_text(json.dumps({"type": "error", "msg": "Invalid JSON"}))
                continue
            
            msg_type = data.get("type")
            current_time = time.time()
            
            if msg_type == "register":
                drone_id = data["drone_id"]
                drones[drone_id] = {
                    "location": data["location"], 
                    "status": "idle",
                    "last_heartbeat": current_time,
                    "is_online": True
                }
                drone_ws_map[drone_id] = websocket
                await websocket.send_text(json.dumps({"type": "register", "result": "ok", "drone_id": drone_id}))
                print(f"无人机 {drone_id} WebSocket连接建立")
                
            elif msg_type == "location":
                if drone_id:
                    drones[drone_id]["location"] = data["location"]
                    drones[drone_id]["last_heartbeat"] = current_time
                    drones[drone_id]["is_online"] = True
                    
            elif msg_type == "status":
                if drone_id:
                    drones[drone_id]["location"] = data["location"]
                    drones[drone_id]["status"] = data["status"]
                    drones[drone_id]["last_heartbeat"] = current_time
                    drones[drone_id]["is_online"] = True
                    
                    # 订单完成处理
                    if data["status"] == "finished" and data.get("order_id") is not None:
                        for order in orders:
                            if order["order_id"] == data["order_id"]:
                                order["status"] = "finished"
                                drones[drone_id]["status"] = "idle"
                                order["assigned_drone"] = None
                                
            elif msg_type == "heartbeat":
                if drone_id:
                    drones[drone_id]["last_heartbeat"] = current_time
                    drones[drone_id]["is_online"] = True
                    # 新增：修正无人机位置
                    if "location" in data:
                        drones[drone_id]["location"] = data["location"]
                    await websocket.send_text(json.dumps({"type": "heartbeat_ack"}))
                    
            elif msg_type == "confirm_dropoff":
                order_id = data["order_id"]
                dropoff_index = data["dropoff_index"]
                for order in orders:
                    if order["order_id"] == order_id:
                        if dropoff_index < len(order["dropoffs"]):
                            order["current_dropoff"] = dropoff_index
                            order["status"] = "delivering"
                            await websocket.send_text(json.dumps({"type": "confirm_dropoff", "location": order["dropoffs"][dropoff_index]}))
                        else:
                            await websocket.send_text(json.dumps({"type": "error", "msg": "Invalid dropoff index"}))
                        break
                        
            elif msg_type == "pong":
                if drone_id:
                    drones[drone_id]["last_heartbeat"] = current_time
                    drones[drone_id]["is_online"] = True
                    
            else:
                await websocket.send_text(json.dumps({"type": "error", "msg": "Unknown message type"}))
                
            # 检查是否有新订单需要推送
            if drone_id and is_drone_online(drone_id):
                for order in orders:
                    if order.get("assigned_drone") == drone_id and order["status"] == "assigned":
                        order["status"] = "delivering"
                        drones[drone_id]["status"] = "busy"
                        await websocket.send_text(json.dumps({"type": "order", "order": order}))
                        
    except WebSocketDisconnect:
        if drone_id:
            mark_drone_offline(drone_id)
            reassign_offline_drone_orders(drone_id)
            if drone_id in drone_ws_map:
                del drone_ws_map[drone_id]
        print(f"无人机{drone_id} WebSocket断开")
    except Exception as e:
        print(f"WebSocket异常: {e}")
        if drone_id:
            mark_drone_offline(drone_id)
            reassign_offline_drone_orders(drone_id)
            if drone_id in drone_ws_map:
                del drone_ws_map[drone_id] 