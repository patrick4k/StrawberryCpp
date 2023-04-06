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

std::shared_ptr<Value> Number::pow(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return std::make_shared<Number>(std::pow(val1->toDouble(), val2->toDouble()));
}

std::shared_ptr<Value> Number::mult(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return std::make_shared<Number>(val1->toDouble() * val2->toDouble());
}

std::shared_ptr<Value> Number::div(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    double d2 = val2->toDouble();
    if (d2 == 0) throw std::runtime_error("Divide by 0\n\t-->" + std::to_string(val1->toDouble()) + " / " + "0");
    return std::make_shared<Number>(val1->toDouble() / val2->toDouble());
}

std::shared_ptr<Value> Number::mod(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    double d2 = val2->toDouble();
    if (d2 == 0) throw std::runtime_error("Mod by 0\n\t-->" + std::to_string(val1->toDouble()) + " / " + "0");
    return std::make_shared<Number>(std::fmod(val1->toDouble(), d2));
}
