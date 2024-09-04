cmake_minimum_required(VERSION 3.30)
project(HomeworksITStep)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

add_executable(HomeworksITStep main.cpp
        "Laptop/Integrated Peripherals/Touchpad.cpp"
        "Laptop/Integrated Peripherals/headers/Touchpad.h"
        "Laptop/Integrated Peripherals/Keyboard.cpp"
        "Laptop/Integrated Peripherals/headers/Keyboard.h"
        "Laptop/Integrated Peripherals/Screen.cpp"
        "Laptop/Integrated Peripherals/headers/Screen.h"
        "Laptop/External Ports/USB.cpp"
        "Laptop/External Ports/headers/USB.h"
        "Laptop/External Ports/Power.cpp"
        "Laptop/External Ports/headers/Power.h"
        "Laptop/External Ports/SDReader.cpp"
        "Laptop/External Ports/headers/SDReader.h"
        Laptop/Motherboard/Processor.cpp
        Laptop/Motherboard/headers/Processor.h
        Laptop/Motherboard/GPU.cpp
        Laptop/Motherboard/headers/GPU.h
        "Laptop/Integrated Peripherals/Battery.cpp"
        "Laptop/Integrated Peripherals/headers/Battery.h"
        Laptop/Motherboard/UEFI.cpp
        Laptop/Motherboard/headers/UEFI.h
        Laptop/Motherboard/SoundChip.cpp
        Laptop/Motherboard/headers/SoundChip.h
        Laptop/Motherboard/VolatileMemory.cpp
        Laptop/Motherboard/headers/VolatileMemory.h
        Laptop/Motherboard/NonVolatileMemory.cpp
        Laptop/Motherboard/headers/NonVolatileMemory.h
        Laptop/Laptop.cpp
        Laptop/Laptop.h
        "Laptop/External Ports/ExternalPorts.cpp"
        "Laptop/External Ports/headers/ExternalPorts.h"
        "Laptop/Integrated Peripherals/IntegratedPeripherals.cpp"
        "Laptop/Integrated Peripherals/headers/IntegratedPeripherals.h"
        Laptop/Motherboard/Motherboard.cpp
        Laptop/Motherboard/headers/Motherboard.h
        Laptop/Tests/laptopTest.cpp
        Laptop/Tests/laptopTest.h
)


