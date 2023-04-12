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
    explicit Reference(std::shared_ptr<Value>  value) : referenceValue(std::move(value)) {}

    int operatorPriority() const override {
        return this->referenceValue->operatorPriority();
    }

    void set(std::shared_ptr<Value> val) {
        referenceValue = std::move(val);
    }

    bool isNull() const override {
        return this->referenceValue->isNull();
    }

    bool toBool() const override {
        return this->referenceValue->toBool();
    }

    double toDouble() const override {
        return this->referenceValue->toDouble();
    }

    std::string toString() const override {
        return this->referenceValue->toString();;
    }

    std::string typeName() const override {
        return "ref of " + this->referenceValue->typeName();
    }

    std::shared_ptr<Value> copy_value() const {
        return this->referenceValue->clone();
    }

    std::shared_ptr<Value> get_referenced_value() const {
        auto ref = this->referenceValue->as<Reference>();
        if (ref) return ref->get_referenced_value();
        return this->referenceValue;
    }

    ~Reference() override = default;

    std::shared_ptr<Value> deref() {
        return this->referenceValue;
    }

    template<typename T>
    std::shared_ptr<T> deref() {
        return this->referenceValue->as<T>();
    }

    std::shared_ptr<Reference> to_new_reference() const {
        return std::make_shared<Reference>(this->referenceValue);
    }

    std::string toDisplay() const override {
        return this->referenceValue->toDisplay();
    }

    std::shared_ptr<Value> pow(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override {
        return this->referenceValue->pow(val1, val2);
    }
    std::shared_ptr<Value> mult(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override {
        return this->referenceValue->mult(val1, val2);
    }
    std::shared_ptr<Value> div(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override {
        return this->referenceValue->div(val1, val2);
    }
    std::shared_ptr<Value> mod(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override {
        return this->referenceValue->mod(val1, val2);
    }
    std::shared_ptr<Value> plus(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override {
        return this->referenceValue->plus(val1, val2);
    }
    std::shared_ptr<Value> min(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override {
        return this->referenceValue->min(val1, val2);
    }

};

#endif //LIBANTLR4_REFERENCE_H
