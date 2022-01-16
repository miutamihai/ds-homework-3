cmake_minimum_required(VERSION 3.22.0)

project(lab2)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(src)
add_executable(app main.cpp src/double_stack_exercise2.cpp src/lesser_sign_exercise5.cpp postfix_exercise8.cpp prime_divisors_exercise3.cpp scroll_exercise6.cpp stack_exercise1.cpp)
