//
// Created by Patrick on 3/28/2023.
//

#include "Bool.h"

bool Bool::isNull() const {
    return false;
}

bool Bool::toBool() const {
    return this->boolValue;
}

double Bool::toDouble() const {
    return boolValue? 1: 0;
}

std::string Bool::toString() const {
    return boolValue? "true": "false";
}

Bool::~Bool() = default;

Bool::Bool(bool boolValue) : boolValue(boolValue) {}

int Bool::operatorPriority() const {
    return 0;
}
