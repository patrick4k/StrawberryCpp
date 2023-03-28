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

private:
    bool isNull() const override;

    bool asBool() const override;

    double asDouble() const override;

    std::string asString() const override;

private:
    std::shared_ptr<Value> clone() const override {
        return std::make_shared<Number>(*this);
    }

};


#endif //LIBANTLR4_NUMBER_H
