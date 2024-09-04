//
// Created by dgalytskyi on 9/2/24.
//

#ifndef GPU_H
#define GPU_H
#include <string>

using std::string;

namespace Laptop {
    class GPU {
    private:
        string model;

    public:
        explicit GPU(string model);

        [[nodiscard]] string getModel() const;
    };
} // Laptop

#endif //GPU_H
