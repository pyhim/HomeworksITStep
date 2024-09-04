//
// Created by dgalytskyi on 9/2/24.
//

#ifndef USB_H
#define USB_H
#include <string>

using std::string;

namespace Laptop {
    class USB {
    private:
        string standard;

    public:
        explicit USB(string standard);

        [[nodiscard]] string getStandard() const;
    };
} // Laptop

#endif //USB_H
