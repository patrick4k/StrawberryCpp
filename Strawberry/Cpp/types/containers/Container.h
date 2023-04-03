//
// Created by Patrick on 3/30/2023.
//

#ifndef LIBANTLR4_CONTAINER_H
#define LIBANTLR4_CONTAINER_H


#include "../Value.h"
#include "../Reference.h"

class Container: public Value {

public:
    virtual std::shared_ptr<Reference> get(std::shared_ptr<Value> key) = 0;
    virtual void append(const std::shared_ptr<Value>& val) = 0;
    virtual int size() = 0;
};

#endif //LIBANTLR4_CONTAINER_H
