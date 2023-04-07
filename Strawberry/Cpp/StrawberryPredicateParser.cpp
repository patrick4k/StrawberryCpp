//
// Created by Patrick on 4/7/2023.
//

#include "StrawberryPredicateParser.h"

namespace antlrcpptest {
    StrawberryPredicateParser::StrawberryPredicateParser(antlr4::TokenStream *input) : StrawberryParser(input) {}

    bool StrawberryPredicateParser::isWithinFnDeclare() const {
        auto parent = _ctx->parent;
        while (parent != nullptr) {
            if (dynamic_cast<FnDeclarationContext*>(parent) != nullptr) {
                return true;
            }
            parent = parent->parent;
        }
        throw std::runtime_error("Cannot return from non-function");
    }

    bool StrawberryPredicateParser::isWithinLoop() const {
        auto parent = _ctx->parent;
        while (parent != nullptr) {
            if (dynamic_cast<Loop_Context*>(parent) != nullptr) {
                return true;
            }
            parent = parent->parent;
        }
        throw std::runtime_error("Cannot call loop keyword from non-loop");
    }

} // antlrcpptest
