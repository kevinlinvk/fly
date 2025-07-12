#!/bin/bash
# API使用示例脚本

echo "🚁 无人机配送系统 - API使用示例"
echo "=================================="

# 后端服务地址
BASE_URL="http://127.0.0.1:8000"

echo ""
echo "1. 检查后端服务状态"
echo "curl $BASE_URL/docs"
curl -s $BASE_URL/docs > /dev/null && echo "✅ 后端服务正常运行" || echo "❌ 后端服务未运行"

echo ""
echo "2. 注册无人机示例"
echo "curl -X POST $BASE_URL/register_drone \\"
echo "  -H 'Content-Type: application/json' \\"
echo "  -d '{\"drone_id\": \"drone_001\", \"location\": [47.397971, 8.546164]}'"

echo ""
echo "3. 添加订单示例"
echo "curl -X POST $BASE_URL/add_order \\"
echo "  -H 'Content-Type: application/json' \\"
echo "  -d '{"
echo "    \"pickup\": [47.397971, 8.546164],"
echo "    \"dropoffs\": [[47.398971, 8.547164], [47.396971, 8.545164]]"
echo "  }'"

echo ""
echo "4. 查询所有订单"
echo "curl $BASE_URL/orders"

echo ""
echo "5. 查询所有无人机"
echo "curl $BASE_URL/drones"

echo ""
echo "=================================="
echo "实际执行示例："
echo ""

# 实际执行示例
echo "注册无人机..."
curl -X POST $BASE_URL/register_drone \
  -H 'Content-Type: application/json' \
  -d '{"drone_id": "test_drone", "location": [47.397971, 8.546164]}' \
  -s | jq '.'

echo ""
echo "添加订单..."
curl -X POST $BASE_URL/add_order \
  -H 'Content-Type: application/json' \
  -d '{
    "pickup": [47.397971, 8.546164],
    "dropoffs": [[47.398971, 8.547164], [47.396971, 8.545164]]
  }' \
  -s | jq '.'

echo ""
echo "查询订单状态..."
curl -s $BASE_URL/orders | jq '.'

echo ""
echo "查询无人机状态..."
curl -s $BASE_URL/drones | jq '.'

echo ""
echo "=================================="
echo "API文档地址: $BASE_URL/docs"
echo "可以在浏览器中打开查看完整的API文档" 