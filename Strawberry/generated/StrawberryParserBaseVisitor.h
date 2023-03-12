
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "../Cpp/Value.h"
#include "../Cpp/StrawberryTree.h"
#include "StrawberryParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of StrawberryParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  StrawberryParserBaseVisitor : public StrawberryParserVisitor {
public:

  virtual Value visitScript(StrawberryParser::ScriptContext *ctx) override {
    return StrawberryTree::visitChildrenValue(ctx);
  }

  virtual Value visitNumberList(StrawberryParser::NumberListContext *ctx) override {
    return StrawberryTree::visitChildrenValue(ctx);
  }


};

}  // namespace antlrcpptest
