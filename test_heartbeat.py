#!/usr/bin/env python3
"""
心跳机制测试脚本
测试无人机心跳检测、离线检测、订单重新分配等功能
"""

import requests
import time
import json
import threading
import asyncio
import websockets
import random
from datetime import datetime

# 配置
BASE_URL = "http://127.0.0.1:8000"
WS_URL = "ws://127.0.0.1:8000/ws/drone"

class MockDrone:
    """模拟无人机"""
    def __init__(self, drone_id, location):
        self.drone_id = drone_id
        self.location = location
        self.ws = None
        self.is_running = False
        self.heartbeat_interval = 15  # 15秒心跳间隔
        
    async def connect(self):
        """连接WebSocket"""
        try:
            self.ws = await websockets.connect(WS_URL)
            await self.register()
            print(f"✅ 无人机 {self.drone_id} 连接成功")
            return True
        except Exception as e:
            print(f"❌ 无人机 {self.drone_id} 连接失败: {e}")
            return False
            
    async def register(self):
        """注册无人机"""
        msg = {
            "type": "register",
            "drone_id": self.drone_id,
            "location": self.location
        }
        await self.ws.send(json.dumps(msg))
        response = await self.ws.recv()
        print(f"📝 无人机 {self.drone_id} 注册响应: {response}")
        
    async def send_heartbeat(self):
        """发送心跳"""
        msg = {
            "type": "heartbeat",
            "drone_id": self.drone_id,
            "timestamp": time.time()
        }
        await self.ws.send(json.dumps(msg))
        
    async def heartbeat_loop(self):
        """心跳循环"""
        while self.is_running:
            try:
                await self.send_heartbeat()
                await asyncio.sleep(self.heartbeat_interval)
            except Exception as e:
                print(f"❌ 无人机 {self.drone_id} 心跳发送失败: {e}")
                break
                
    async def listen(self):
        """监听消息"""
        while self.is_running:
            try:
                msg = await self.ws.recv()
                data = json.loads(msg)
                if data.get("type") == "order":
                    print(f"📦 无人机 {self.drone_id} 收到订单: {data['order']['order_id']}")
                elif data.get("type") == "heartbeat_ack":
                    print(f"💓 无人机 {self.drone_id} 收到心跳确认")
            except Exception as e:
                print(f"❌ 无人机 {self.drone_id} 监听异常: {e}")
                break
                
    async def run(self):
        """运行无人机"""
        if not await self.connect():
            return
            
        self.is_running = True
        
        # 启动心跳和监听任务
        heartbeat_task = asyncio.create_task(self.heartbeat_loop())
        listen_task = asyncio.create_task(self.listen())
        
        try:
            await asyncio.gather(heartbeat_task, listen_task)
        except Exception as e:
            print(f"❌ 无人机 {self.drone_id} 运行异常: {e}")
        finally:
            self.is_running = False
            if self.ws:
                await self.ws.close()

def test_backend_health():
    """测试后端健康状态"""
    try:
        response = requests.get(f"{BASE_URL}/docs")
        return response.status_code == 200
    except:
        return False

def register_drone(drone_id, location):
    """注册无人机"""
    url = f"{BASE_URL}/register_drone"
    data = {
        "drone_id": drone_id,
        "location": location
    }
    
    try:
        response = requests.post(url, json=data)
        if response.status_code == 200:
            result = response.json()
            print(f"✅ 无人机 {drone_id} 注册成功")
            return True
        else:
            print(f"❌ 无人机注册失败: {response.status_code}")
            return False
    except Exception as e:
        print(f"❌ 注册无人机时出错: {e}")
        return False

def add_order(pickup, dropoffs):
    """添加订单"""
    url = f"{BASE_URL}/add_order"
    data = {
        "pickup": pickup,
        "dropoffs": dropoffs
    }
    
    try:
        response = requests.post(url, json=data)
        if response.status_code == 200:
            result = response.json()
            print(f"✅ 订单添加成功")
            print(f"   订单ID: {result['order_id']}")
            print(f"   分配无人机: {result['assigned_drone']}")
            return result
        else:
            print(f"❌ 添加订单失败: {response.status_code}")
            return None
    except Exception as e:
        print(f"❌ 添加订单时出错: {e}")
            return None

def get_orders():
    """获取所有订单"""
    url = f"{BASE_URL}/orders"
    
    try:
        response = requests.get(url)
        if response.status_code == 200:
            orders = response.json()
            print(f"📋 当前订单数量: {len(orders)}")
            for order in orders:
                print(f"   订单 {order['order_id']}: {order['status']} -> {order.get('assigned_drone', '未分配')}")
            return orders
        else:
            print(f"❌ 获取订单失败: {response.status_code}")
            return []
    except Exception as e:
        print(f"❌ 获取订单时出错: {e}")
        return []

def get_drones():
    """获取所有无人机"""
    url = f"{BASE_URL}/drones"
    
    try:
        response = requests.get(url)
        if response.status_code == 200:
            drones = response.json()
            print(f"🚁 当前无人机数量: {len(drones)}")
            for drone in drones:
                online_status = "🟢在线" if drone.get("is_online", False) else "🔴离线"
                last_heartbeat = drone.get("last_heartbeat", 0)
                if last_heartbeat > 0:
                    time_diff = time.time() - last_heartbeat
                    heartbeat_info = f"最后心跳: {time_diff:.1f}秒前"
                else:
                    heartbeat_info = "无心跳记录"
                print(f"   无人机 {drone['drone_id']}: {drone['status']} {online_status} @ {drone['location']} ({heartbeat_info})")
            return drones
        else:
            print(f"❌ 获取无人机失败: {response.status_code}")
            return []
    except Exception as e:
        print(f"❌ 获取无人机时出错: {e}")
        return []

