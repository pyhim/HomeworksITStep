//
// Created by dgalytskyi on 9/5/24.
//

#ifndef CAT_H
#define CAT_H

#include <utility>

#include "AbstractPet.h"

namespace Pets {
    class Cat final : public AbstractPet {
    public:
        Cat(string name, string phrase) : AbstractPet(std::move(name), std::move(phrase))  {
        }

        void say() const override;
    };
} // Pets

#endif //CAT_H
