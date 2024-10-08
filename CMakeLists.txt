cmake_minimum_required(VERSION 3.30)
project(HomeworksITStep)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

add_executable(HomeworksITStep main.cpp
        Autosalon/src/Car.cpp
        Autosalon/headers/Car.h
        Autosalon/src/UserInterface.cpp
        Autosalon/headers/UserInterface.h
        Autosalon/test/autosalonTest.cpp
        Autosalon/test/autosalonTest.h
)


