cmake_minimum_required(VERSION 3.25)

project(race_simulator)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_executable(race_simulator main.cpp)

add_library(race_simulator_lib SHARED
        # race simulation class
        lib/Simulation.cpp
        # land vehicles classes and concrete factory classes
        lib/land/LandVehicle.cpp
        lib/land/Camel.cpp
        lib/land/CamelFactory.cpp
        lib/land/FastCamel.cpp
        lib/land/FastCamelFactory.cpp
        lib/land/Centaur.cpp
        lib/land/CentaurFactory.cpp
        lib/land/AllTerrainBoots.cpp
        lib/land/AllTerrainBootsFactory.cpp
        # air vehicles classes and concrete factory classes
        lib/air/AirVehicle.cpp
        lib/air/Eagle.cpp
        lib/air/EagleFactory.cpp
        lib/air/CarpetPlane.cpp
        lib/air/CarpetPlaneFactory.cpp
        lib/air/Broom.cpp
        lib/air/BroomFactory.cpp
        # core classes
        lib/Vehicle.cpp
        lib/VehicleManager.cpp
        # support comparator class
        lib/VehicleComparator.cpp
        )

target_link_libraries(race_simulator race_simulator_lib)
