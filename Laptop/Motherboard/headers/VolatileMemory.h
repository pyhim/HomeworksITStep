//
// Created by dgalytskyi on 9/2/24.
//

#ifndef VOLATILEMEMORY_H
#define VOLATILEMEMORY_H
#include <list>

using std::list;

namespace Laptop {
    class VolatileMemory {
    private:
        size_t size;
        list<int> data;

    public:
        VolatileMemory();

        [[nodiscard]] list<int> getData() const;
    };
} // Laptop

#endif //VOLATILEMEMORY_H
