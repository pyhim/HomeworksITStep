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
        string type;
        string phrase;

    protected:
        AbstractPet(string name, string type, string phrase) :
            name(std::move(name)),
            type(std::move(type)),
            phrase(std::move(phrase)) {
        }

    public:
        AbstractPet(const AbstractPet &other);

        virtual void sound() const;

        void show() const;

        void printType() const;
    };
} // Pets

#endif //ABSTRACTPET_H
