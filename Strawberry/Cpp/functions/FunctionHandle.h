//
// Created by Patrick on 4/6/2023.
//

#ifndef LIBANTLR4_FUNCTIONHANDLE_H
#define LIBANTLR4_FUNCTIONHANDLE_H

#include "StrawberryParser.h"
#include "../types/Reference.h"

class FunctionHandle {
private:
    antlrcpptest::StrawberryParser::FnDeclarationContext* fn_ctx = nullptr;

public:
    explicit FunctionHandle(antlrcpptest::StrawberryParser::FnDeclarationContext* ctx);
    virtual ~FunctionHandle();

    std::shared_ptr<Reference> execute_function(std::shared_ptr<Reference> args) {
        // TODO: Execute function
    }

};

#endif //LIBANTLR4_FUNCTIONHANDLE_H
