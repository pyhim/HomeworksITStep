//
// Created by dgalytskyi on 9/18/24.
//

#include "calcTest.h"

#include <ctime>
#include <format>
#include <iostream>

#include "../ArrayValueCalculator.h"
#include "../exceptions/ArrayDataException.h"
#include "../exceptions/ArraySizeException.h"

using namespace std;

namespace ArrayCalculator {
    void runTest() {
        auto loc = locale("en_US.UTF-8");

        srand(time(nullptr));

        ArrayValueCalculator calculator;
        // string stringMatrix1[4][4], stringMatrix2[4][4], stringMatrix3[4][3];
        auto **stringMatrix1 = new string*[4];
        auto **stringMatrix2 = new string*[4];
        auto **stringMatrix3 = new string*[4];

        for (int i = 0; i < 4; i++) {
            stringMatrix1[i] = new string[4];
            stringMatrix2[i] = new string[4];

            for (int j = 0; j < 4; j++) {
                stringMatrix1[i][j] = format("{}", rand() % 10);
                stringMatrix2[i][j] = format("{}", rand() % 10);
            }
        }
        stringMatrix2[2][3] = "text"; // Intentional

        for (int i = 0; i < 4; i++) {
            stringMatrix3[i] = new string[3];
            for (int j = 0; j < 3; j++) {
                stringMatrix3[i][j] = format("{}", rand() % 10);
            }
        }

        const array stringMatrices = {stringMatrix1, stringMatrix2};
        for (int i = 0; i < 2; ++i) {
            try {
                calculator.doCalc(stringMatrices[i], 4, 4);
                cout << "Sum: " << calculator.getSum();
            } catch (ArrayDataException& e) {
                cout << e.what() << e.getCell() << endl;
                calculator.flush();
            }
            cout << endl;
        }

        try {
            calculator.doCalc(stringMatrix3, 4, 3);
        } catch (ArraySizeException& e) {
            cout << e.what() << endl;
        }

        delete[] stringMatrix1;
        delete[] stringMatrix2;
        delete[] stringMatrix3;
    }
} // ArrayCalculator
