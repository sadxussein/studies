cmake_minimum_required(VERSION 3.25)

set(CMAKE_CXX_COMPILER g++)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

project(factory_method_test)

add_executable(factory_method_test main.cpp)

add_library(factory_method_lib SHARED
        # vehicles classes
        lib/Vehicle.cpp
        lib/land/LandVehicle.cpp
        lib/land/Camel.cpp
        # vehicle factories classes
        lib/VehicleFactory.cpp
        lib/land/CamelFactory.cpp
        # race simulation class
        # support comparator class for vector
        )

target_link_libraries(factory_method_test factory_method_lib)