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

Value::~Value() = default;
