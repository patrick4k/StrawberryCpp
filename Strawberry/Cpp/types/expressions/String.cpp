//
// Created by Patrick on 3/29/2023.
//

#include "String.h"

#include <utility>

bool String::isNull() const {
    return false;
}

bool String::toBool() const {
    return true;
}

double String::toDouble() const {
    try {
        return std::stod(this->text);
    } catch (std::exception& e) {
        throw std::runtime_error("Cannot cast string: '" + text + "' to number");
    }
}

std::string String::toString() const {
    return this->text;
}

String::String(std::string value) : text(std::move(value)) {}
