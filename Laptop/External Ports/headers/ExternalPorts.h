//
// Created by dgalytskyi on 9/2/24.
//

#ifndef EXTERNALPORTS_H
#define EXTERNALPORTS_H
#include "Power.h"
#include "SDReader.h"
#include "USB.h"

namespace Laptop {
    class ExternalPorts {
    public:
        Power power;
        SDReader reader;
        USB usb;

        ExternalPorts();
    };
} // Laptop

#endif //EXTERNALPORTS_H
