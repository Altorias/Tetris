cmake_minimum_required(VERSION 3.7)
project(Tetris)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCE_LIST "src/*.h" "src/*.cpp")


add_executable(Tetris src/main.cpp
        src/CTerminalControl.cpp
        src/CTerminalControl.h
        src/CTerminalControl.cpp
        src/CUtils.cpp
        src/CUtils.h
        src/CDraw.cpp
        src/CDraw.h
        src/CGame.cpp
        src/CGame.h
        src/CControl.cpp
        src/CControl.h
        src/SelfDefine.h
        src/CTetroMino.cpp
        src/CTetroMino.h)

