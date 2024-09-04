//
// Created by dgalytskyi on 9/2/24.
//

#include <utility>

#include "headers/Power.h"

namespace Laptop {
    Power::Power(string powerController) {
        this->powerController = std::move(powerController);
    }

    string Power::getPowerController() const {
        return this->powerController;
    }
} // Laptop