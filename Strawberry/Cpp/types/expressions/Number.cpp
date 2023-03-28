//
// Created by Patrick on 3/28/2023.
//

#include "Number.h"

double Number::getValue() const {
    return value;
}

void Number::setValue(double value) {
    Number::value = value;
}

bool Number::isNull() const {
    return false;
}

bool Number::asBool() const {
    return false;
}

double Number::asDouble() const {
    return value;
}

std::string Number::asString() const {
    return std::to_string(value);
}
