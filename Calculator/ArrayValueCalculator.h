//
// Created by dgalytskyi on 9/18/24.
//

#ifndef ARRAYVALUECALCULATOR_H
#define ARRAYVALUECALCULATOR_H

#define DEF_SIZE 4
#include <array>
#include <string>

using namespace std;

namespace ArrayCalculator {
    class ArrayValueCalculator final {
        array<array<int, 4>, 4> numberMatrix;
        int sum = 0;

    public:
        ArrayValueCalculator();

        void doCalc(string** stringMatrix, size_t size1, size_t size2);

        [[nodiscard]] int getSum() const;

        void flush();
    };
} // ArrayCalculator

#endif //ARRAYVALUECALCULATOR_H
