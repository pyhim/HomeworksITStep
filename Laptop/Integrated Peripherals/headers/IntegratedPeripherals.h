//
// Created by dgalytskyi on 9/2/24.
//

#ifndef INTEGRATEDPERIPHERALS_H
#define INTEGRATEDPERIPHERALS_H
#include "Battery.h"
#include "Keyboard.h"
#include "Screen.h"
#include "Touchpad.h"

namespace Laptop {
    class IntegratedPeripherals {
    public:
        Battery battery;
        Keyboard keyboard;
        Screen screen;
        Touchpad touchpad;

        IntegratedPeripherals();
    };
} // Laptop

#endif //INTEGRATEDPERIPHERALS_H
