//
// Created by dgalytskyi on 9/11/24.
//

#include "../headers/Carnivore.h"

#include <iostream>

namespace AnimalWorld {
    Carnivore::Carnivore(const int strength, const Temperature temperature,
                         std::string name) : TemperatureSensitive(temperature),
                                             name(std::move(name)),
                                             strength(strength) {
        this->controlExhaustion();
    }

    void Carnivore::controlExhaustion() {
        this->exhausted = strength <= 0;
    }

    bool Carnivore::eat(const Herbivore &prey) {
        if (this->exhausted) return false;

        if (this->strength > prey.getWeight()) {
            this->strength += 10;
        } else {
            this->strength -= 10;
        }

        return true;
    }

    void Carnivore::print() const {
        std::cout << this->name << " (" << "Strength: " << this->strength
        << " Exhausted: " << this->exhausted << ")\n";
    }
} // AnimalWorld
