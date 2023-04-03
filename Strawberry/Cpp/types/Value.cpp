//
// Created by Patrick Kennedy on 3/11/23.
//

#include "Value.h"

bool Value::isNull() const {
    return true;
}

bool Value::toBool() const {
    return !this->isNull();
}

double Value::toDouble() const {
    return 0;
}

std::string Value::toString() const {
    return "null";
}

int Value::operatorPriority() const {
    return 0;
}

std::shared_ptr<Value> Value::add(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    throw std::runtime_error("Addition not implemented for this");
}

Value::~Value() = default;
