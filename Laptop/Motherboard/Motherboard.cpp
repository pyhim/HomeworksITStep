//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/Motherboard.h"

#include <iostream>

using namespace std;

namespace Laptop {
    Motherboard::Motherboard(NonVolatileMemory *ptr) : gpu(GPU("NVIDIA")), nonVolatileMemory(ptr),
                                                       processor(Processor()),
                                                       soundChip(SoundChip("Realtek")), uefi(UEFI()),
                                                       volatileMemory(VolatileMemory()) {
    }

    Motherboard::Motherboard(Motherboard &&other) noexcept : gpu(other.gpu), processor(other.processor),
                                                             soundChip(other.soundChip),
                                                             uefi(other.uefi), volatileMemory(other.volatileMemory) {
        this->nonVolatileMemory = other.nonVolatileMemory;
        other.nonVolatileMemory = nullptr;
    }

    Motherboard::~Motherboard() {
        cout << "Motherboard deleted!" << endl;
    }
} // Laptop
