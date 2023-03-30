//
// Created by Patrick on 3/30/2023.
//

#include "Pair.h"

#include <utility>

Pair::Pair(std::shared_ptr<Value> key, std::shared_ptr<Reference> value): key(std::move(key)), value(std::move(value)) {}

void Pair::setKeyValue(std::shared_ptr<Value> key, std::shared_ptr<Reference> value) {

}

void Pair::setKey(std::shared_ptr<Value> newkey) {
    this->key = std::move(newkey);
}

void Pair::setValue(std::shared_ptr<Reference> newvalue) {
    this->value = std::move(newvalue);
}

const std::shared_ptr<Value> &Pair::getKey() const {
    return key;
}

const std::shared_ptr<Reference> &Pair::getValue() const {
    return value;
}
