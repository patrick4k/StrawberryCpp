//
// Created by Patrick on 5/14/2023.
//

#ifndef LIBANTLR4_STRAWBERRYTYPES_H
#define LIBANTLR4_STRAWBERRYTYPES_H


#include "Value.h"
#include "Reference.h"
#include "expressions/Number.h"
#include "expressions/String.h"
#include "expressions/Bool.h"
#include "containers/List.h"

namespace SbTypes {

    template<typename T>
    static std::shared_ptr<Value> create(T val) {
        throw std::runtime_error("No type for: " + std::to_string(val));
    }

    /* Number */
    template<>
    std::shared_ptr<Value> create<int>(int val) {
        return std::make_shared<Number>(val);
    }

    template<>
    std::shared_ptr<Value> create<double>(double val) {
        return std::make_shared<Number>(val);
    }

    /* String */
    template<>
    std::shared_ptr<Value> create<std::string>(std::string val) {
        return std::make_shared<String>(val);
    }

    /* Bool */
    template<>
    std::shared_ptr<Value> create<bool>(bool val) {
        return std::make_shared<Bool>(val);
    }

    /* List */
    template<>
    std::shared_ptr<Value>
    create<std::vector<std::shared_ptr<Reference>>>(std::vector<std::shared_ptr<Reference>> val) {
        return std::make_shared<List>(std::move(val));
    }

    /* Create Reference */
    template<typename T>
    static std::shared_ptr<Reference> createRef(T val) {
        return std::make_shared<Reference>(create(val));
    }

}

#endif //LIBANTLR4_STRAWBERRYTYPES_H
