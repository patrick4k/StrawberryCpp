
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "../Cpp/types/Value.h"
#include "StrawberryParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of StrawberryParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  StrawberryParserBaseVisitor : public StrawberryParserVisitor {
public:

  virtual Value visitScript(StrawberryParser::ScriptContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitStatement(StrawberryParser::StatementContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitExpression(StrawberryParser::ExpressionContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitFnDecl(StrawberryParser::FnDeclContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }


};

}  // namespace antlrcpptest
