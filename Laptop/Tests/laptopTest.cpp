//
// Created by dgalytskyi on 9/4/24.
//

#include "laptopTest.h"
#include "../Laptop.h"

namespace Laptop {
    bool runTest() {
        NonVolatileMemory harddisk(true);
        Motherboard motherboard(&harddisk);
        ExternalPorts external_ports;
        IntegratedPeripherals integrated_peripherals;
        auto *laptop = new Laptop(motherboard, external_ports, integrated_peripherals);

        laptop->getMotherboard().nonVolatileMemory->doesExist();
        delete laptop;
        harddisk.doesExist();

        return true;
    }
} // Laptop
