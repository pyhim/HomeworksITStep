//
// Created by dgalytskyi on 9/13/24.
//

#ifndef TEMPERATURESENSITIVE_H
#define TEMPERATURESENSITIVE_H

#include "../../continents/headers/Temperature.h"

namespace AnimalWorld {

class TemperatureSensitive {
protected:
    Temperature habitatTemperature;

    explicit TemperatureSensitive(const Temperature habitatTemperature) : habitatTemperature(habitatTemperature) {
    }

public:
    [[nodiscard]] Temperature getHabitatTemperature() const {
        return habitatTemperature;
    }
};

} // AnimalWorld

#endif //TEMPERATURESENSITIVE_H
