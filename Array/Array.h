//
// Created by dgalytskyi on 9/21/24.
//

#ifndef ARRAY_H
#define ARRAY_H

#include <array>

#include "interfaces/IMath.h"
#include "interfaces/IOutput.h"
#include "interfaces/ISort.h"

namespace MyArray {

class Array final : public IOutput, public IMath, public ISort {
    std::array<int, 10> array;

public:
    Array();

    [[nodiscard]] std::array<int, 10> getData() const {
        return array;
    }

    int max() override;

    int min() override;

    float avg() override;

    bool search(int valueToSearch) override;

    void show() override;

    void show(std::string info) override;

    void sortAsc() override;

    void sortDesc() override;

    void sortByParam(bool isAsc) override;
};

} // MyArray

#endif //ARRAY_H
