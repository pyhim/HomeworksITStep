//
// Created by dgalytskyi on 9/2/24.
//

#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H

#include "GPU.h"
#include "NonVolatileMemory.h"
#include "Processor.h"
#include "SoundChip.h"
#include "UEFI.h"
#include "VolatileMemory.h"

namespace Laptop {
    class Motherboard {
    public:
        GPU gpu;
        NonVolatileMemory *nonVolatileMemory;
        Processor processor;
        SoundChip soundChip;
        UEFI uefi;
        VolatileMemory volatileMemory;

        explicit Motherboard(NonVolatileMemory *ptr);

        Motherboard(Motherboard &&other) noexcept;

        ~Motherboard();
    };
} // Laptop

#endif //MOTHERBOARD_H
