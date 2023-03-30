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
        return std::stod(this->text);
    } catch (std::exception& e) {
        throw std::runtime_error("Cannot cast string: '" + text + "' to number");
    }
}

std::string String::asString() const {
    return this->text;
}

std::shared_ptr<Value> String::clone() const {
    return std::make_shared<String>(*this);
}

String::String(std::string value) : text(std::move(value)) {}
