//
// Created by Patrick Kennedy on 3/11/23.
//

#ifndef LIBANTLR4_VALUE_H
#define LIBANTLR4_VALUE_H

#include "tree/ParseTree.h"

class Value: public std::enable_shared_from_this<Value> {
public:
    /* Interpreter Level Casting */
    virtual bool isNull() const;
    virtual bool toBool() const;
    virtual double toDouble() const;
    virtual std::string toString() const;

    [[nodiscard]] std::shared_ptr<Value> clone() const {
        return std::make_shared<Value>(*this);
    }

public:
    virtual ~Value();

    template<typename T>
    std::shared_ptr<T> as() {
        return std::dynamic_pointer_cast<T>(shared_from_this());
    }

};

#endif //LIBANTLR4_VALUE_H
