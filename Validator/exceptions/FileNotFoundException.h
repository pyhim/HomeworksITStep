//
// Created by dgalytskyi on 9/24/24.
//

#ifndef FILENOTFOUNDEXCEPTION_H
#define FILENOTFOUNDEXCEPTION_H

#include <exception>

namespace HTML_Validator {

class FileNotFoundException final : public std::exception {
public:
    [[nodiscard]] const char* what() const noexcept override {
        return "File not found";
    }
};

} // HTML_Validator

#endif //FILENOTFOUNDEXCEPTION_H
