cmake_minimum_required(VERSION 3.30)
project(HomeworksITStep)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

add_executable(HomeworksITStep main.cpp
        Calculator/test/calcTest.cpp
        Calculator/test/calcTest.h
        Calculator/ArrayValueCalculator.cpp
        Calculator/ArrayValueCalculator.h
        Calculator/exceptions/ArraySizeException.h
        Calculator/exceptions/ArrayDataException.h

)


