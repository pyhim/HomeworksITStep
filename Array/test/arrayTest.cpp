//
// Created by dgalytskyi on 9/21/24.
//

#include <iostream>

#include "arrayTest.h"
#include "../Array.h"

using namespace std;

namespace MyArray {
    void runTest() {
        Array array;

        array.show();
        array.show("success");

        cout << array.avg() << endl;
        cout << array.max() << endl;
        cout << array.min() << endl;
        cout << array.search(5) << endl;

        array.sortAsc();
        array.show();
        array.sortDesc();
        array.show();
        array.sortByParam(true);
        array.show();
    }
} // MyArray
