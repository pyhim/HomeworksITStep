//
// Created by dgalytskyi on 9/2/24.
//

#ifndef POWER_H
#define POWER_H
#include <string>

using std::string;

namespace Laptop {
    class Power {
    private:
        string powerController;

    public:
        explicit Power(string powerController);

        [[nodiscard]] string getPowerController() const;
    };
} // Laptop

#endif //POWER_H
