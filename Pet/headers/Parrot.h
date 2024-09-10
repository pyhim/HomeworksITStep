//
// Created by dgalytskyi on 9/5/24.
//

#ifndef PARROT_H
#define PARROT_H

#include "AbstractPet.h"

namespace Pets {
    class Parrot final : public AbstractPet {
    public:
        Parrot() : AbstractPet("Parrot", "Carella", "Tweet!") {
        }
    };
} // Pets

#endif //PARROT_H
