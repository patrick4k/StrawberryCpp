//
// Created by Patrick on 3/29/2023.
//

#ifndef LIBANTLR4_STRING_H
#define LIBANTLR4_STRING_H


#include "../Value.h"

class String: public Value {

private:
    std::string text;
public:
    explicit String(std::string value);

public:
    int operatorPriority() const override;

    bool isNull() const override;
    bool toBool() const override;
    double toDouble() const override;
    std::string toString() const override;

    std::string toDisplay() const override;

    std::string typeName() const override;

    ~String() override = default;

    std::shared_ptr<Value> add(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2) override;
};

#endif //LIBANTLR4_STRING_H
