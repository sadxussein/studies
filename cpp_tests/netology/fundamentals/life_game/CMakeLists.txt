cmake_minimum_required(VERSION 3.25)
project(life_game)

set(CMAKE_CXX_STANDARD 17)

add_executable(life_game main.cpp Cell.cpp Cell.h Field.cpp Field.h Game.cpp Game.h)