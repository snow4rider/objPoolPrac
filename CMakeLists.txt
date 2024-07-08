cmake_minimum_required(VERSION 3.20.0)

# Setup project name
project(objectPool)

# Compile executable
add_executable(app src/main.cpp)

add_subdirectory(src)
target_link_libraries(app PRIVATE src)
