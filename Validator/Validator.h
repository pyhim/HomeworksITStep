//
// Created by dgalytskyi on 9/23/24.
//

#ifndef VALIDATOR_H
#define VALIDATOR_H

#include <fstream>

using namespace std;

namespace HTML_Validator {

class Validator {
    ifstream file;

public:
    explicit Validator(const string& path);

    bool validate();
};

} // HTML_Validator

#endif //VALIDATOR_H
