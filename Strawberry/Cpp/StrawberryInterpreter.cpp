//
// Created by patrick on 3/10/23.
//

#include "StrawberryInterpreter.h"

namespace antlrcpptest {
    std::any StrawberryInterpreter::visitScript(StrawberryParser::ScriptContext *ctx) {
        return StrawberryParserBaseVisitor::visitScript(ctx);
    }

    std::any StrawberryInterpreter::visitNumberList(StrawberryParser::NumberListContext *ctx) {
        for (auto n: ctx->Number()) {
            std::cout << "Found  " << n->getText() << "!" << std::endl;
        }
        return StrawberryParserBaseVisitor::visitNumberList(ctx);
    }
} // antlrcpptest