def get_online_drones():
    """获取在线无人机"""
    url = f"{BASE_URL}/online_drones"
    
    try:
        response = requests.get(url)
        if response.status_code == 200:
            drones = response.json()
            print(f"🟢 在线无人机数量: {len(drones)}")
            for drone in drones:
                print(f"   无人机 {drone['drone_id']}: {drone['status']} @ {drone['location']}")
            return drones
        else:
            print(f"❌ 获取在线无人机失败: {response.status_code}")
            return []
    except Exception as e:
        print(f"❌ 获取在线无人机时出错: {e}")
        return []

async def run_mock_drone(drone_id, location, duration=60):
    """运行模拟无人机"""
    drone = MockDrone(drone_id, location)
    print(f"🚁 启动模拟无人机 {drone_id}，运行 {duration} 秒")
    
    # 在后台运行无人机
    drone_task = asyncio.create_task(drone.run())
    
    # 等待指定时间
    await asyncio.sleep(duration)
    
    # 停止无人机
    drone.is_running = False
    print(f"🛑 停止模拟无人机 {drone_id}")

async def test_heartbeat_mechanism():
    """测试心跳机制"""
    print("\n=== 测试心跳机制 ===")
    
    # 1. 检查后端服务
    if not test_backend_health():
        print("❌ 后端服务未运行，请先启动后端服务")
        return
    
    # 2. 启动多个模拟无人机
    drones_data = [
        ("drone_001", [47.397971, 8.546164]),
        ("drone_002", [47.398971, 8.547164]),
        ("drone_003", [47.396971, 8.545164])
    ]
    
    # 启动无人机任务
    drone_tasks = []
    for drone_id, location in drones_data:
        task = asyncio.create_task(run_mock_drone(drone_id, location, 120))  # 运行2分钟
        drone_tasks.append(task)
    
    # 等待无人机启动
    await asyncio.sleep(5)
    
    # 3. 查看初始状态
    print("\n--- 初始状态 ---")
    get_drones()
    get_online_drones()
    
    # 4. 添加订单测试
    print("\n--- 添加订单测试 ---")
    order_result = add_order([47.397971, 8.546164], [[47.398971, 8.547164]])
    
    # 5. 查看订单分配
    print("\n--- 订单分配结果 ---")
    get_orders()
    get_drones()
    
    # 6. 等待一段时间，观察心跳
    print("\n--- 观察心跳机制 (30秒) ---")
    for i in range(6):
        await asyncio.sleep(5)
        print(f"\n第 {i+1} 次检查 ({(i+1)*5}秒):")
        get_online_drones()
    
    # 7. 停止部分无人机，测试离线检测
    print("\n--- 测试离线检测 ---")
    print("停止无人机 drone_001 和 drone_002...")
    
    # 等待离线检测
    await asyncio.sleep(35)  # 等待超过30秒心跳超时
    
    print("\n--- 离线检测结果 ---")
    get_drones()
    get_orders()
    
    # 8. 添加新订单，测试只分配给在线无人机
    print("\n--- 测试订单重新分配 ---")
    new_order_result = add_order([47.396971, 8.545164], [[47.397971, 8.546164]])
    
    print("\n--- 最终状态 ---")
    get_orders()
    get_drones()
    
    # 等待无人机任务完成
    await asyncio.gather(*drone_tasks, return_exceptions=True)

def test_offline_reassignment():
    """测试离线订单重新分配"""
    print("\n=== 测试离线订单重新分配 ===")
    
    # 1. 注册无人机
    register_drone("test_drone_001", [47.397971, 8.546164])
    register_drone("test_drone_002", [47.398971, 8.547164])
    
    # 2. 添加订单
    order_result = add_order([47.397971, 8.546164], [[47.398971, 8.547164]])
    
    # 3. 查看初始分配
    print("\n--- 初始分配 ---")
    get_orders()
    get_drones()
    
    # 4. 模拟无人机离线（通过直接修改后端状态）
    print("\n--- 模拟无人机离线 ---")
    # 这里可以通过API或直接修改后端状态来模拟无人机离线
    
    # 5. 添加新订单，测试重新分配
    print("\n--- 添加新订单测试重新分配 ---")
    new_order = add_order([47.396971, 8.545164], [[47.397971, 8.546164]])
    
    print("\n--- 最终状态 ---")
    get_orders()
    get_drones()

def main():
    """主函数"""
    print("💓 无人机心跳机制测试工具")
    print("=" * 50)
    
    while True:
        print("\n请选择测试:")
        print("1. 完整心跳机制测试")
        print("2. 离线订单重新分配测试")
        print("3. 查看当前状态")
        print("4. 退出")
        
        choice = input("\n请输入选择 (1-4): ").strip()
        
        if choice == "1":
            asyncio.run(test_heartbeat_mechanism())
        elif choice == "2":
            test_offline_reassignment()
        elif choice == "3":
            print("\n--- 当前状态 ---")
            get_drones()
            get_orders()
        elif choice == "4":
            print("再见！")
            break
        else:
            print("无效选择，请重新输入")

if __name__ == "__main__":
    main() 