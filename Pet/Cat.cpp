//
// Created by dgalytskyi on 9/11/24.
//

#include "headers/Cat.h"

#include <iostream>

namespace Pets {
    void Cat::sound() const {
        AbstractPet::sound();
        std::cout << "Cat wants some fish!" << std::endl;
    }
} // Pets