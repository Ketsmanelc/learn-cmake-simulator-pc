cmake_minimum_required(VERSION 3.20)
project(PC_CMake)

set(CMAKE_CXX_STANDARD 14)

add_executable(PC_CMake main.cpp cpu.cpp cpu.h ram.cpp ram.h disk.cpp disk.h gpu.cpp gpu.h kbd.cpp kbd.h)
