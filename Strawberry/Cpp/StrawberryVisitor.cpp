//
// Created by patrick on 3/7/23.
//

#include "StrawberryVisitor.h"

namespace antlr4 {
} // antlr4
std::any antlrcpptest::StrawberryVisitor::visitScript(antlrcpptest::TParser::ScriptContext *ctx) {
    return TParserBaseVisitor::visitScript(ctx);
}

std::any antlrcpptest::StrawberryVisitor::visitNumberList(antlrcpptest::TParser::NumberListContext *ctx) {
    for (auto num: ctx->Number()) {
        std::cout << num->getText() << std::endl;
    }
    return TParserBaseVisitor::visitNumberList(ctx);
}
