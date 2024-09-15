//
// Created by dgalytskyi on 9/13/24.
//

#ifndef WILDEBEEST_H
#define WILDEBEEST_H

#include "Herbivore.h"

namespace AnimalWorld {
    class Wildebeest final : public Herbivore {
    public:
        explicit Wildebeest(int weight);
    };
} // AnimalWorld

#endif //WILDEBEEST_H
