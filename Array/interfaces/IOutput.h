//
// Created by dgalytskyi on 9/21/24.
//

#ifndef IOUTPUT_H
#define IOUTPUT_H

#include <string>

namespace MyArray {

struct IOutput {
    virtual void show() = 0;

    virtual void show(std::string info) = 0;

    virtual ~IOutput() = default;
};

} // MyArray

#endif //IOUTPUT_H
