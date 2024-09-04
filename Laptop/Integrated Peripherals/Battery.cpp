//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/Battery.h"

namespace Laptop {
    Battery::Battery(const double chargePercentage) {
        this->chargePercentage = chargePercentage;
    }

    double Battery::getChargePercentage() const {
        return this->chargePercentage;
    }

    void Battery::addChargePercentage(const double chargePercentage) {
        this->chargePercentage += chargePercentage;
    }
} // Laptop