//
// Created by dgalytskyi on 9/2/24.
//

#ifndef BATTERY_H
#define BATTERY_H

namespace Laptop {
    class Battery {
    private:
        double chargePercentage;

    public:
        explicit Battery(double chargePercentage);

        [[nodiscard]] double getChargePercentage() const;

        void addChargePercentage(double chargePercentage);
    };
} // Laptop

#endif //BATTERY_H
