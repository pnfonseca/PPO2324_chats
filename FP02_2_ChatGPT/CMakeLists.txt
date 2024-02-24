cmake_minimum_required(VERSION 3.0)
project(GeometricFigures)

set(CMAKE_CXX_STANDARD 11)

# Add executable
add_executable(${PROJECT_NAME}
        main.cpp
        circle.cpp
        square.cpp
        rectangle.cpp
        point.cpp
)
