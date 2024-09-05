//
// Created by dgalytskyi on 9/5/24.
//

#ifndef PARROT_H
#define PARROT_H

#include "AbstractPet.h"

namespace Pets {
    class Parrot : public AbstractPet {
    public:
        Parrot(string name, string phrase) : AbstractPet(std::move(name), std::move(phrase)) {
        }


        void say() const override;
    };
} // Pets

#endif //PARROT_H
