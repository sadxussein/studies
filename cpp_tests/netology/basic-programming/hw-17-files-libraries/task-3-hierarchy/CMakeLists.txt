cmake_minimum_required(VERSION 3.25)
project(task_3_figures_methods)

set(CMAKE_CXX_STANDARD 20)

add_executable(task_3_figures_methods main.cpp Polygon.cpp Triangle.cpp Triangle.h includes.h Quadrangle.cpp Quadrangle.h Triangle/EquiliteralTriangle.cpp Triangle/EquiliteralTriangle.h Triangle/RightTriangle.cpp Triangle/RightTriangle.h Triangle/IsoscelesTriangle.cpp Triangle/IsoscelesTriangle.h Quadrangle/Square.cpp Quadrangle/Square.h Quadrangle/Rectangle.cpp Quadrangle/Rectangle.h Quadrangle/Parallelogram.cpp Quadrangle/Parallelogram.h Quadrangle/Rhombus.cpp Quadrangle/Rhombus.h)
