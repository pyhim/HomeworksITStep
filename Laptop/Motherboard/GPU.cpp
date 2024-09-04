//
// Created by dgalytskyi on 9/2/24.
//

#include <utility>

#include "headers/GPU.h"

namespace Laptop {
    GPU::GPU(string model) : model(std::move(model)) {
    }

    string GPU::getModel() const {
        return model;
    }
} // Laptop
