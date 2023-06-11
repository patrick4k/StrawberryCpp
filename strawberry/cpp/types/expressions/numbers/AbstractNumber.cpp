//
// Created by Patrick on 5/14/2023.
//

#include "AbstractNumber.h"

int AbstractNumber::operatorPriority() const {
    return Value::operatorPriority();
}

bool AbstractNumber::isNull() const {
    return false;
}

std::string AbstractNumber::toDisplay() const {
    return Value::toDisplay();
}

std::string AbstractNumber::typeName() const {
    return "number";
}
