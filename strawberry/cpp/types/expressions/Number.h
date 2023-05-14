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
    double toDouble() const override;
    std::string toString() const override;

    std::string typeName() const override;

    ~Number() override = default;

    std::shared_ptr<Value> plus(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
    std::shared_ptr<Value> min(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
    std::shared_ptr<Value> pow(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
    std::shared_ptr<Value> mult(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
    std::shared_ptr<Value> div(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
    std::shared_ptr<Value> mod(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
};

#endif //LIBANTLR4_NUMBER_H
