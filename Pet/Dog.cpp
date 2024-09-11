//
// Created by dgalytskyi on 9/11/24.
//

#include "headers/Dog.h"

#include <iostream>

namespace Pets {
    void Dog::sound() const {
        AbstractPet::sound();
        std::cout << "Dog wants some cuddles!" << std::endl;
    }
} // Pets
