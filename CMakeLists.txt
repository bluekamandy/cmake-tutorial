cmake_minimum_required(VERSION 3.20)

project(MyProject)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(library)

## This enables you to include your library without the path to the library.
target_include_directories(${PROJECT_NAME} PUBLIC library)

## Link library to project.
target_link_libraries(${PROJECT_NAME} library)