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
    double getValue() const;

private:
    bool isNull() const override;

    bool asBool() const override;

    double asDouble() const override;

    std::string asString() const override;

public:
    void setValue(double value);
};


#endif //LIBANTLR4_NUMBER_H
