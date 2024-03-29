//
// Created by Patrick Kennedy on 3/11/23.
//

#include "Value.h"
#include "../util/Warnings.h"

bool Value::isNull() const {
    return true;
}

bool Value::toBool() const {
    return false;
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

std::string Value::toDisplay() const {
    return this->toString();
}

std::string Value::typeName() const {
    return "undef";
}

std::shared_ptr<Value> Value::pow(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    Warnings::warn("Power not implemented for " + val1->typeName() + " ^ " + val2->typeName());
    return nullptr;
}

std::shared_ptr<Value> Value::mult(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    Warnings::warn("Multiplication not implemented for " + val1->typeName() + " * " + val2->typeName());
    return nullptr;
}

std::shared_ptr<Value> Value::div(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    Warnings::warn("Division not implemented for " + val1->typeName() + " / " + val2->typeName());
    return nullptr;
}

std::shared_ptr<Value> Value::mod(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    Warnings::warn("Modulo not implemented for " + val1->typeName() + " % " + val2->typeName());
    return nullptr;
}

std::shared_ptr<Value> Value::plus(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    Warnings::warn("Addition not implemented for " + val1->typeName() + " + " + val2->typeName());
    return nullptr;
}

std::shared_ptr<Value> Value::min(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    Warnings::warn("Subtraction not implemented for " + val1->typeName() + " - " + val2->typeName());
    return nullptr;
}

bool Value::bool_equals(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return val1->toString() == val2->toString();
}

std::shared_ptr<Value> Value::definedOr(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    if (!val1->isNull()) return val1;
    return val2;
}


Value::~Value() = default;
