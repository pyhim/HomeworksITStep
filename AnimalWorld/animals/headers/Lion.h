//
// Created by dgalytskyi on 9/13/24.
//

#ifndef LION_H
#define LION_H

#include "Carnivore.h"

namespace AnimalWorld {
    class Lion final : public Carnivore {
    public:
        explicit Lion(int strength);
    };
} // AnimalWorld

#endif //LION_H
