//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/Screen.h"

namespace Laptop {
    Screen::Screen(const int width, const int height) {
        this->width = width;
        this->height = height;
    }

    int Screen::getWidth() const {
        return this->width;
    }

    int Screen::getHeight() const {
        return this->height;
    }
} // Laptop