//
// Created by dgalytskyi on 9/23/24.
//

#ifndef INVALIDSYNTAXEXCEPTION_H
#define INVALIDSYNTAXEXCEPTION_H

#include <exception>

namespace HTML_Validator {

class InvalidSyntaxException final : public std::exception {
public:
    [[nodiscard]] const char* what() const noexcept override {
        return "Wrong syntax";
    }
};

} // HTML_Validator

#endif //INVALIDSYNTAXEXCEPTION_H
