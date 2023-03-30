//
// Created by Patrick on 3/28/2023.
//

#include <cmath>
#include "Number.h"

Number::Number(double value) : number(value) {}

Number::Number(const std::string& value) : number(std::stod(value)) {}

bool Number::isNull() const {
    return false;
}

bool Number::asBool() const {
    return false;
}

double Number::asDouble() const {
    return number;
}

std::string Number::asString() const {
    int asInt = (int) this->number;
    if (asInt == this->number)
        return std::to_string(asInt);
    return std::to_string(number);
}
