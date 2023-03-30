//
// Created by Patrick Kennedy on 3/11/23.
//

#ifndef LIBANTLR4_VALUE_H
#define LIBANTLR4_VALUE_H

#include "tree/ParseTree.h"

class Value {
public:
    /* Interpreter Level Casting */
    virtual bool isNull() const;
    virtual bool asBool() const;
    virtual double asDouble() const;
    virtual std::string asString() const;

    [[nodiscard]] virtual std::shared_ptr<Value> clone() const {
        return std::make_shared<Value>(*this);
    }

public:
    virtual ~Value();


    };


#endif //LIBANTLR4_VALUE_H
