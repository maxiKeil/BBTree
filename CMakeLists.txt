cmake_minimum_required(VERSION 3.5)
project(AlgoDat2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES BBTree.cpp BBTree.h BBTree.cpp BBTree.cpp BBTree.h)
add_executable(AlgoDat2 ${SOURCE_FILES} BBTree.cpp)