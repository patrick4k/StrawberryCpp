//
// Created by Patrick on 3/29/2023.
//

#include "ValueRef.h"

#include <utility>

bool ValueRef::isNull() const {
    return this->reference->getValue()->isNull();
}

bool ValueRef::asBool() const {
    return this->reference->getValue()->asBool();
}

double ValueRef::asDouble() const {
    return this->reference->getValue()->asDouble();
}

std::string ValueRef::asString() const {
    return this->reference->getValue()->asString();
}

std::shared_ptr<Value> ValueRef::clone() const {
    return this->reference->getValue()->clone();
}

ValueRef::~ValueRef() = default;

ValueRef::ValueRef(std::shared_ptr<Reference> reference) : reference(std::move(reference)) {}
