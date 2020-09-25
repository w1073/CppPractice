# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.15)

# 项目信息
project(test)

# 头文件包含路径
set(BOOST_INCLUDE "H:\\boost-1.68\\include")
set(BOOST_LINK "H:\\boost-1.68\\lib")

INCLUDE_DIRECTORIES(${BOOST_INCLUDE})
LINK_DIRECTORIES(PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${BOOST_LINK})

add_executable(${PROJECT_NAME} src/testBoost/test.cpp)
