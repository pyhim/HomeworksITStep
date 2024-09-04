//
// Created by dgalytskyi on 9/2/24.
//

#include "headers/SoundChip.h"

#include <iostream>

using namespace std;

namespace Laptop {
    SoundChip::SoundChip(string modelName) : modelName(std::move(modelName)) {
    }

    void SoundChip::playSound(const string &sound) const {
        cout << "Playing sound: " << sound << endl
        << "From: " << this->modelName << endl;
    }
} // Laptop