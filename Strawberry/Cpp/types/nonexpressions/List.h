//
// Created by Patrick on 3/29/2023.
//

#ifndef LIBANTLR4_LIST_H
#define LIBANTLR4_LIST_H

#include "../Reference.h"
#include "Container.h"

class List: public Container {
private:
    std::vector<std::shared_ptr<Reference>> refs = std::vector<std::shared_ptr<Reference>>();

public:
    bool isNull() const override;
    bool asBool() const override;
    double asDouble() const override;
    std::string asString() const override;
    std::shared_ptr<Value> clone() const override;

    std::shared_ptr<Reference> get(std::shared_ptr<Value> key) override;
    std::shared_ptr<Reference> get(int i);

    void append(const std::shared_ptr<Value> &val) override;

    void append_copy(const std::shared_ptr<Reference> &ref);

    void append_reference(const std::shared_ptr<Reference> &ref);

};

#endif //LIBANTLR4_LIST_H
