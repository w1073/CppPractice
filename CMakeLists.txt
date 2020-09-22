# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.11)

# 项目信息
project(CppPractice)

# 指定生成目标
add_executable(${PROJECT_NAME} src/rangedFor.cpp)
# 头文件包含路径
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})