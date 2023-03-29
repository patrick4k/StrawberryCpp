//
// Created by Patrick on 3/29/2023.
//

#ifndef LIBANTLR4_CASTHANDLER_H
#define LIBANTLR4_CASTHANDLER_H


#include <memory>
#include "expressions/String.h"
#include "expressions/Number.h"
#include "expressions/Bool.h"

class CastHandler {

public:
    /* String */
    static std::shared_ptr<String> string_from(const std::shared_ptr<Value>& val) {
        return std::make_shared<String>(val->asString());
    }

    /* Number */
    static std::shared_ptr<Number> number_from(const std::shared_ptr<Value>& val) {
        return std::make_shared<Number>(val->asDouble());
    }

};

#endif //LIBANTLR4_CASTHANDLER_H
