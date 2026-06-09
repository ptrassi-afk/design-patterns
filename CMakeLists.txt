cmake_minimum_required(VERSION 3.15)
project(design-patterns LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)

endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(WARNINGS_FLAGS
        -Wall
        -Wextra
        -Werror
        -Wshadow
        -Wconversion
        -Wpedantic
        -Wnull-dereference
    )

    set(SANITIZER_FLAGS
        -fsanitize=address
        -fsanitize=undefined
        -fsanitize=leak
    )

    add_compile_options(${WARNINGS_FLAGS} ${SANITIZER_FLAGS})
    add_link_options(${SANITIZER_FLAGS})

endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(src/behavioral/strategy)
add_subdirectory(src/creational/singleton)
add_subdirectory(src/structural/adapter)
