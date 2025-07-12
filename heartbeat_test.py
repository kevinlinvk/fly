#!/usr/bin/env python3
"""
简化心跳机制测试脚本
"""

import requests
import time
import json
import asyncio
import websockets

BASE_URL = "http://127.0.0.1:8000"
WS_URL = "ws://127.0.0.1:8000/ws/drone"

class SimpleMockDrone:
    def __init__(self, drone_id, location):
        self.drone_id = drone_id
        self.location = location
        self.ws = None
        self.is_running = False
        
    async def run(self, duration=60):
        """运行模拟无人机"""
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
            print(f"✅ 无人机 {self.drone_id} 注册成功")
            
            self.is_running = True
            
            # 启动心跳任务
            heartbeat_task = asyncio.create_task(self.heartbeat_loop())
            
            # 运行指定时间
            await asyncio.sleep(duration)
            
            # 停止
            self.is_running = False
            await self.ws.close()
            print(f"🛑 无人机 {self.drone_id} 已停止")
            
        except Exception as e:
            print(f"❌ 无人机 {self.drone_id} 运行异常: {e}")
    
    async def heartbeat_loop(self):
        """心跳循环"""
        while self.is_running:
            try:
                await self.ws.send(json.dumps({
                    "type": "heartbeat",
                    "drone_id": self.drone_id,
                    "timestamp": time.time()
                }))
                await asyncio.sleep(15)  # 15秒心跳间隔
            except Exception as e:
                print(f"❌ 无人机 {self.drone_id} 心跳失败: {e}")
                break

def check_backend():
    """检查后端状态"""
    try:
        response = requests.get(f"{BASE_URL}/docs")
        return response.status_code == 200
    except:
        return False

def get_status():
    """获取系统状态"""
    try:
        # 获取无人机状态
        drones_response = requests.get(f"{BASE_URL}/drones")
        if drones_response.status_code == 200:
            drones = drones_response.json()
            print(f"\n🚁 无人机状态 (共{len(drones)}个):")
            for drone in drones:
                online = "🟢在线" if drone.get("is_online", False) else "🔴离线"
                last_hb = drone.get("last_heartbeat", 0)
                if last_hb > 0:
                    time_diff = time.time() - last_hb
                    hb_info = f"{time_diff:.1f}秒前"
                else:
                    hb_info = "无记录"
                print(f"  {drone['drone_id']}: {drone['status']} {online} 心跳:{hb_info}")
        
        # 获取订单状态
        orders_response = requests.get(f"{BASE_URL}/orders")
        if orders_response.status_code == 200:
            orders = orders_response.json()
            print(f"\n📦 订单状态 (共{len(orders)}个):")
            for order in orders:
                print(f"  订单{order['order_id']}: {order['status']} -> {order.get('assigned_drone', '未分配')}")
                
    except Exception as e:
        print(f"❌ 获取状态失败: {e}")

def add_test_order():
    """添加测试订单"""
    try:
        response = requests.post(f"{BASE_URL}/add_order", json={
            "pickup": [47.397971, 8.546164],
            "dropoffs": [[47.398971, 8.547164]]
        })
        if response.status_code == 200:
            result = response.json()
            print(f"✅ 添加订单成功: ID={result['order_id']}, 分配={result['assigned_drone']}")
        else:
            print(f"❌ 添加订单失败: {response.status_code}")
    except Exception as e:
        print(f"❌ 添加订单异常: {e}")

async def test_heartbeat():
    """测试心跳机制"""
    print("💓 开始心跳机制测试")
    
    if not check_backend():
        print("❌ 后端服务未运行，请先启动后端服务")
        return
    
    # 启动3个模拟无人机
    drones = [
        SimpleMockDrone("drone_001", [47.397971, 8.546164]),
        SimpleMockDrone("drone_002", [47.398971, 8.547164]),
        SimpleMockDrone("drone_003", [47.396971, 8.545164])
    ]
    
    # 启动无人机任务
    drone_tasks = []
    for drone in drones:
        task = asyncio.create_task(drone.run(120))  # 运行2分钟
        drone_tasks.append(task)
    
    # 等待无人机启动
    await asyncio.sleep(5)
    
    print("\n=== 初始状态 ===")
    get_status()
    
    # 添加测试订单
    print("\n=== 添加测试订单 ===")
    add_test_order()
    get_status()
    
    # 观察心跳
    print("\n=== 观察心跳机制 (30秒) ===")
    for i in range(6):
        await asyncio.sleep(5)
        print(f"\n第{i+1}次检查:")
        get_status()
    
    # 停止部分无人机测试离线检测
    print("\n=== 测试离线检测 ===")
    print("停止无人机 drone_001 和 drone_002...")
    
    # 等待离线检测
    await asyncio.sleep(35)
    
    print("\n=== 离线检测结果 ===")
    get_status()
    
    # 添加新订单测试重新分配
    print("\n=== 测试订单重新分配 ===")
    add_test_order()
    get_status()
    
    # 等待所有任务完成
    await asyncio.gather(*drone_tasks, return_exceptions=True)
    print("\n✅ 测试完成")

def main():
    print("💓 无人机心跳机制测试")
    print("=" * 40)
    
    while True:
        print("\n选择操作:")
        print("1. 运行完整心跳测试")
        print("2. 查看当前状态")
        print("3. 添加测试订单")
        print("4. 退出")
        
        choice = input("\n请输入选择 (1-4): ").strip()
        
        if choice == "1":
            asyncio.run(test_heartbeat())
        elif choice == "2":
            get_status()
        elif choice == "3":
            add_test_order()
        elif choice == "4":
            print("再见！")
            break
        else:
            print("无效选择")

if __name__ == "__main__":
    main() 