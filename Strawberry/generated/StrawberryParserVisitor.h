
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "../Cpp/Value.h"
#include "../Cpp/StrawberryTree.h"
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
    virtual Value visitScript(StrawberryParser::ScriptContext *context) = 0;

    virtual Value visitNumberList(StrawberryParser::NumberListContext *context) = 0;


};

}  // namespace antlrcpptest
