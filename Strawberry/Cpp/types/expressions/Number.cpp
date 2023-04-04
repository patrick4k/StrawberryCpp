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

bool Number::toBool() const {
    return false;
}

double Number::toDouble() const {
    return number;
}

std::string Number::toString() const {
    int asInt = (int) this->number;
    if (asInt == this->number)
        return std::to_string(asInt);
    return std::to_string(number);
}

std::string Number::typeName() const {
    return "number";
}

int Number::operatorPriority() const {
    return 9;
}

std::shared_ptr<Value> Number::plus(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return std::make_shared<Number>(val1->toDouble() + val2->toDouble());
}

std::shared_ptr<Value> Number::min(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return std::make_shared<Number>(val1->toDouble() - val2->toDouble());
}
