
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "StrawberryParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by StrawberryParser.
 */
class  StrawberryParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterScript(StrawberryParser::ScriptContext *ctx) = 0;
  virtual void exitScript(StrawberryParser::ScriptContext *ctx) = 0;

  virtual void enterNumberList(StrawberryParser::NumberListContext *ctx) = 0;
  virtual void exitNumberList(StrawberryParser::NumberListContext *ctx) = 0;


};

}  // namespace antlrcpptest
