#!/usr/bin/env python3
"""
心跳机制快速演示脚本
"""

import requests
import time
import json
import asyncio
import websockets
from datetime import datetime

BASE_URL = "http://127.0.0.1:8000"
WS_URL = "ws://127.0.0.1:8000/ws/drone"

class DemoDrone:
    def __init__(self, drone_id, location):
        self.drone_id = drone_id
        self.location = location
        self.ws = None
        self.is_running = False
        
    async def run(self, duration=30):
        """运行演示无人机"""
        try:
            # 连接WebSocket
            self.ws = await websockets.connect(WS_URL)
            
            # 注册
            await self.ws.send(json.dumps({
                "type": "register",
                "drone_id": self.drone_id,
                "location": self.location
            }))
            response = await self.ws.recv()
            print(f"✅ {self.drone_id} 注册成功")
            
            self.is_running = True
            
            # 启动心跳任务
            heartbeat_task = asyncio.create_task(self.heartbeat_loop())
            
            # 运行指定时间
            await asyncio.sleep(duration)
            
            # 停止
            self.is_running = False
            await self.ws.close()
            print(f"🛑 {self.drone_id} 已停止")
            
        except Exception as e:
            print(f"❌ {self.drone_id} 异常: {e}")
    
    async def heartbeat_loop(self):
        """心跳循环"""
        while self.is_running:
            try:
                await self.ws.send(json.dumps({
                    "type": "heartbeat",
                    "drone_id": self.drone_id,
                    "timestamp": time.time()
                }))
                await asyncio.sleep(15)
            except Exception as e:
                print(f"❌ {self.drone_id} 心跳失败: {e}")
                break

def print_status():
    """打印系统状态"""
    try:
        # 获取无人机状态
        drones_response = requests.get(f"{BASE_URL}/drones")
        if drones_response.status_code == 200:
            drones = drones_response.json()
            print(f"\n🚁 无人机状态 ({len(drones)}个):")
            for drone in drones:
                online = "🟢" if drone.get("is_online", False) else "🔴"
                last_hb = drone.get("last_heartbeat", 0)
                if last_hb > 0:
                    time_diff = time.time() - last_hb
                    hb_info = f"{time_diff:.1f}s"
                else:
                    hb_info = "无"
                print(f"  {online} {drone['drone_id']}: {drone['status']} 心跳:{hb_info}")
        
        # 获取订单状态
        orders_response = requests.get(f"{BASE_URL}/orders")
        if orders_response.status_code == 200:
            orders = orders_response.json()
            if orders:
                print(f"\n📦 订单状态 ({len(orders)}个):")
                for order in orders:
                    print(f"  订单{order['order_id']}: {order['status']} -> {order.get('assigned_drone', '未分配')}")
            else:
                print(f"\n📦 无订单")
                
    except Exception as e:
        print(f"❌ 获取状态失败: {e}")

def add_demo_order():
    """添加演示订单"""
    try:
        response = requests.post(f"{BASE_URL}/add_order", json={
            "pickup": [47.397971, 8.546164],
            "dropoffs": [[47.398971, 8.547164]]
        })
        if response.status_code == 200:
            result = response.json()
            print(f"✅ 添加订单: ID={result['order_id']}, 分配={result['assigned_drone']}")
        else:
            print(f"❌ 添加订单失败: {response.status_code}")
    except Exception as e:
        print(f"❌ 添加订单异常: {e}")

async def demo():
    """演示心跳机制"""
    print("💓 心跳机制演示")
    print("=" * 40)
    
    # 检查后端
    try:
        requests.get(f"{BASE_URL}/docs")
    except:
        print("❌ 后端服务未运行，请先启动后端服务")
        return
    
    # 启动3个无人机
    drones = [
        DemoDrone("demo_001", [47.397971, 8.546164]),
        DemoDrone("demo_002", [47.398971, 8.547164]),
        DemoDrone("demo_003", [47.396971, 8.545164])
    ]
    
    # 启动无人机任务
    drone_tasks = []
    for drone in drones:
        task = asyncio.create_task(drone.run(60))  # 运行1分钟
        drone_tasks.append(task)
    
    # 等待无人机启动
    await asyncio.sleep(3)
    
    print("\n=== 步骤1: 初始状态 ===")
    print_status()
    
    print("\n=== 步骤2: 添加订单 ===")
    add_demo_order()
    print_status()
    
    print("\n=== 步骤3: 观察心跳 (15秒) ===")
    for i in range(3):
        await asyncio.sleep(5)
        print(f"\n第{i+1}次检查:")
        print_status()
    
    print("\n=== 步骤4: 停止部分无人机 ===")
    print("停止 demo_001 和 demo_002...")
    
    # 等待离线检测
    await asyncio.sleep(35)
    
    print("\n=== 步骤5: 离线检测结果 ===")
    print_status()
    
    print("\n=== 步骤6: 添加新订单测试重新分配 ===")
    add_demo_order()
    print_status()
    
    # 等待所有任务完成
    await asyncio.gather(*drone_tasks, return_exceptions=True)
    print("\n✅ 演示完成")

def main():
    print("💓 心跳机制快速演示")
    print("=" * 40)
    
    while True:
        print("\n选择操作:")
        print("1. 运行完整演示")
        print("2. 查看当前状态")
        print("3. 添加测试订单")
        print("4. 退出")
        
        choice = input("\n请输入选择 (1-4): ").strip()
        
        if choice == "1":
            asyncio.run(demo())
        elif choice == "2":
            print_status()
        elif choice == "3":
            add_demo_order()
        elif choice == "4":
            print("再见！")
            break
        else:
            print("无效选择")

if __name__ == "__main__":
    main() 