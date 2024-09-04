//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/Keyboard.h"

#include <iostream>

namespace Laptop {
    Keyboard::Keyboard() : keys{'Q', 'W', 'E', 'R', 'T', 'Y'} {
    }

    void Keyboard::input(const char key) {
        for (const char c : keys) {
            if (c == key) {
                std::cout << c << " has been pressed" << std::endl;
                return;
            } else {
                std::cout << "Error" << std::endl;
            }
        }
    }

    char *Keyboard::getKeys() {
        return keys;
    }
} // Laptop
