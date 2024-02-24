cmake_minimum_required(VERSION 3.0)
project(GeometricFigures)

# Specify source and header files
file(GLOB_RECURSE SOURCES *.cpp)
file(GLOB_RECURSE HEADERS *.h)

# Include necessary directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add all source files to the project
add_executable(${PROJECT_NAME} ${SOURCES})

# Find required libraries (may need adjustments based on your system)
find_package(Threads REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE Threads::Threads)
