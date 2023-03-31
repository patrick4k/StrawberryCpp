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
    bool toBool() const override;
    double toDouble() const override;
    std::string toString() const override;

    ~String() override = default;

};

#endif //LIBANTLR4_STRING_H
