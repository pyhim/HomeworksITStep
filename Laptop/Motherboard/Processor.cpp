//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/Processor.h"

namespace Laptop {
    Processor::Processor() : cores{"core1", "core2", "core3", "core4"} {
    }

    const string *Processor::getCores() const {
        return this->cores;
    }
} // Laptop