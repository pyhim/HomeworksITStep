//
// Created by dgalytskyi on 9/11/24.
//

#ifndef CONTINENT_H
#define CONTINENT_H

#include <list>

#include "../../animals/headers/Carnivore.h"
#include "../../animals/headers/Herbivore.h"
#include "../../animals/orders/ECarnivore.h"
#include "../../animals/orders/EHerbivore.h"

using namespace std;

namespace AnimalWorld {
    class Continent {
    protected:
        list<Herbivore> herbivores;
        list<Carnivore> carnivores;
        Temperature temperature;

        explicit Continent(Temperature temperature);

    public:
        void createHerbivore(EHerbivore herbivore, int weight);

        void createCarnivore(ECarnivore carnivore, int strength);

        void herbivoresSatiate();

        void carnivoresSatiate();

        void printHerbivores() const;

        void printCarnivores() const;
    };
} // AnimalWorld

#endif //CONTINENT_H
