//
// Created by dgalytskyi on 9/2/24.
//

#include <utility>

#include "headers/SDReader.h"

namespace Laptop {
    SDReader::SDReader(string controllerName) {
        this->controllerName = std::move(controllerName);
    }

    string SDReader::getControllerName() const {
        return this->controllerName;
    }
} // Laptop