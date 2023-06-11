//
// Created by Patrick on 5/14/2023.
//

#ifndef LIBANTLR4_INT_H
#define LIBANTLR4_INT_H


#include "AbstractNumber.h"

class Int : public AbstractNumber {
private:
    int number;

public:
    explicit Int();
    explicit Int(int number);

    bool toBool() const override;

    double toDouble() const override;

    std::string toString() const override;

    ~Int() override = default;

    std::shared_ptr<Value> pow(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
    std::shared_ptr<Value> mult(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
    std::shared_ptr<Value> div(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
    std::shared_ptr<Value> mod(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
    std::shared_ptr<Value> plus(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
    std::shared_ptr<Value> min(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;

};

#endif //LIBANTLR4_INT_H
