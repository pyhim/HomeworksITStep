//
// Created by dgalytskyi on 9/5/24.
//

#include "petTest.h"
#include "../headers/Cat.h"
#include "../headers/Dog.h"
#include "../headers/Parrot.h"

namespace Pets {
    bool petTest() {
        Cat cat("Cat", "Meow :3");
        Dog dog("Dog", "Bark!");
        Parrot parrot("Parrot", "Tweet!");

        cat.say();
        dog.say();
        parrot.say();

        return true;
    }
} // Pets
