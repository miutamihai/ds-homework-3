cmake_minimum_required(VERSION 3.22.0)

project(lab2)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(src)
add_executable(app main.cpp src/farey.cpp)
