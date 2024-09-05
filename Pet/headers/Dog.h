//
// Created by dgalytskyi on 9/5/24.
//

#ifndef DOG_H
#define DOG_H

#include <utility>

#include "AbstractPet.h"

namespace Pets {
    class Dog : public AbstractPet {
    public:
        Dog(string name, string phrase) : AbstractPet(std::move(name), std::move(phrase)) {
        }

        void say() const override;
    };
} // Pets

#endif //DOG_H
