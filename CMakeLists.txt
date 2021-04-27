cmake_minimum_required(VERSION 3.20)

project(MyProject)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(library)

add_subdirectory(external/glfw)

## This enables you to include your library without the path to the library. This is for header files.
target_include_directories(${PROJECT_NAME} 
    PUBLIC library
    PUBLIC external/glfw/include
)

## This is for the actual source of your libraries, as opposed to header files.
target_link_directories(${PROJECT_NAME}
    PRIVATE external/glfw/src
)

## Link library to project.
target_link_libraries(${PROJECT_NAME} library)