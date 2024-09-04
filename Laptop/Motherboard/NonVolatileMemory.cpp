//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/NonVolatileMemory.h"

#include <iostream>

using namespace std;

namespace Laptop {
    NonVolatileMemory::NonVolatileMemory(const bool enableLog) : data(list<int>()), size(0), enableLog(enableLog) {
    }

    list<int> NonVolatileMemory::getData() const {
        return data;
    }

    void NonVolatileMemory::doesExist() const {
        if (enableLog) {
            cout << "Memory exists!" << endl;
        }
    }

    NonVolatileMemory::~NonVolatileMemory() {
        if (enableLog) {
            cout << "Memory deleted!" << endl;
        }
    }
} // Laptop