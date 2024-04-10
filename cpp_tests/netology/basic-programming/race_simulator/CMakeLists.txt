cmake_minimum_required(VERSION 3.25)

project(race_simulator)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_executable(race_simulator main.cpp)

add_library(race_simulator_lib SHARED
        # race simulation class
        lib/Simulation.cpp
        # core classes
        lib/Vehicle.cpp
        lib/VehicleFactory.cpp
        lib/VehicleManager.cpp
        # land vehicles classes
        lib/land/LandVehicle.cpp
        lib/land/Camel.cpp
        lib/land/FastCamel.cpp
        lib/land/Centaur.cpp
        lib/land/AllTerrainBoots.cpp
        # air vehicles classes
        lib/air/AirVehicle.cpp
        lib/air/Eagle.cpp
        lib/air/CarpetPlane.cpp
        lib/air/Broom.cpp
        # support classes
        lib/VehicleComparator.cpp
        lib/VehicleRegisteredException.cpp
        )

target_link_libraries(race_simulator race_simulator_lib)
