import rclpy
from rclpy.node import Node
import requests
import time
import os
import random

class DeliveryDrone(Node):
    def __init__(self):
        super().__init__('delivery_drone')
        self.backend_url = os.environ.get("DELIVERY_BACKEND_URL", "http://127.0.0.1:8000")
        self.drone_id = os.environ.get("DRONE_ID", f"drone{random.randint(100,999)}")
        self.current_order = None
        self.current_dropoff = 0
        # 模拟初始位置
        self.location = [31.2300 + random.uniform(-0.01, 0.01), 121.4700 + random.uniform(-0.01, 0.01)]
        self.status = "idle"
        self.register_until_success()
        self.print_drones()

    def register_until_success(self):
        while True:
            try:
                resp = requests.post(f"{self.backend_url}/register_drone", json={
                    "drone_id": self.drone_id,
                    "location": self.location
                }, timeout=3)
                if resp.status_code == 200:
                    self.get_logger().info(f"无人机已注册: {self.drone_id} 位置: {self.location}")
                    break
                else:
                    self.get_logger().error(f"注册失败: {resp.text}")
            except Exception as e:
                self.get_logger().error(f"注册异常: {e}，3秒后重试...")
            time.sleep(3)

    def print_drones(self):
        try:
            resp = requests.get(f"{self.backend_url}/drones")
            if resp.status_code == 200:
                self.get_logger().info(f"后端当前无人机列表: {resp.text}")
        except Exception as e:
            self.get_logger().error(f"获取drones失败: {e}")

    def update_location(self, new_location):
        self.location = new_location
        try:
            requests.post(f"{self.backend_url}/update_location", json={
                "drone_id": self.drone_id,
                "location": self.location
            })
        except Exception as e:
            self.get_logger().error(f"位置上报失败: {e}")

    def get_next_order(self):
        try:
            # 显式拼接query string，避免requests的params与FastAPI不兼容
            url = f"{self.backend_url}/next_order?drone_id={self.drone_id}"
            resp = requests.get(url)
            if resp.status_code == 200:
                self.current_order = resp.json()
                self.status = "busy"
                self.get_logger().info(f"接收到订单: {self.current_order}")
            else:
                self.status = "idle"
                self.get_logger().info("没有新订单")
        except Exception as e:
            self.get_logger().error(f"获取订单失败: {e}")

    def confirm_dropoff(self):
        if not self.current_order:
            self.get_logger().error("confirm_dropoff called but current_order is None")
            return None
        try:
            resp = requests.post(f"{self.backend_url}/confirm_dropoff", params={
                "order_id": self.current_order["order_id"],
                "dropoff_index": self.current_dropoff
            })
            if resp.status_code == 200:
                return resp.json()["location"]
            else:
                return None
        except Exception as e:
            self.get_logger().error(f"确认目的地失败: {e}")
            return None

    def report_status(self, status, location, finished=False):
        try:
            data = {
                "drone_id": self.drone_id,
                "status": status,
                "location": location,
                "order_id": self.current_order["order_id"] if self.current_order else None
            }
            requests.post(f"{self.backend_url}/drone_status", json=data)
            if finished:
                self.status = "idle"
                self.get_logger().info(f"订单{data['order_id']}已完成")
        except Exception as e:
            self.get_logger().error(f"上报状态失败: {e}")

    def fly_to(self, gps):
        self.get_logger().info(f"飞往: {gps}")
        # 模拟飞行，更新位置
        self.update_location(gps)
        time.sleep(2)
        self.report_status("arrived", gps)

    def run(self):
        while rclpy.ok():
            self.get_next_order()
            if self.current_order:
                self.fly_to(self.current_order["pickup"])
                self.report_status("landed_pickup", self.current_order["pickup"])
                for idx, dropoff in enumerate(self.current_order["dropoffs"]):
                    self.current_dropoff = idx
                    dest = self.confirm_dropoff()
                    if dest:
                        self.fly_to(dest)
                        self.report_status("landed_dropoff", dest)
                self.report_status("finished", self.current_order["dropoffs"][-1], finished=True)
                self.current_order = None
            time.sleep(5)

def main(args=None):
    rclpy.init(args=args)
    node = DeliveryDrone()
    node.run()
    rclpy.shutdown()

if __name__ == "__main__":
    main() 