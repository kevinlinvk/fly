#!/bin/bash
# 启动 FastAPI 后端
cd backend
uvicorn main:app --host 0.0.0.0 --port 8000 --reload 