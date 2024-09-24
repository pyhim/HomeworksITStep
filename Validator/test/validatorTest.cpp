//
// Created by dgalytskyi on 9/23/24.
//

#include <iostream>

#include "validatorTest.h"
#include "../Validator.h"
#include "../exceptions/FileNotFoundException.h"

namespace HTML_Validator {
    void runTest() {
        string path;

        std::cout << "Enter the path to the HTML file: ";
        std::cin >> path;

        try {
            Validator validator(path);
            std::cerr << validator.validate() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }
} // HTML_Validator
