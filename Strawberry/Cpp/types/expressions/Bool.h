//
// Created by Patrick on 3/28/2023.
//

#ifndef LIBANTLR4_BOOL_H
#define LIBANTLR4_BOOL_H

#include "../Value.h"

class Bool: public Value {
private:
    bool boolValue = false;
public:
    explicit Bool(bool boolValue);

public:
    int operatorPriority() const override;

    bool isNull() const override;

    bool toBool() const override;

    double toDouble() const override;

    std::string toString() const override;

    ~Bool() override;
};


#endif //LIBANTLR4_BOOL_H
