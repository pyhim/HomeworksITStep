//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/IntegratedPeripherals.h"

namespace Laptop {
    IntegratedPeripherals::IntegratedPeripherals() : battery(Battery(100.0)),
                                                     keyboard(Keyboard()),
                                                     screen(Screen(1920, 1080)),
                                                     touchpad(Touchpad("default")) {
    }
} // Laptop
