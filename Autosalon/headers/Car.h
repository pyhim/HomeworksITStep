//
// Created by dgalytskyi on 10/5/24.
//

#ifndef CAR_H
#define CAR_H

#include <string>

using std::string;

namespace Autosalon {

class Car {
    string name;
    double price;
    double volume;
    int year;

public:
    Car(string name, double price, int year, double volume);

    [[nodiscard]] const string& getName() const;

    [[nodiscard]] double getPrice() const;

    [[nodiscard]] int getYear() const;

    [[nodiscard]] double getVolume() const;
};

} // Autosalon

#endif //CAR_H
