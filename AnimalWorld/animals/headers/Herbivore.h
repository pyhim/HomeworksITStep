//
// Created by dgalytskyi on 9/11/24.
//

#ifndef HERBIVORE_H
#define HERBIVORE_H

#include <string>

#include "IPrintable.h"
#include "TemperatureSensitive.h"

namespace AnimalWorld {
    class Herbivore : protected TemperatureSensitive, public IPrintable {
        std::string name;
        int weight;

    protected:
        explicit Herbivore(int weight, Temperature temperature, std::string name);

    public:
        [[nodiscard]] int getWeight() const {
            return weight;
        }

        void eat();

        void print() const override;
    };
} // AnimalWorld

#endif //HERBIVORE_H
