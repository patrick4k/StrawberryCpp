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
    Pair(std::shared_ptr<Value> key, const std::shared_ptr<Value> &value);
    Pair(std::shared_ptr<Value> key, std::shared_ptr<Reference> value);

    int operatorPriority() const override;

    void setKey(std::shared_ptr<Value> newkey);
    void setValue(std::shared_ptr<Reference> newvalue);

    const std::shared_ptr<Value> &getKey() const;

    const std::shared_ptr<Reference> &getValue() const;

    bool isNull() const override;

    double toDouble() const override;

    std::string toString() const override;

    ~Pair() override;

};

#endif //LIBANTLR4_PAIR_H
