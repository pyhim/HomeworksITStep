//
// Created by dgalytskyi on 9/5/24.
//

#ifndef DOG_H
#define DOG_H

#include "AbstractPet.h"

namespace Pets {
    class Dog : public AbstractPet {
    public:
        Dog() : AbstractPet("Dog", "Bark!") {
        }
    };
} // Pets

#endif //DOG_H
