from fastapi import FastAPI, HTTPException, WebSocket, WebSocketDisconnect
from pydantic import BaseModel
from typing import List, Dict, Optional
import math
import asyncio
import json

app = FastAPI()

orders = []
drones = {}  # drone_id -> {"location": [...], "status": "idle"/"busy"}
drone_ws_map: Dict[str, WebSocket] = {}

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

@app.post("/register_drone")
def register_drone(drone: DroneRegister):
    # 支持重复注册，自动更新位置和状态
    drones[drone.drone_id] = {"location": drone.location, "status": drones.get(drone.drone_id, {}).get("status", "idle")}
    print(f"当前所有无人机: {drones}")
    return {"result": "registered", "drones": drones}

@app.post("/update_location")
def update_location(drone: DroneRegister):
    if drone.drone_id in drones:
        drones[drone.drone_id]["location"] = drone.location
        return {"result": "updated"}
    else:
        raise HTTPException(status_code=404, detail="Drone not registered")

@app.get("/next_order")
def get_next_order(drone_id: str):
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
    for drone_id, info in drones.items():
        if info["status"] == "idle":
            dist = math.sqrt((info["location"][0] - new_order.pickup[0]) ** 2 + (info["location"][1] - new_order.pickup[1]) ** 2)
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
        {"drone_id": k, "order_id": v.get("order_id"), **v}
        for k, v in drones.items()
    ]

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
            if msg_type == "register":
                drone_id = data["drone_id"]
                drones[drone_id] = {"location": data["location"], "status": "idle"}
                drone_ws_map[drone_id] = websocket
                await websocket.send_text(json.dumps({"type": "register", "result": "ok", "drone_id": drone_id}))
            elif msg_type == "location":
                if drone_id:
                    drones[drone_id]["location"] = data["location"]
            elif msg_type == "status":
                if drone_id:
                    drones[drone_id]["location"] = data["location"]
                    drones[drone_id]["status"] = data["status"]
                    # 订单完成处理
                    if data["status"] == "finished" and data.get("order_id") is not None:
                        for order in orders:
                            if order["order_id"] == data["order_id"]:
                                order["status"] = "finished"
                                drones[drone_id]["status"] = "idle"
                                order["assigned_drone"] = None
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
                pass  # 心跳响应
            else:
                await websocket.send_text(json.dumps({"type": "error", "msg": "Unknown message type"}))
            # 检查是否有新订单需要推送
            if drone_id:
                for order in orders:
                    if order.get("assigned_drone") == drone_id and order["status"] == "assigned":
                        order["status"] = "delivering"
                        drones[drone_id]["status"] = "busy"
                        await websocket.send_text(json.dumps({"type": "order", "order": order}))
    except WebSocketDisconnect:
        if drone_id and drone_id in drone_ws_map:
            del drone_ws_map[drone_id]
        print(f"无人机{drone_id} WebSocket断开")
    except Exception as e:
        print(f"WebSocket异常: {e}")
        if drone_id and drone_id in drone_ws_map:
            del drone_ws_map[drone_id] 