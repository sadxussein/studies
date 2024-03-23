cmake_minimum_required(VERSION 3.25)
project(task_2_constructor_exception)

set(CMAKE_CXX_STANDARD 20)

add_executable(task_2_constructor_exception main.cpp Triangle.cpp PolygonConstructorException.cpp PolygonConstructorException.h Polygon.cpp Quadrangle.cpp Triangle/RightTriangle.cpp Triangle/IsoscelesTriangle.cpp Triangle/EquiliteralTriangle.cpp Quadrangle/Parallelogram.cpp Quadrangle/Rectangle.cpp Quadrangle/Rhombus.cpp Quadrangle/Square.cpp)
