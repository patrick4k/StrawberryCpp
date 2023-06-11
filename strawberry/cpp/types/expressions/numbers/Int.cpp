//
// Created by Patrick on 5/14/2023.
//

#include "Int.h"

Int::Int() : number(0) {}

Int::Int(int number) : number(number) {}

bool Int::toBool() const {
    return Value::toBool();
}

double Int::toDouble() const {
    return Value::toDouble();
}

std::string Int::toString() const {
    return Value::toString();
}

std::shared_ptr<Value> Int::pow(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return Value::pow(val1, val2);
}

std::shared_ptr<Value> Int::mult(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return Value::mult(val1, val2);
}

std::shared_ptr<Value> Int::div(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return Value::div(val1, val2);
}

std::shared_ptr<Value> Int::mod(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return Value::mod(val1, val2);
}

std::shared_ptr<Value> Int::plus(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return Value::plus(val1, val2);
}

std::shared_ptr<Value> Int::min(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return Value::min(val1, val2);
}
