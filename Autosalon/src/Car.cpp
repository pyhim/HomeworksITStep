//
// Created by dgalytskyi on 10/5/24.
//

#include "../headers/Car.h"

namespace Autosalon {
    Car::Car(string name, const double price, const int year, const double volume) :
        name(std::move(name)), price(price), volume(volume), year(year) {
    }

    const string& Car::getName() const {
        return name;
    }

    double Car::getPrice() const {
        return price;
    }

    int Car::getYear() const {
        return year;
    }

    double Car::getVolume() const {
        return volume;
    }
} // Autosalon