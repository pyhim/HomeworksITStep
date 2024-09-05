//
// Created by dgalytskyi on 9/5/24.
//

#include "petTest.h"
#include "../headers/Cat.h"
#include "../headers/Dog.h"
#include "../headers/Parrot.h"

namespace Pets {
    bool petTest() {
        Cat cat;
        Dog dog;
        Parrot parrot;

        cat.say();
        dog.say();
        parrot.say();

        return true;
    }
} // Pets
