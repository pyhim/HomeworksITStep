//
// Created by dgalytskyi on 9/2/24.
//

#ifndef UEFI_H
#define UEFI_H
#include "NonVolatileMemory.h"

namespace Laptop {
    class UEFI {
    private:
        NonVolatileMemory mem;

    public:
        UEFI();
    };
} // Laptop

#endif //UEFI_H
