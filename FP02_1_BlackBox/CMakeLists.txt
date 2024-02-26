cmake_minimum_required(VERSION 3.10)

project(Time)

set(CMAKE_CXX_STANDARD 11)

# Include directories
include_directories(.)

# Source files
set(SOURCES
    Time.cpp
    main.cpp
)

# Executable
add_executable(Time ${SOURCES})

# Installation
install(TARGETS Time DESTINATION bin)