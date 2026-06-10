cmake_minimum_required(VERSION 3.20)
project(starfall-engine VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(starfall-engine 
    src/main.cpp 
    src/core/engine.cpp 
    src/ecs/ecs.cpp
)
