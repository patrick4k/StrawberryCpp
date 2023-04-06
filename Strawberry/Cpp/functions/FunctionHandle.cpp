//
// Created by Patrick on 4/6/2023.
//

#include "FunctionHandle.h"

#include <utility>
using fn_ctx =  antlrcpptest::StrawberryParser::FnDeclarationContext;

FunctionHandle::~FunctionHandle() = default;

FunctionHandle::FunctionHandle(std::shared_ptr<antlrcpptest::StrawberryParserBaseVisitor> target_interpreter,
                               antlrcpptest::StrawberryParser::FnDeclarationContext *ctx)
                               : fn_ctx(ctx), interpreter(std::move(target_interpreter)) {}

