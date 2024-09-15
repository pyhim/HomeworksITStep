//
// Created by dgalytskyi on 9/14/24.
//

#ifndef IPRINTABLE_H
#define IPRINTABLE_H

#include <ostream>

using std::ostream;

namespace AnimalWorld {
    class IPrintable {
    public:
        virtual ~IPrintable() = default;

        virtual void print() const = 0;
    };
}

#endif //IPRINTABLE_H
