cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_COMPILER g++)
project(Task-1-static-library)
add_library(GreeterLibrary STATIC Greeter.cpp)
add_executable(GreeterExecutable main.cpp)
target_link_libraries(GreeterExecutable GreeterLibrary)
