cmake_minimum_required(VERSION 3.17)
project(PLR)

set(CMAKE_CXX_STANDARD 14)

add_executable(PLR main.cpp geo.cpp geo.h segment.cpp segment.h)