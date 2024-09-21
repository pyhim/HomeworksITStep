//
// Created by dgalytskyi on 9/21/24.
//

#ifndef IMATH_H
#define IMATH_H

namespace MyArray {

struct IMath {
    virtual int max() = 0;

    virtual int min() = 0;

    virtual float avg() = 0;

    virtual bool search(int valueToSearch) = 0;

    virtual ~IMath() = default;
};

} // MyArray

#endif //IMATH_H
