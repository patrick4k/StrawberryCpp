//
// Created by Patrick on 3/28/2023.
//

#ifndef LIBANTLR4_NUMBER_H
#define LIBANTLR4_NUMBER_H

#include "../Value.h"

class Number: public Value {
private:
    double value;
public:
    explicit Number(double value);
    explicit Number(const std::string& value);

    void set(double d) {
        this->value = d;
    }

    std::shared_ptr<Value> clone() const override {
        return std::make_shared<Number>(*this);
    }

private:
    bool isNull() const override;

    bool asBool() const override;

    double asDouble() const override;

    std::string asString() const override;

};


#endif //LIBANTLR4_NUMBER_H
