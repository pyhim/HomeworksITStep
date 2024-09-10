//
// Created by dgalytskyi on 9/5/24.
//

#include "headers/AbstractPet.h"

#include <iostream>

namespace Pets {
    AbstractPet::AbstractPet(const AbstractPet &other) {
        this->name = other.name;
        this->phrase = other.phrase;
        this->type = other.type;
    }

    void AbstractPet::sound() const {
        std::cout << this->phrase << std::endl;
    }

    void AbstractPet::show() const {
        std::cout << this->name << std::endl;
    }

    void AbstractPet::printType() const {
        std::cout << this->type << std::endl;
    }

} // Pets