//
// Created by dgalytskyi on 9/23/24.
//

#include <climits>

#include "Validator.h"

#include "exceptions/FileNotFoundException.h"
#include "exceptions/InvalidSyntaxException.h"

namespace HTML_Validator {
    Validator::Validator(const string& path) : file(path) {
        if (!this->file.is_open()) {
            throw FileNotFoundException();
        }
    }

    bool Validator::validate() {
        int unclosedBrackets = 0;
        char c;

        while (this->file.get(c)) {
            if (c == '<') unclosedBrackets++;

            else if (c == '>') unclosedBrackets--;
        }
        this->file.close();

        if (unclosedBrackets != 0) {
            throw InvalidSyntaxException();
        }

        return true;
    }
} // HTML_Validator
