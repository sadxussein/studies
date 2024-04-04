cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_COMPILER g++)
project(factory_method_test)
add_executable(factory_method_test main.cpp)
add_library(factory_method_lib STATIC 
    LandVehicle.cpp
    Camel.cpp
    )
target_link_libraries(factory_method_test factory_method_lib)