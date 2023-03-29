//
// Created by Patrick on 3/29/2023.
//

#ifndef LIBANTLR4_VALUEREF_H
#define LIBANTLR4_VALUEREF_H


#include "../Value.h"
#include "../Reference.h"

class ValueRef: public Value {
private:
    std::shared_ptr<Reference> reference;

public:
    explicit ValueRef(std::shared_ptr<Reference> reference);

public:
    bool isNull() const override;

    bool asBool() const override;

    double asDouble() const override;

    std::string asString() const override;

    std::shared_ptr<Value> clone() const override;

    ~ValueRef() override;


};


#endif //LIBANTLR4_VALUEREF_H
