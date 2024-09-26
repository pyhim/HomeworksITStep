cmake_minimum_required(VERSION 3.30)
project(HomeworksITStep)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

add_executable(HomeworksITStep main.cpp
        Validator/test/validatorTest.cpp
        Validator/test/validatorTest.h
        Validator/Validator.cpp
        Validator/Validator.h
        Validator/exceptions/InvalidSyntaxException.h
        Validator/exceptions/FileNotFoundException.h
        Exercises/exercises.cpp
        Exercises/exercises.h
)


