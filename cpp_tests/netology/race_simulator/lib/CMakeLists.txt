cmake_minimum_required(VERSION 3.25)
project(lib)

set(CMAKE_CXX_STANDARD 20)

add_library(lib SHARED Simulation.cpp Camel.cpp)
