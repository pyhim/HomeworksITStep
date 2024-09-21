//
// Created by dgalytskyi on 9/18/24.
//

#include <stdexcept>
#include <iostream>

#include "ArrayValueCalculator.h"

#include "exceptions/ArrayDataException.h"
#include "exceptions/ArraySizeException.h"

namespace ArrayCalculator {

    ArrayValueCalculator::ArrayValueCalculator() : numberMatrix(array<array<int, 4>, 4>{}) {
        for (int i = 0; i < 4; i++) {
            this->numberMatrix[i].fill(0);
        }
    }

    void ArrayValueCalculator::doCalc(string** stringMatrix, const size_t size1, const size_t size2) {
        if (size1 != DEF_SIZE) throw ArraySizeException();

        if (size2 != DEF_SIZE) throw ArraySizeException();

        size_t i = 0, j = 0;
        try {
            for (i = 0; i < DEF_SIZE; i++) {
                for (j = 0; j < DEF_SIZE; j++) {
                    // std::cout << stringMatrix[i][j] << '\n';
                    this->numberMatrix[i][j] = stoi(stringMatrix[i][j]);
                    this->sum += this->numberMatrix[i][j];
                }
            }
        } catch (invalid_argument&) {
            const auto cell = format("[{}][{}]", i, j);
            throw ArrayDataException(cell);
        }
    }

    int ArrayValueCalculator::getSum() const {
        return this->sum;
    }

    void ArrayValueCalculator::flush() {
        this->numberMatrix = array<array<int, 4>, 4>{};
        this->sum = 0;
    }
} // ArrayCalculator