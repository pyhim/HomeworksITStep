//
// Created by dgalytskyi on 9/2/24.
//

#ifndef NONVOLATILEMEMORY_H
#define NONVOLATILEMEMORY_H
#include <list>

using std::list;

namespace Laptop {
    class NonVolatileMemory {
    private:
        list<int> data;
        size_t size;
        bool enableLog;

    public:
        explicit NonVolatileMemory(bool enableLog);

        [[nodiscard]] list<int> getData() const;

        void doesExist() const;

        ~NonVolatileMemory();
    };
} // Laptop

#endif //NONVOLATILEMEMORY_H
