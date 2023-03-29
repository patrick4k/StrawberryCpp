//
// Created by Patrick on 3/29/2023.
//

#ifndef LIBANTLR4_REFERENCE_H
#define LIBANTLR4_REFERENCE_H


#include <utility>

#include "Value.h"

class Reference {
private:
    std::shared_ptr<Value> value;
public:
    void set(std::shared_ptr<Value>(val)) {
        value = std::move(val);
    }

    std::shared_ptr<Value> getValue() {
        return value;
    }
};


#endif //LIBANTLR4_REFERENCE_H
