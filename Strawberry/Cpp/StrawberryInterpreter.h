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

        virtual std::any visitChildren(antlr4::tree::ParseTree *node) override {
            std::any result = defaultResult();
            for (const auto &child: node->children) {
                result = visit(child);
            }
            return result;
        }

        virtual std::any defaultResult() override {
            return Value();
        }

        // TODO: override methods

    };

} // antlrcpptest

#endif //LIBANTLR4_STRAWBERRYINTERPRETER_H
