//
// Created by Patrick on 3/29/2023.
//

#ifndef LIBANTLR4_LIST_H
#define LIBANTLR4_LIST_H

#include "../Reference.h"

class List: public Value {
private:
    std::vector<std::shared_ptr<Reference>> refs = std::vector<std::shared_ptr<Reference>>();

public:
    std::shared_ptr<Reference> get(int i);
    void append(const std::shared_ptr<Reference>& ref);

    void append(const std::shared_ptr<Value>& val);
    [[nodiscard]] const std::vector<std::shared_ptr<Reference>> &getValues() const;
};

#endif //LIBANTLR4_LIST_H
