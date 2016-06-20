cmake_minimum_required(VERSION 3.3)
project(Linux_IPC_Tools)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp FPtoSockTee.cpp FPtoSockTee.h)
add_executable(Linux_IPC_Tools ${SOURCE_FILES})