//
// Created by dgalytskyi on 9/11/24.
//

#include "../headers/Herbivore.h"

#include <iostream>

namespace AnimalWorld {
    Herbivore::Herbivore(const int weight, const Temperature temperature,
                         std::string name) : TemperatureSensitive(temperature),
                                             name(std::move(name)),
                                             weight(weight) {
    }

    void Herbivore::eat() {
        this->weight += 10;
    }

    void Herbivore::print() const {
        std::cout << this->name << " (" << "Weight: " << this->weight << ")\n";
    }
} // AnimalWorld
