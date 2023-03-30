//
// Created by Patrick on 3/30/2023.
//

#ifndef LIBANTLR4_PAIR_H
#define LIBANTLR4_PAIR_H


#include "Container.h"

class Pair: public Value {
private:
    std::shared_ptr<Value> key;
    std::shared_ptr<Reference> value;
public:
    Pair(std::shared_ptr<Value> key, std::shared_ptr<Reference> value);

    void setKeyValue(std::shared_ptr<Value> key, std::shared_ptr<Reference> value);
    void setKey(std::shared_ptr<Value> newkey);
    void setValue(std::shared_ptr<Reference> newvalue);

    const std::shared_ptr<Value> &getKey() const;

    const std::shared_ptr<Reference> &getValue() const;

};

#endif //LIBANTLR4_PAIR_H
