//
// Created by dgalytskyi on 9/2/24.
//

#ifndef TOUCHPAD_H
#define TOUCHPAD_H
#include <string>

using std::string;

namespace Laptop {
    class Touchpad {
    private:
        string sensorName;

    public:
        explicit Touchpad(string sensorName);

        string getSensorName();
    };
} // Laptop

#endif //TOUCHPAD_H
