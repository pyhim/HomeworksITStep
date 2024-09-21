cmake_minimum_required(VERSION 3.30)
project(HomeworksITStep)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

add_executable(HomeworksITStep main.cpp
        Array/Array.cpp
        Array/Array.h
        Array/interfaces/IOutput.h
        Array/interfaces/IMath.h
        Array/interfaces/ISort.h
        Array/test/arrayTest.cpp
        Array/test/arrayTest.h
)


