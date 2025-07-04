#!/bin/bash

# 启动Micro-XRCE-DDS-Agent
echo "启动Micro-XRCE-DDS-Agent..."

# 使用UDP传输（默认端口8888）
MicroXRCEAgent udp4 -p 8888 &

# 或者使用TCP传输（端口8888）
# MicroXRCEAgent tcp4 -p 8888 &

echo "Micro-XRCE-DDS-Agent已启动在端口8888"
echo "使用Ctrl+C停止"

# 等待用户中断
wait 