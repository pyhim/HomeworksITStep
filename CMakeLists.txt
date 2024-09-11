cmake_minimum_required(VERSION 3.30)
project(HomeworksITStep)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

add_executable(HomeworksITStep main.cpp
        Pet/AbstractPet.cpp
        Pet/headers/AbstractPet.h
        Pet/headers/Dog.h
        Pet/headers/Cat.h
        Pet/headers/Parrot.h
        Pet/test/petTest.cpp
        Pet/test/petTest.h
        Pet/Cat.cpp
        Pet/Dog.cpp
        Pet/Parrot.cpp
)


