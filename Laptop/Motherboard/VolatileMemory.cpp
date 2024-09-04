//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/VolatileMemory.h"

namespace Laptop {
    VolatileMemory::VolatileMemory() : size(0), data(list<int>()) {
    }

    list<int> VolatileMemory::getData() const {
        return data;
    }
} // Laptop