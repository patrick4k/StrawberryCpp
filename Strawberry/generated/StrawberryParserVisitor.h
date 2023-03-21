
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

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

    virtual std::any visitDeclaration(StrawberryParser::DeclarationContext *context) = 0;

    virtual std::any visitAction(StrawberryParser::ActionContext *context) = 0;

    virtual std::any visitScope(StrawberryParser::ScopeContext *context) = 0;

    virtual std::any visitStatement(StrawberryParser::StatementContext *context) = 0;

    virtual std::any visitReturnStat(StrawberryParser::ReturnStatContext *context) = 0;

    virtual std::any visitOnceStat(StrawberryParser::OnceStatContext *context) = 0;

    virtual std::any visitNextStat(StrawberryParser::NextStatContext *context) = 0;

    virtual std::any visitLastStat(StrawberryParser::LastStatContext *context) = 0;

    virtual std::any visitBreakStat(StrawberryParser::BreakStatContext *context) = 0;

    virtual std::any visitBody(StrawberryParser::BodyContext *context) = 0;

    virtual std::any visitControlFlow(StrawberryParser::ControlFlowContext *context) = 0;

    virtual std::any visitLoop(StrawberryParser::LoopContext *context) = 0;

    virtual std::any visitLoopScope(StrawberryParser::LoopScopeContext *context) = 0;

    virtual std::any visitLoopBody(StrawberryParser::LoopBodyContext *context) = 0;

    virtual std::any visitCompoundStatement(StrawberryParser::CompoundStatementContext *context) = 0;

    virtual std::any visitStatementCompound(StrawberryParser::StatementCompoundContext *context) = 0;

    virtual std::any visitIfScopeCompound(StrawberryParser::IfScopeCompoundContext *context) = 0;

    virtual std::any visitLoopScopeCompound(StrawberryParser::LoopScopeCompoundContext *context) = 0;

    virtual std::any visitIfCompound(StrawberryParser::IfCompoundContext *context) = 0;

    virtual std::any visitIfStatement(StrawberryParser::IfStatementContext *context) = 0;

    virtual std::any visitExprIfScope(StrawberryParser::ExprIfScopeContext *context) = 0;

    virtual std::any visitExprIfBody(StrawberryParser::ExprIfBodyContext *context) = 0;

    virtual std::any visitIfKeyword(StrawberryParser::IfKeywordContext *context) = 0;

    virtual std::any visitUnlessKeyword(StrawberryParser::UnlessKeywordContext *context) = 0;

    virtual std::any visitForLoop(StrawberryParser::ForLoopContext *context) = 0;

    virtual std::any visitWhileLoop(StrawberryParser::WhileLoopContext *context) = 0;

    virtual std::any visitUntilLoop(StrawberryParser::UntilLoopContext *context) = 0;

    virtual std::any visitFnDeclaration(StrawberryParser::FnDeclarationContext *context) = 0;

    virtual std::any visitLambda(StrawberryParser::LambdaContext *context) = 0;

    virtual std::any visitParams(StrawberryParser::ParamsContext *context) = 0;

    virtual std::any visitParamsExpand(StrawberryParser::ParamsExpandContext *context) = 0;

    virtual std::any visitArgs(StrawberryParser::ArgsContext *context) = 0;

    virtual std::any visitArg(StrawberryParser::ArgContext *context) = 0;

    virtual std::any visitArgExpand(StrawberryParser::ArgExpandContext *context) = 0;

    virtual std::any visitLooseFnCallArg(StrawberryParser::LooseFnCallArgContext *context) = 0;

    virtual std::any visitMatchRegex(StrawberryParser::MatchRegexContext *context) = 0;

    virtual std::any visitMatchOptions(StrawberryParser::MatchOptionsContext *context) = 0;

    virtual std::any visitZeroOrMore(StrawberryParser::ZeroOrMoreContext *context) = 0;

    virtual std::any visitOrMatch(StrawberryParser::OrMatchContext *context) = 0;

    virtual std::any visitCollectMatch(StrawberryParser::CollectMatchContext *context) = 0;

    virtual std::any visitZeroOrOne(StrawberryParser::ZeroOrOneContext *context) = 0;

    virtual std::any visitChars(StrawberryParser::CharsContext *context) = 0;

    virtual std::any visitOnOrMore(StrawberryParser::OnOrMoreContext *context) = 0;

    virtual std::any visitWord(StrawberryParser::WordContext *context) = 0;

    virtual std::any visitNewline(StrawberryParser::NewlineContext *context) = 0;

    virtual std::any visitBslash(StrawberryParser::BslashContext *context) = 0;

    virtual std::any visitWildCard(StrawberryParser::WildCardContext *context) = 0;

    virtual std::any visitOther(StrawberryParser::OtherContext *context) = 0;

    virtual std::any visitValue(StrawberryParser::ValueContext *context) = 0;

    virtual std::any visitLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext *context) = 0;

    virtual std::any visitPrefixExpr(StrawberryParser::PrefixExprContext *context) = 0;

    virtual std::any visitDefaultSuffixExpr(StrawberryParser::DefaultSuffixExprContext *context) = 0;

    virtual std::any visitOpExpr(StrawberryParser::OpExprContext *context) = 0;

    virtual std::any visitSuffixExpr(StrawberryParser::SuffixExprContext *context) = 0;

    virtual std::any visitAssignExpr(StrawberryParser::AssignExprContext *context) = 0;

    virtual std::any visitFnAccess(StrawberryParser::FnAccessContext *context) = 0;

    virtual std::any visitLitExpr(StrawberryParser::LitExprContext *context) = 0;

    virtual std::any visitParenExpr(StrawberryParser::ParenExprContext *context) = 0;

    virtual std::any visitAccessExpr(StrawberryParser::AccessExprContext *context) = 0;

    virtual std::any visitDStringLit(StrawberryParser::DStringLitContext *context) = 0;

    virtual std::any visitSStringLit(StrawberryParser::SStringLitContext *context) = 0;

    virtual std::any visitArrayLit(StrawberryParser::ArrayLitContext *context) = 0;

    virtual std::any visitNumLit(StrawberryParser::NumLitContext *context) = 0;

    virtual std::any visitIdentityString(StrawberryParser::IdentityStringContext *context) = 0;

    virtual std::any visitDollarSignString(StrawberryParser::DollarSignStringContext *context) = 0;

    virtual std::any visitWhitespace(StrawberryParser::WhitespaceContext *context) = 0;

    virtual std::any visitOtherString(StrawberryParser::OtherStringContext *context) = 0;

    virtual std::any visitDeclareAssign(StrawberryParser::DeclareAssignContext *context) = 0;

    virtual std::any visitEqAssign(StrawberryParser::EqAssignContext *context) = 0;

    virtual std::any visitPowAssign(StrawberryParser::PowAssignContext *context) = 0;

    virtual std::any visitMultAssign(StrawberryParser::MultAssignContext *context) = 0;

    virtual std::any visitDivAssign(StrawberryParser::DivAssignContext *context) = 0;

    virtual std::any visitModAssign(StrawberryParser::ModAssignContext *context) = 0;

    virtual std::any visitAddAssign(StrawberryParser::AddAssignContext *context) = 0;

    virtual std::any visitMinAssign(StrawberryParser::MinAssignContext *context) = 0;

    virtual std::any visitIncrem(StrawberryParser::IncremContext *context) = 0;

    virtual std::any visitDecrem(StrawberryParser::DecremContext *context) = 0;

    virtual std::any visitDotAccess(StrawberryParser::DotAccessContext *context) = 0;

    virtual std::any visitArrAccesss(StrawberryParser::ArrAccesssContext *context) = 0;

    virtual std::any visitIdAccess(StrawberryParser::IdAccessContext *context) = 0;

    virtual std::any visitDefaultAccess(StrawberryParser::DefaultAccessContext *context) = 0;

    virtual std::any visitLooseFnCall(StrawberryParser::LooseFnCallContext *context) = 0;

    virtual std::any visitNegatePrefix(StrawberryParser::NegatePrefixContext *context) = 0;

    virtual std::any visitRefPrefix(StrawberryParser::RefPrefixContext *context) = 0;

    virtual std::any visitNegativePrefix(StrawberryParser::NegativePrefixContext *context) = 0;

    virtual std::any visitExcitedSuff(StrawberryParser::ExcitedSuffContext *context) = 0;

    virtual std::any visitPowOp(StrawberryParser::PowOpContext *context) = 0;

    virtual std::any visitMultOp(StrawberryParser::MultOpContext *context) = 0;

    virtual std::any visitDivOp(StrawberryParser::DivOpContext *context) = 0;

    virtual std::any visitModOp(StrawberryParser::ModOpContext *context) = 0;

    virtual std::any visitPlusOp(StrawberryParser::PlusOpContext *context) = 0;

    virtual std::any visitMinOp(StrawberryParser::MinOpContext *context) = 0;

    virtual std::any visitDefinedOrOp(StrawberryParser::DefinedOrOpContext *context) = 0;

    virtual std::any visitRangeOp(StrawberryParser::RangeOpContext *context) = 0;

    virtual std::any visitBoolEqOp(StrawberryParser::BoolEqOpContext *context) = 0;

    virtual std::any visitBoolNeqOp(StrawberryParser::BoolNeqOpContext *context) = 0;

    virtual std::any visitBoolGtOp(StrawberryParser::BoolGtOpContext *context) = 0;

    virtual std::any visitBoolGtEqOp(StrawberryParser::BoolGtEqOpContext *context) = 0;

    virtual std::any visitBoolLtOp(StrawberryParser::BoolLtOpContext *context) = 0;

    virtual std::any visitBoolLtEqOp(StrawberryParser::BoolLtEqOpContext *context) = 0;

    virtual std::any visitOrOp(StrawberryParser::OrOpContext *context) = 0;

    virtual std::any visitAndOp(StrawberryParser::AndOpContext *context) = 0;

    virtual std::any visitMatchSuff(StrawberryParser::MatchSuffContext *context) = 0;


};

}  // namespace antlrcpptest
