//
// Created by Patrick Kennedy on 3/11/23.
//

#ifndef LIBANTLR4_VALUE_H
#define LIBANTLR4_VALUE_H

#include "support/Any.h"

// TODO: Add all types to namespace SbTypes

class Value: public std::enable_shared_from_this<Value> {
public:
    virtual int operatorPriority() const;
    /* Interpreter Level Casting */
    virtual bool isNull() const;
    virtual bool toBool() const;
    virtual double toDouble() const;
    virtual std::string toString() const; // TODO: Add std::string toDisplay()
    virtual std::string toDisplay() const;
    virtual std::string typeName() const;

    [[nodiscard]] std::shared_ptr<Value> clone() const {
        return std::make_shared<Value>(*this);
    }

    virtual ~Value();

    template<typename T>
    std::shared_ptr<T> as() {
        return std::dynamic_pointer_cast<T>(shared_from_this());
    }

    /* Operations */
    virtual std::shared_ptr<Value> pow(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2);
    virtual std::shared_ptr<Value> mult(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2);
    virtual std::shared_ptr<Value> div(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2);
    virtual std::shared_ptr<Value> mod(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2);
    virtual std::shared_ptr<Value> plus(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2);
    virtual std::shared_ptr<Value> min(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2);
    std::shared_ptr<Value> definedOr(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2);

    /* Boolean operations */
    virtual bool bool_equals(std::shared_ptr<Value> val1, std::shared_ptr<Value> val2);


};

#endif //LIBANTLR4_VALUE_H
