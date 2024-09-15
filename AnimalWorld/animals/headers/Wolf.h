//
// Created by dgalytskyi on 9/13/24.
//

#ifndef WOLF_H
#define WOLF_H

#include "Carnivore.h"

namespace AnimalWorld {
    class Wolf final : public Carnivore {
    public:
        explicit Wolf(int strength);
    };
} // AnimalWorld

#endif //WOLF_H
