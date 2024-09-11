//
// Created by dgalytskyi on 9/11/24.
//

#include "headers/Parrot.h"

#include <iostream>

namespace Pets {
    void Parrot::sound() const {
        AbstractPet::sound();
        std::cout << "Parrot wants some seeds!" << std::endl;
    }
} // Pets