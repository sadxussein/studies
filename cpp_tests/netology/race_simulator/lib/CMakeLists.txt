set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(race_simulator_lib SHARED Simulation.cpp Camel.cpp Eagle.cpp VehicleManager.cpp VehicleFactory.cpp Vehicle.cpp)