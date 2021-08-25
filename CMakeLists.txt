cmake_minimum_required(VERSION 3.19)
project(lab06_starter)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab06_starter
        examheap.cpp
        heap.cpp
        heap.h)
