//
// Created by Patrick on 3/28/2023.
//

#include "Lambda.h"

int Lambda::operatorPriority() const {
    throw std::runtime_error("Cannot use lambda in operator expressions");
}

bool Lambda::toBool() const {
    throw std::runtime_error("Cannot use lambda in bool context");
}

double Lambda::toDouble() const {
    throw std::runtime_error("Cannot use lambda in numeric context");
}

bool Lambda::isNull() const {
    return false;
}

std::string Lambda::toString() const {
    // TODO: Lambda toString
    return Value::toString();
}
