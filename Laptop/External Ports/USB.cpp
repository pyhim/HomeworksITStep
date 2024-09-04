//
// Created by dgalytskyi on 9/2/24.
//

#include <utility>

#include "headers/USB.h"

namespace Laptop {
    USB::USB(string standard) {
        this->standard = std::move(standard);
    }

    string USB::getStandard() const {
        return this->standard;
    }
} // Laptop