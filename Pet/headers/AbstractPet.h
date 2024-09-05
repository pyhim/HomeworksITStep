//
// Created by dgalytskyi on 9/5/24.
//

#ifndef ABSTRACTPET_H
#define ABSTRACTPET_H

#include <string>
#include <utility>

using std::string;

namespace Pets {
    class AbstractPet {
        string name;
        string phrase;

    protected:
        explicit AbstractPet(string name, string phrase) : name(std::move(name)), phrase(std::move(phrase)) {
        }

        ~AbstractPet() = default;

    public:
        void say() const;
    };
} // Pets

#endif //ABSTRACTPET_H
