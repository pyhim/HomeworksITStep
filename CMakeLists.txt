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
        AnimalWorld/animals/orders/Herbivore.cpp
        AnimalWorld/animals/headers/Herbivore.h
        AnimalWorld/animals/orders/Carnivore.cpp
        AnimalWorld/animals/headers/Carnivore.h
        AnimalWorld/continents/Continent.cpp
        AnimalWorld/continents/headers/Continent.h
        AnimalWorld/continents/Africa.cpp
        AnimalWorld/continents/headers/Africa.h
        AnimalWorld/continents/NorthAmerica.cpp
        AnimalWorld/continents/headers/NorthAmerica.h
        AnimalWorld/client/Client.cpp
        AnimalWorld/client/Client.h
        AnimalWorld/animals/Wildebeest.cpp
        AnimalWorld/animals/headers/Wildebeest.h
        AnimalWorld/animals/Bison.cpp
        AnimalWorld/animals/headers/Bison.h
        AnimalWorld/animals/Lion.cpp
        AnimalWorld/animals/headers/Lion.h
        AnimalWorld/animals/Wolf.cpp
        AnimalWorld/animals/headers/Wolf.h
        AnimalWorld/animals/headers/TemperatureSensitive.h
        AnimalWorld/continents/headers/Temperature.h
        AnimalWorld/animals/orders/ECarnivore.h
        AnimalWorld/animals/orders/EHerbivore.h
        AnimalWorld/animals/headers/IPrintable.h
)


