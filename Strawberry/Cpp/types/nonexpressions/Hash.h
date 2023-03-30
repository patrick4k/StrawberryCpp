//
// Created by Patrick on 3/30/2023.
//

#ifndef LIBANTLR4_HASH_H
#define LIBANTLR4_HASH_H


#include "Container.h"

class Hash: public Container {
private:
    std::unordered_map<std::string,std::shared_ptr<Reference>> map;
public:
    Hash();

    std::shared_ptr<Reference> get(std::shared_ptr<Value> key) override;

    void append(const std::shared_ptr<Value> &val) override;

    bool isNull() const override;

    bool asBool() const override;

    double asDouble() const override;

    std::string asString() const override;

    std::shared_ptr<Value> clone() const override;

    ~Hash() override;
};


#endif //LIBANTLR4_HASH_H
