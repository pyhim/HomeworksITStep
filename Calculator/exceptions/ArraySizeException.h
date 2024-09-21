//
// Created by dgalytskyi on 9/18/24.
//

#ifndef ARRAYSIZEEXCEPTION_H
#define ARRAYSIZEEXCEPTION_H

#include <exception>

using std::exception;

namespace ArrayCalculator {
    struct ArraySizeException final : exception {
        [[nodiscard]] const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override {
            return "Array must be exactly 4 elements";
        }
    };
} // ArrayCalculator

#endif //ARRAYSIZEEXCEPTION_H
