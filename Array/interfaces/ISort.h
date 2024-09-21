//
// Created by dgalytskyi on 9/21/24.
//

#ifndef ISORT_H
#define ISORT_H

namespace MyArray {

struct ISort {
    virtual void sortAsc() = 0;

    virtual void sortDesc() = 0;

    virtual void sortByParam(bool isAsc) = 0;
};

} // MyArray

#endif //ISORT_H
