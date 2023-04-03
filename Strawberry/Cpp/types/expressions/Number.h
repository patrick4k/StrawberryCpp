//
// Created by Patrick on 3/28/2023.
//

#ifndef LIBANTLR4_NUMBER_H
#define LIBANTLR4_NUMBER_H

#include "../Value.h"

class Number: public Value {
private:
    double number;
public:
    int operatorPriority() const override;

    explicit Number(double value);
    explicit Number(const std::string& value);

    bool isNull() const override;
    bool toBool() const override;
    double toDouble() const override;
    std::string toString() const override;

    ~Number() override = default;

    std::shared_ptr<Value> add(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
};

#endif //LIBANTLR4_NUMBER_H
