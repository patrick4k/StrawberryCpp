
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

    virtual Value visitDeclaration(StrawberryParser::DeclarationContext *context) = 0;

    virtual Value visitAction(StrawberryParser::ActionContext *context) = 0;

    virtual Value visitScope(StrawberryParser::ScopeContext *context) = 0;

    virtual Value visitStatement(StrawberryParser::StatementContext *context) = 0;

    virtual Value visitReturnStat(StrawberryParser::ReturnStatContext *context) = 0;

    virtual Value visitOnceStat(StrawberryParser::OnceStatContext *context) = 0;

    virtual Value visitNextStat(StrawberryParser::NextStatContext *context) = 0;

    virtual Value visitLastStat(StrawberryParser::LastStatContext *context) = 0;

    virtual Value visitBreakStat(StrawberryParser::BreakStatContext *context) = 0;

    virtual Value visitBody(StrawberryParser::BodyContext *context) = 0;

    virtual Value visitControlFlow(StrawberryParser::ControlFlowContext *context) = 0;

    virtual Value visitLoop(StrawberryParser::LoopContext *context) = 0;

    virtual Value visitLoopScope(StrawberryParser::LoopScopeContext *context) = 0;

    virtual Value visitLoopBody(StrawberryParser::LoopBodyContext *context) = 0;

    virtual Value visitCompoundStatement(StrawberryParser::CompoundStatementContext *context) = 0;

    virtual Value visitStatementCompound(StrawberryParser::StatementCompoundContext *context) = 0;

    virtual Value visitIfScopeCompound(StrawberryParser::IfScopeCompoundContext *context) = 0;

    virtual Value visitLoopScopeCompound(StrawberryParser::LoopScopeCompoundContext *context) = 0;

    virtual Value visitIfRegexCompound(StrawberryParser::IfRegexCompoundContext *context) = 0;

    virtual Value visitIfCompound(StrawberryParser::IfCompoundContext *context) = 0;

    virtual Value visitIfStatement(StrawberryParser::IfStatementContext *context) = 0;

    virtual Value visitExprIfScope(StrawberryParser::ExprIfScopeContext *context) = 0;

    virtual Value visitPatternIfScope(StrawberryParser::PatternIfScopeContext *context) = 0;

    virtual Value visitExprIfBody(StrawberryParser::ExprIfBodyContext *context) = 0;

    virtual Value visitPatternIfBody(StrawberryParser::PatternIfBodyContext *context) = 0;

    virtual Value visitIfKeyword(StrawberryParser::IfKeywordContext *context) = 0;

    virtual Value visitUnlessKeyword(StrawberryParser::UnlessKeywordContext *context) = 0;

    virtual Value visitForLoop(StrawberryParser::ForLoopContext *context) = 0;

    virtual Value visitWhileLoop(StrawberryParser::WhileLoopContext *context) = 0;

    virtual Value visitUntilLoop(StrawberryParser::UntilLoopContext *context) = 0;

    virtual Value visitFnDeclaration(StrawberryParser::FnDeclarationContext *context) = 0;

    virtual Value visitLambda(StrawberryParser::LambdaContext *context) = 0;

    virtual Value visitParams(StrawberryParser::ParamsContext *context) = 0;

    virtual Value visitParamsExpand(StrawberryParser::ParamsExpandContext *context) = 0;

    virtual Value visitArgs(StrawberryParser::ArgsContext *context) = 0;

    virtual Value visitArg(StrawberryParser::ArgContext *context) = 0;

    virtual Value visitArgExpand(StrawberryParser::ArgExpandContext *context) = 0;

    virtual Value visitLooseFnCallArg(StrawberryParser::LooseFnCallArgContext *context) = 0;

    virtual Value visitDefaultPattern(StrawberryParser::DefaultPatternContext *context) = 0;

    virtual Value visitExprPattern(StrawberryParser::ExprPatternContext *context) = 0;

    virtual Value visitWord(StrawberryParser::WordContext *context) = 0;

    virtual Value visitWildCard(StrawberryParser::WildCardContext *context) = 0;

    virtual Value visitOther(StrawberryParser::OtherContext *context) = 0;

    virtual Value visitValue(StrawberryParser::ValueContext *context) = 0;

    virtual Value visitLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext *context) = 0;

    virtual Value visitPrefixExpr(StrawberryParser::PrefixExprContext *context) = 0;

    virtual Value visitOpExpr(StrawberryParser::OpExprContext *context) = 0;

    virtual Value visitSuffixExpr(StrawberryParser::SuffixExprContext *context) = 0;

    virtual Value visitAssignExpr(StrawberryParser::AssignExprContext *context) = 0;

    virtual Value visitLitExpr(StrawberryParser::LitExprContext *context) = 0;

    virtual Value visitParenExpr(StrawberryParser::ParenExprContext *context) = 0;

    virtual Value visitAccessExpr(StrawberryParser::AccessExprContext *context) = 0;

    virtual Value visitDStringLit(StrawberryParser::DStringLitContext *context) = 0;

    virtual Value visitSStringLit(StrawberryParser::SStringLitContext *context) = 0;

    virtual Value visitArrayLit(StrawberryParser::ArrayLitContext *context) = 0;

    virtual Value visitNumLit(StrawberryParser::NumLitContext *context) = 0;

    virtual Value visitIdentityString(StrawberryParser::IdentityStringContext *context) = 0;

    virtual Value visitDollarSignString(StrawberryParser::DollarSignStringContext *context) = 0;

    virtual Value visitOtherString(StrawberryParser::OtherStringContext *context) = 0;

    virtual Value visitDeclareAssign(StrawberryParser::DeclareAssignContext *context) = 0;

    virtual Value visitEqAssign(StrawberryParser::EqAssignContext *context) = 0;

    virtual Value visitPowAssign(StrawberryParser::PowAssignContext *context) = 0;

    virtual Value visitMultAssign(StrawberryParser::MultAssignContext *context) = 0;

    virtual Value visitDivAssign(StrawberryParser::DivAssignContext *context) = 0;

    virtual Value visitModAssign(StrawberryParser::ModAssignContext *context) = 0;

    virtual Value visitAddAssign(StrawberryParser::AddAssignContext *context) = 0;

    virtual Value visitMinAssign(StrawberryParser::MinAssignContext *context) = 0;

    virtual Value visitIncrem(StrawberryParser::IncremContext *context) = 0;

    virtual Value visitDecrem(StrawberryParser::DecremContext *context) = 0;

    virtual Value visitDotAccess(StrawberryParser::DotAccessContext *context) = 0;

    virtual Value visitArrAccesss(StrawberryParser::ArrAccesssContext *context) = 0;

    virtual Value visitIdAccess(StrawberryParser::IdAccessContext *context) = 0;

    virtual Value visitDefaultAccess(StrawberryParser::DefaultAccessContext *context) = 0;

    virtual Value visitFnAccess(StrawberryParser::FnAccessContext *context) = 0;

    virtual Value visitLooseFnCall(StrawberryParser::LooseFnCallContext *context) = 0;

    virtual Value visitPow(StrawberryParser::PowContext *context) = 0;

    virtual Value visitMult(StrawberryParser::MultContext *context) = 0;

    virtual Value visitDiv(StrawberryParser::DivContext *context) = 0;

    virtual Value visitMod(StrawberryParser::ModContext *context) = 0;

    virtual Value visitPlus(StrawberryParser::PlusContext *context) = 0;

    virtual Value visitMin(StrawberryParser::MinContext *context) = 0;

    virtual Value visitDefinedOr(StrawberryParser::DefinedOrContext *context) = 0;

    virtual Value visitRangeOp(StrawberryParser::RangeOpContext *context) = 0;

    virtual Value visitNegatePrefix(StrawberryParser::NegatePrefixContext *context) = 0;

    virtual Value visitRefPrefix(StrawberryParser::RefPrefixContext *context) = 0;

    virtual Value visitNegativePrefix(StrawberryParser::NegativePrefixContext *context) = 0;

    virtual Value visitBoolEq(StrawberryParser::BoolEqContext *context) = 0;

    virtual Value visitBoolNeq(StrawberryParser::BoolNeqContext *context) = 0;

    virtual Value visitBoolGt(StrawberryParser::BoolGtContext *context) = 0;

    virtual Value visitBoolGtEq(StrawberryParser::BoolGtEqContext *context) = 0;

    virtual Value visitBoolLt(StrawberryParser::BoolLtContext *context) = 0;

    virtual Value visitBoolLtEq(StrawberryParser::BoolLtEqContext *context) = 0;

    virtual Value visitOr(StrawberryParser::OrContext *context) = 0;

    virtual Value visitAnd(StrawberryParser::AndContext *context) = 0;

    virtual Value visitOrDefault(StrawberryParser::OrDefaultContext *context) = 0;

    virtual Value visitExcitedSuff(StrawberryParser::ExcitedSuffContext *context) = 0;


};

}  // namespace antlrcpptest
