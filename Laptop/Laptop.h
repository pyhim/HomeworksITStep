//
// Created by dgalytskyi on 9/2/24.
//

#ifndef LAPTOP_H
#define LAPTOP_H
#include "External Ports/headers/ExternalPorts.h"
#include "Integrated Peripherals/headers/IntegratedPeripherals.h"
#include "Motherboard/headers/Motherboard.h"

namespace Laptop {
    class Laptop {
    private:
        Motherboard motherboard;
        ExternalPorts external_ports;
        IntegratedPeripherals integrated_peripherals;

    public:
        Laptop(Motherboard& motherboard, ExternalPorts& external_ports, IntegratedPeripherals& integrated_peripherals);

        Motherboard &getMotherboard();

        ExternalPorts &getExternalPorts();

        IntegratedPeripherals &getIntegratedPeripherals();
    };
} // Laptop

#endif //LAPTOP_H
