
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "../Cpp/types/Value.h"
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

    virtual Value visitStatement(StrawberryParser::StatementContext *context) = 0;

    virtual Value visitExpression(StrawberryParser::ExpressionContext *context) = 0;

    virtual Value visitFnDecl(StrawberryParser::FnDeclContext *context) = 0;


};

}  // namespace antlrcpptest
