//
// Created by Patrick on 3/29/2023.
//

#include "String.h"

#include <utility>

bool String::isNull() const {
    return false;
}

bool String::asBool() const {
    return true;
}

double String::asDouble() const {
    try {
        return std::stod(this->value);
    } catch (std::exception& e) {
        throw std::runtime_error("Cannot cast string: '" + value + "' to number");
    }
}

std::string String::asString() const {
    return this->value;
}

std::shared_ptr<Value> String::clone() const {
    return std::make_shared<String>(*this);
}

String::String(std::string value) : value(std::move(value)) {}
