//
// Created by Patrick on 3/28/2023.
//

#include <cmath>
#include "Number.h"

Number::Number(double value) : value(value) {}

Number::Number(const std::string& value) : value(std::stod(value)) {}

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
    int asInt = (int) this->value;
    if (asInt == this->value)
        return std::to_string(asInt);
    return std::to_string(value);
}
