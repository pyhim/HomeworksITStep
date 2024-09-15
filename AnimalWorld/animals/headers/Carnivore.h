//
// Created by dgalytskyi on 9/11/24.
//

#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <string>

#include "Herbivore.h"
#include "TemperatureSensitive.h"

namespace AnimalWorld {
    class Carnivore : protected TemperatureSensitive, public IPrintable {
        std::string name;
        int strength;
        bool exhausted = false;

        void controlExhaustion();

    protected:
        explicit Carnivore(int strength, Temperature temperature, std::string name);

    public:
        [[nodiscard]] int getStrength() const {
            return strength;
        }

        bool eat(const Herbivore &prey);

        void print() const override;
    };
} // AnimalWorld

#endif //CARNIVORE_H
