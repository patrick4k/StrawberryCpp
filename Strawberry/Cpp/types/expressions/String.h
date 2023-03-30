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
    bool isNull() const override;
    bool asBool() const override;
    double asDouble() const override;
    std::string asString() const override;

    ~String() override = default;

public:
    std::shared_ptr<Value> clone() const override;

};

#endif //LIBANTLR4_STRING_H
