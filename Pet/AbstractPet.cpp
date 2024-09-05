//
// Created by dgalytskyi on 9/5/24.
//

#include "headers/AbstractPet.h"

#include <iostream>

namespace Pets {
    void AbstractPet::say() const {
        std::cout << this->name << " says: " << this->phrase << std::endl;
    }
} // Pets