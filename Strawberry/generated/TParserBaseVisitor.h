
// Generated from /home/patrick/Documents/Interpreters/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "TParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of TParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TParserBaseVisitor : public TParserVisitor {
public:

  virtual std::any visitScript(TParser::ScriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumberList(TParser::NumberListContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
