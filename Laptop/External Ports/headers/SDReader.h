//
// Created by dgalytskyi on 9/2/24.
//

#ifndef SDREADER_H
#define SDREADER_H
#include <string>

using std::string;

namespace Laptop {
    class SDReader {
    private:
        string controllerName;

    public:
        explicit SDReader(string controllerName);

        [[nodiscard]] string getControllerName() const;
    };
} // Laptop

#endif //SDREADER_H
