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
    explicit Reference(std::shared_ptr<Value> value) : value(std::move(value)) {}

    void set(std::shared_ptr<Value> val) {
        value = std::move(val);
    }

    [[nodiscard]] std::shared_ptr<Value> getValue() const {
        return value;
    }

    template<typename T>
    std::shared_ptr<T> as() {
        std::shared_ptr<T> casted = std::dynamic_pointer_cast<T>(this->value);
        if (casted != nullptr) return casted;
        throw std::runtime_error("Error Casting hard casting");
    }

};


#endif //LIBANTLR4_REFERENCE_H
