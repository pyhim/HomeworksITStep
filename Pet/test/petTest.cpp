//
// Created by dgalytskyi on 9/5/24.
//

#include "petTest.h"

#include <iostream>

#include "../headers/AbstractPet.h"
#include "../headers/Cat.h"
#include "../headers/Dog.h"
#include "../headers/Parrot.h"

using namespace std;

namespace Pets {
    bool petTest() {
        AbstractPet* pets[3]{new Cat(), new Dog(), new Parrot()};

        for (const auto &pet : pets) {
            pet->show();
            pet->sound();
            pet->printType();
            cout << endl;
        }

        return true;
    }
} // Pets
