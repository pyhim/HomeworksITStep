//
// Created by dgalytskyi on 9/2/24.
//

#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <string>

using std::string;

namespace Laptop {
    class Processor {
    private:
        const string cores[4];

    public:
        Processor();

        [[nodiscard]] const string *getCores() const;
    };
} // Laptop

#endif //PROCESSOR_H
