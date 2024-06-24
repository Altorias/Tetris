cmake_minimum_required(VERSION 3.7)
project(Tetris)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCE_LIST "src/*.h" "src/*.cpp")


add_executable(Tetris src/main.cpp
        src/terminal.cpp
        src/terminal.h
        src/terminal.cpp)

