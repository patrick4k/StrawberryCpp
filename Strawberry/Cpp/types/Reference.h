//
// Created by Patrick on 3/29/2023.
//

#ifndef LIBANTLR4_REFERENCE_H
#define LIBANTLR4_REFERENCE_H


#include <utility>

#include "Value.h"

class Reference: public Value {
private:
    std::shared_ptr<Value> referenceValue;
public:
    explicit Reference() : referenceValue(std::make_shared<Value>()) {}
    explicit Reference(std::shared_ptr<Value> value) : referenceValue(std::move(value)) {}

    void set(std::shared_ptr<Value> val) {
        referenceValue = std::move(val);
    }

    bool isNull() const override {
        return this->referenceValue->isNull();
    }

    bool asBool() const override {
        return this->referenceValue->asBool();
    }

    double asDouble() const override {
        return this->referenceValue->asDouble();
    }

    std::string asString() const override {
        return this->referenceValue->asString();;
    }

    std::shared_ptr<Value> clone() const override {
        return std::make_shared<Reference>(*this);
    }

    std::shared_ptr<Value> copy_value() const {
        return this->referenceValue->clone();
    }

    std::shared_ptr<Reference> copy_to_reference() const {
        return std::make_shared<Reference>(*this);
    }

    std::shared_ptr<Value> get_referenced_value() const {
        auto ref = std::dynamic_pointer_cast<Reference>(this->referenceValue);
        if (ref) {
            return ref->get_referenced_value();
        }
        return this->referenceValue;
    }

    ~Reference() override {

    }

    template<typename T>
    std::shared_ptr<T> as() {
        return std::dynamic_pointer_cast<T>(this->referenceValue);
    }

};


#endif //LIBANTLR4_REFERENCE_H
