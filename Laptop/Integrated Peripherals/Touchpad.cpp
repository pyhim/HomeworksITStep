//
// Created by dgalytskyi on 9/2/24.
//

#include <utility>

#include "headers/Touchpad.h"

namespace Laptop {
    Touchpad::Touchpad(string sensorName) {
        this->sensorName = std::move(sensorName);
    }

    string Touchpad::getSensorName() {
        return this->sensorName;
    }
} // Laptop