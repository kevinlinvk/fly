import asyncio
import time
import json
import websockets

print("websockets module path:", websockets.__file__)

class DeliveryDroneNode:
    def run(self):
        """运行无人机节点，支持WebSocket断线自动重连"""
        self.get_logger().info("启动无人机节点")
        self.wait_for_gps()
        
        while True:
            try:
                # 修复事件循环警告
                try:
                    loop = asyncio.get_event_loop()
                except RuntimeError:
                    loop = asyncio.new_event_loop()
                    asyncio.set_event_loop(loop)
                
                # 连接WebSocket并注册
                loop.run_until_complete(self.connect())
                # 启动心跳和监听任务
                self.heartbeat_task = loop.create_task(self.heartbeat_loop())
                loop.create_task(self.listen())
                self.get_logger().info(f"无人机 {self.drone_id} 启动完成，心跳间隔: {HEARTBEAT_INTERVAL}秒")
                loop.run_forever()
            except Exception as e:
                self.get_logger().error(f"主循环异常: {e}，3秒后重连")
                time.sleep(3)

    async def safe_send(self, msg):
        try:
            if not self.ws or getattr(self.ws, 'close_code', None) is not None:
                raise RuntimeError("WebSocket未连接或已关闭")
            await self.ws.send(json.dumps(msg))
        except Exception as e:
            self.get_logger().error(f"WebSocket发送失败: {e}")
            raise

    async def safe_recv(self):
        try:
            if not self.ws or getattr(self.ws, 'close_code', None) is not None:
                raise RuntimeError("WebSocket未连接或已关闭")
            msg = await self.ws.recv()
            return msg
        except Exception as e:
            self.get_logger().error(f"WebSocket接收失败: {e}")
            raise

    async def connect(self):
        """连接WebSocket"""
        while True:
            try:
                self.ws = await websockets.connect(self.backend_url)
                print("ws type:", type(self.ws))
                await self.register()
                self.get_logger().info(f"WebSocket连接成功: {self.backend_url}")
                break
            except Exception as e:
                self.get_logger().error(f"WebSocket连接失败: {e}，3秒后重试...")
                await asyncio.sleep(3) 