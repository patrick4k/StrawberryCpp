//
// Created by patrick on 3/10/23.
//

#ifndef LIBANTLR4_STRAWBERRYINTERPRETER_H
#define LIBANTLR4_STRAWBERRYINTERPRETER_H

#include "StrawberryParserBaseVisitor.h"
#include "types/Value.h"

namespace antlrcpptest {

    class StrawberryInterpreter: public StrawberryParserBaseVisitor {
    public:

        std::any defaultResult() override {
            // TODO: Return null
            return Value();
        }

        // TODO: override methods

    };

} // antlrcpptest

#endif //LIBANTLR4_STRAWBERRYINTERPRETER_H
