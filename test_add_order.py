#!/usr/bin/env python3
"""
通过API增加订单的测试脚本
"""

import requests
import json
import time
import random

# 后端API地址
BASE_URL = "http://127.0.0.1:8000"

def test_backend_health():
    """测试后端服务是否正常运行"""
    try:
        response = requests.get(f"{BASE_URL}/docs")
        if response.status_code == 200:
            print("✅ 后端服务正常运行")
            return True
        else:
            print(f"❌ 后端服务异常: {response.status_code}")
            return False
    except requests.exceptions.ConnectionError:
        print("❌ 无法连接到后端服务，请确保后端服务已启动")
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
                print(f"   无人机 {drone['drone_id']}: {drone['status']} @ {drone['location']}")
            return drones
        else:
            print(f"❌ 获取无人机失败: {response.status_code}")
            return []
    except Exception as e:
        print(f"❌ 获取无人机时出错: {e}")
        return []

def interactive_add_order():
    """交互式添加订单"""
    print("\n=== 交互式添加订单 ===")
    
    try:
        # 获取用户输入
        print("请输入取货点坐标 (格式: 纬度,经度):")
        pickup_input = input("取货点: ").strip()
        pickup = [float(x.strip()) for x in pickup_input.split(",")]
        
        print("请输入投递点坐标 (格式: 纬度,经度)，多个投递点用分号分隔:")
        dropoffs_input = input("投递点: ").strip()
        dropoffs = []
        for dropoff_str in dropoffs_input.split(";"):
            dropoff = [float(x.strip()) for x in dropoff_str.split(",")]
            dropoffs.append(dropoff)
        
        # 添加订单
        result = add_order(pickup, dropoffs)
        if result:
            print(f"✅ 订单添加成功！")
            print(f"订单ID: {result['order_id']}")
            print(f"分配无人机: {result['assigned_drone']}")
        else:
            print("❌ 订单添加失败")
            
    except ValueError:
        print("❌ 坐标格式错误，请使用正确的格式")
    except KeyboardInterrupt:
        print("\n操作已取消")

def main():
    """主函数"""
    print("🚁 无人机配送系统 - API测试工具")
    print("=" * 50)
    
    while True:
        print("\n请选择操作:")
        print("1. 交互式添加订单")
        print("2. 查看当前状态")
        print("3. 退出")
        
        choice = input("\n请输入选择 (1-3): ").strip()
        
        if choice == "1":
            interactive_add_order()
        elif choice == "2":
            print("\n--- 当前状态 ---")
            get_drones()
            get_orders()
        elif choice == "3":
            print("再见！")
            break
        else:
            print("无效选择，请重新输入")

if __name__ == "__main__":
    main() 