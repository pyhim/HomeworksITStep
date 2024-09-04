//
// Created by dgalytskyi on 9/2/24.
//

#include "Laptop.h"

#include <utility>

namespace Laptop {
    Laptop::Laptop(Motherboard& motherboard, ExternalPorts& external_ports,
                   IntegratedPeripherals& integrated_peripherals) : motherboard(std::move(motherboard)),
                                                                   external_ports(std::move(external_ports)),
                                                                   integrated_peripherals(std::move(
                                                                       integrated_peripherals)) {
    }

    Motherboard &Laptop::getMotherboard() {
        return motherboard;
    }

    ExternalPorts &Laptop::getExternalPorts() {
        return external_ports;
    }

    IntegratedPeripherals &Laptop::getIntegratedPeripherals() {
        return integrated_peripherals;
    }
} // Laptop
