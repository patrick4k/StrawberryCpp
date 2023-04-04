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
    int operatorPriority() const override;

    bool isNull() const override;
    bool toBool() const override;
    double toDouble() const override;
    std::string toString() const override;

    std::string typeName() const override;

    std::shared_ptr<Reference> get(std::shared_ptr<Value> key) override;
    std::shared_ptr<Reference> get(int i);

    void append(const std::shared_ptr<Value> &val) override;

    explicit List(const std::shared_ptr<Reference> &ref);

    List();

    int size() override;
};

#endif //LIBANTLR4_LIST_H
