cmake_minimum_required(VERSION 3.16)
project(ZadClassKcpp)

# standard C++
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)
file(GLOB SOURCES "src/*.cc" "main.cc")

add_executable(ZadClassKcpp ${SOURCES})
