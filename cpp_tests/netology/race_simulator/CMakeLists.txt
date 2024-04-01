cmake_minimum_required(VERSION 3.25)
project(race_simulator)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(${PROJECT_SOURCE_DIR}/bin ${PROJECT_BINARY_DIR}/bin)
add_subdirectory(${PROJECT_SOURCE_DIR}/lib ${PROJECT_BINARY_DIR}/lib)