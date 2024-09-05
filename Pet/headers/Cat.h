//
// Created by dgalytskyi on 9/5/24.
//

#ifndef CAT_H
#define CAT_H

#include "AbstractPet.h"

namespace Pets {
    class Cat final : public AbstractPet {
    public:
        Cat() : AbstractPet("Cat", "Meow :3")  {
        }
    };
} // Pets

#endif //CAT_H
