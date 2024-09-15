//
// Created by dgalytskyi on 9/11/24.
//

#include <iostream>

#include "headers/Continent.h"

#include "../animals/headers/Bison.h"
#include "../animals/headers/Lion.h"
#include "../animals/headers/Wildebeest.h"
#include "../animals/headers/Wolf.h"

namespace AnimalWorld {
    Continent::Continent(const Temperature temperature) : temperature(temperature)  {
    }

    void Continent::createHerbivore(const EHerbivore herbivore, const int weight) {
        switch (herbivore) {
            case EHerbivore::Bison :
                this->herbivores.push_back(Bison(weight));
                break;
            case EHerbivore::Wildebeest :
                this->herbivores.push_back(Wildebeest(weight));
                break;
            default:
                break;
        }
    }

    void Continent::createCarnivore(const ECarnivore carnivore, const int strength) {
        switch (carnivore) {
            case ECarnivore::Lion :
                this->carnivores.push_back(Lion(strength));
                break;
            case ECarnivore::Wolf :
                this->carnivores.push_back(Wolf(strength));
                break;
            default:
                break;
        }
    }

    void Continent::herbivoresSatiate() {
        for (auto& herbivore : this->herbivores) {
            herbivore.eat();
        }
    }

    void Continent::carnivoresSatiate() {
        auto carnivoresIterator = this->carnivores.begin();
        auto herbivoreIterator = this->herbivores.begin();

        while (carnivoresIterator != this->carnivores.end() && herbivoreIterator != this->herbivores.end()) {
            if (carnivoresIterator->eat(*herbivoreIterator)) {
                herbivoreIterator = this->herbivores.erase(herbivoreIterator);

                ++herbivoreIterator;
                ++carnivoresIterator;

                continue;
            }

            ++carnivoresIterator;
        }
    }

    void Continent::printHerbivores() const {
        for (const auto& herbivore: this->herbivores) {
            herbivore.print();
        }

        cout.flush();
    }

    void Continent::printCarnivores() const {
        for (const auto& carnivore: this->carnivores) {
            carnivore.print();
        }

        cout.flush();
    }
} // AnimalWorld