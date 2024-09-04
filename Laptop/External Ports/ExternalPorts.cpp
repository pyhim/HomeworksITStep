//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/ExternalPorts.h"

namespace Laptop {
    ExternalPorts::ExternalPorts() : power(Power("defaultController")),
                                     reader(SDReader("default")),
                                     usb(USB("Type-C")) {
    }
} // Laptop
