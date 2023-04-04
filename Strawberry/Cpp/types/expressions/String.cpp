//
// Created by Patrick on 3/29/2023.
//

#include "String.h"

#include <utility>

bool String::isNull() const {
    return false;
}

bool String::toBool() const {
    return true;
}

double String::toDouble() const {
    try {
        return std::stod(this->text);
    } catch (std::exception& e) {
        throw std::runtime_error("Cannot cast string: '" + text + "' to number");
    }
}

std::string String::toString() const {
    return this->text;
}

String::String(std::string value) : text(std::move(value)) {}

int String::operatorPriority() const {
    return 10;
}

std::shared_ptr<Value> String::add(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) {
    return std::make_shared<String>(val1->toString() + val2->toString());
}

std::string String::toDisplay() const {
    return '"' + this->toString() + '"';
}

std::string String::typeName() const {
    return "string";
}
