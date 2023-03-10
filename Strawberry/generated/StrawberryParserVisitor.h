
// Generated from /home/patrick/Documents/Interpreters/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "StrawberryParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by StrawberryParser.
 */
class  StrawberryParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by StrawberryParser.
   */
    virtual std::any visitScript(StrawberryParser::ScriptContext *context) = 0;

    virtual std::any visitNumberList(StrawberryParser::NumberListContext *context) = 0;


};

}  // namespace antlrcpptest
