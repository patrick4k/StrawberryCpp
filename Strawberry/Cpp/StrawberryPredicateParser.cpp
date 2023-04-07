//
// Created by Patrick on 4/7/2023.
//

#include "StrawberryPredicateParser.h"

namespace antlrcpptest {
    StrawberryPredicateParser::StrawberryPredicateParser(antlr4::TokenStream *input) : StrawberryParser(input) {}

    template<typename TargetParent>
    TargetParent StrawberryPredicateParser::getFirstParent(antlr4::ParserRuleContext* ctx) {
        auto parent = ctx->parent;
        while (parent != nullptr) {
            if (auto target = dynamic_cast<TargetParent>(parent)) {
                return target;
            }
            parent = parent->parent;
        }
        return nullptr;
    }

    template<typename TargetParent>
    TargetParent StrawberryPredicateParser::getFirstParent() {
        return getFirstParent<TargetParent>(_ctx);
    }

    bool StrawberryPredicateParser::isWithinFnDeclare() {
        if (getFirstParent<FnDeclarationContext *>()) return true;
        throw std::runtime_error("Cannot return from non-function");
    }

    bool StrawberryPredicateParser::isWithinLoop() {
        if (getFirstParent<Loop_Context *>()) return true;
        throw std::runtime_error("Cannot call loop keyword from non-loop");
    }

} // antlrcpptest
