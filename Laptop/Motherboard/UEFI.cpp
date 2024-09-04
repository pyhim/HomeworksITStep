//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/UEFI.h"

namespace Laptop {
    UEFI::UEFI() : mem(NonVolatileMemory(false)) {
    }
} // Laptop