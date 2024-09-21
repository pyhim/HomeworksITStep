//
// Created by dgalytskyi on 9/21/24.
//

#include "Array.h"

#include <iostream>

using namespace std;

namespace MyArray {
    Array::Array() : array({10, 3, 4, 2, 4, 6, 14, 55, 10, -24}) {
    }



    int Array::max() {
        int max = array[0];

        for (const int number: this->array) {
            if (number > max) {
                max = number;
            }
        }

        return max;
    }

    int Array::min() {
        int min = array[0];

        for (const int number: this->array) {
            if (number < min) {
                min = number;
            }
        }

        return min;
    }

    float Array::avg() {
        auto avg = static_cast<float>(array[0]);

        for (const int number: this->array) {
            avg += static_cast<float>(number);
        }
        avg /= static_cast<float>(this->array.size());

        return avg;
    }

    bool Array::search(const int valueToSearch) {
        for (const int number: this->array) {
            if (number == valueToSearch) {
                return true;
            }
        }

        return false;
    }

    void Array::show() {
        string output = "{";

        for (const int number: this->array) {
            output += to_string(number);
            output += ", ";
        }
        output.replace(output.length() - 2, 1,"}");

        cout << output << endl;
    }

    void Array::show(const string info) {
        this->show();
        cout << "Info: " << info << endl;
    }

    void Array::sortAsc() {
        sort(this->array.begin(), this->array.end());
    }

    void Array::sortDesc() {
        sort(this->array.rbegin(), this->array.rend());
    }

    void Array::sortByParam(const bool isAsc) {
        if (isAsc) {
            this->sortAsc();
        } else {
            this->sortDesc();
        }
    }
} // MyArray
