
// Generated from /home/patrick/Documents/Interpreters/StrawberryCpp/Strawberry/TParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "TParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by TParser.
 */
class  TParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TParser.
   */
    virtual std::any visitScript(TParser::ScriptContext *context) = 0;

    virtual std::any visitNumberList(TParser::NumberListContext *context) = 0;


};

}  // namespace antlrcpptest
