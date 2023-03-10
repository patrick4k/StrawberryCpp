
// Generated from /home/patrick/Documents/Interpreters/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "StrawberryParserListener.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of StrawberryParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  StrawberryParserBaseListener : public StrawberryParserListener {
public:

  virtual void enterScript(StrawberryParser::ScriptContext * /*ctx*/) override { }
  virtual void exitScript(StrawberryParser::ScriptContext * /*ctx*/) override { }

  virtual void enterNumberList(StrawberryParser::NumberListContext * /*ctx*/) override { }
  virtual void exitNumberList(StrawberryParser::NumberListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
