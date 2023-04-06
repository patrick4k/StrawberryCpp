//
// Created by Patrick on 4/6/2023.
//

#include "FunctionHandle.h"
using fn_ctx =  antlrcpptest::StrawberryParser::FnDeclarationContext;
FunctionHandle::FunctionHandle(antlrcpptest::StrawberryParser::FnDeclarationContext* ctx) {
    this->fn_ctx = ctx;
}

FunctionHandle::~FunctionHandle() = default;
