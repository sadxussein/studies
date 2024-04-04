cmake_minimum_required(VERSION 3.25)

project(race_simulator)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_executable(race_simulator main.cpp)

add_library(race_simulator_lib SHARED
        # race simulation class
        Simulation.cpp
        # land vehicles classes and concrete factory classes
        LandVehicle.cpp
        Camel.cpp
        CamelFactory.cpp
        #        land/FastCamel.cpp
        #        land/Centaur.cpp
        #        land/AllTerrainBoots.cpp
        # air vehicles classes and concrete factory classes
        #        air/Eagle.cpp
        #        air/CarpetPlane.cpp
        #        air/Broom.cpp
        #        air/AirVehicle.cpp
        # core classes
        Vehicle.cpp
        VehicleManager.cpp
        VehicleFactory.cpp
        # support comparator class
        VehicleComparator.cpp
        )

target_link_libraries(race_simulator race_simulator_lib)
