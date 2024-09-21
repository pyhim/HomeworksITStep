//
// Created by dgalytskyi on 9/19/24.
//

#ifndef ARRAYDATAEXCEPTION_H
#define ARRAYDATAEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

namespace ArrayCalculator {
    class ArrayDataException final : exception {
        string cell;

    public:
        explicit ArrayDataException(const string &cell) {
            this->cell = cell;
        }

        [[nodiscard]] string getCell() const {
            return cell;
        }

        [[nodiscard]] const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override {
            return "Unable to transform the data in cell: ";
        }
    };
} // ArrayCalculator

#endif // ARRAYDATAEXCEPTION_H
