//
// Created by Patrick on 4/6/2023.
//

#ifndef LIBANTLR4_FUNCTIONHANDLE_H
#define LIBANTLR4_FUNCTIONHANDLE_H

#include "StrawberryParser.h"
#include "../types/Reference.h"
#include "StrawberryParserBaseVisitor.h"

class FunctionHandle {
private:
    antlrcpptest::StrawberryParser::FnDeclarationContext* fn_ctx = nullptr;
    std::shared_ptr<antlrcpptest::StrawberryParserBaseVisitor> interpreter;

public:
    FunctionHandle(std::shared_ptr<antlrcpptest::StrawberryParserBaseVisitor> target_interpreter,
                            antlrcpptest::StrawberryParser::FnDeclarationContext* ctx);
    virtual ~FunctionHandle();

    std::shared_ptr<Reference> execute_function(std::shared_ptr<Reference> args) {
        for (auto action: this->fn_ctx->scope()->action_()) {
            interpreter->visit(action);
//            if (auto return_ref = this->interpreter)
        }
        return std::make_shared<Reference>();
    }

};

#endif //LIBANTLR4_FUNCTIONHANDLE_H
