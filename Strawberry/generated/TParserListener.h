
// Generated from /home/patrick/Documents/Interpreters/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "TParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by TParser.
 */
class  TParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterScript(TParser::ScriptContext *ctx) = 0;
  virtual void exitScript(TParser::ScriptContext *ctx) = 0;

  virtual void enterNumberList(TParser::NumberListContext *ctx) = 0;
  virtual void exitNumberList(TParser::NumberListContext *ctx) = 0;


};

}  // namespace antlrcpptest
