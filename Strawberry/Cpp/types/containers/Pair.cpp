//
// Created by Patrick on 3/30/2023.
//

#include "Pair.h"

#include <utility>

Pair::Pair(std::shared_ptr<Value> key, std::shared_ptr<Reference> value): key(std::move(key)), value(std::move(value)) {}

void Pair::setKey(std::shared_ptr<Value> newkey) {
    this->key = std::move(newkey);
}

bool Pair::isNull() const {
    return false;
}

double Pair::toDouble() const {
    throw std::runtime_error("Cannot use pair in number context");
}

std::string Pair::toString() const {
    return "{" + this->key->toString() + " : " + this->value->toString() + "}";
}

Pair::~Pair() = default;

void Pair::setValue(std::shared_ptr<Reference> newvalue) {
    this->value = std::move(newvalue);
}

const std::shared_ptr<Value> &Pair::getKey() const {
    return key;
}

const std::shared_ptr<Reference> &Pair::getValue() const {
    return value;
}

int Pair::operatorPriority() const {
    return 7;
}
