//
// Created by dgalytskyi on 9/13/24.
//

#ifndef BISON_H
#define BISON_H

#include "Herbivore.h"

namespace AnimalWorld {
    class Bison final : public Herbivore {
    public:
        explicit Bison(int weight);
    };
} // AnimalWorld

#endif //BISON_H
