//
// Created by Patrick Kennedy on 3/11/23.
//

#include "Value.h"

bool Value::isNull() const {
    return false;
}

bool Value::asBool() const {
    return false;
}

double Value::asDouble() const {
    return 0;
}

std::string Value::asString() const {
    return "null";
}
