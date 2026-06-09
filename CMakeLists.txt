cmake_minimum_required(VERSION 3.15)
project(design-patterns LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(src/behavioral/strategy)
add_subdirectory(src/creational/singleton)
add_subdirectory(src/structural/adapter)
