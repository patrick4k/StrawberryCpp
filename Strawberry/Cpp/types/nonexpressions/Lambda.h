//
// Created by Patrick on 3/28/2023.
//

#ifndef LIBANTLR4_LAMBDA_H
#define LIBANTLR4_LAMBDA_H


#include "../Value.h"

class Lambda : Value {
    int operatorPriority() const override;

    bool isNull() const override;

    std::string toString() const override;

    bool toBool() const override;

    double toDouble() const override;
};

#endif //LIBANTLR4_LAMBDA_H
