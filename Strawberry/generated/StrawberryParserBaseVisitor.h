
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "StrawberryParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of StrawberryParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  StrawberryParserBaseVisitor : public StrawberryParserVisitor {
public:

  virtual std::any visitScript(StrawberryParser::ScriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration(StrawberryParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAction(StrawberryParser::ActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScope(StrawberryParser::ScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(StrawberryParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStat(StrawberryParser::ReturnStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnceStat(StrawberryParser::OnceStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNextStat(StrawberryParser::NextStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLastStat(StrawberryParser::LastStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreakStat(StrawberryParser::BreakStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBody(StrawberryParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitControlFlow(StrawberryParser::ControlFlowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop(StrawberryParser::LoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopScope(StrawberryParser::LoopScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopBody(StrawberryParser::LoopBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(StrawberryParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementCompound(StrawberryParser::StatementCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfScopeCompound(StrawberryParser::IfScopeCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopScopeCompound(StrawberryParser::LoopScopeCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfCompound(StrawberryParser::IfCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(StrawberryParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprIfScope(StrawberryParser::ExprIfScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprIfBody(StrawberryParser::ExprIfBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfKeyword(StrawberryParser::IfKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnlessKeyword(StrawberryParser::UnlessKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForLoop(StrawberryParser::ForLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileLoop(StrawberryParser::WhileLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUntilLoop(StrawberryParser::UntilLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFnDeclaration(StrawberryParser::FnDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambda(StrawberryParser::LambdaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParams(StrawberryParser::ParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamsExpand(StrawberryParser::ParamsExpandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgs(StrawberryParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg(StrawberryParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgExpand(StrawberryParser::ArgExpandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLooseFnCallArg(StrawberryParser::LooseFnCallArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchRegex(StrawberryParser::MatchRegexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchOptions(StrawberryParser::MatchOptionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZeroOrMore(StrawberryParser::ZeroOrMoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrMatch(StrawberryParser::OrMatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCollectMatch(StrawberryParser::CollectMatchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitZeroOrOne(StrawberryParser::ZeroOrOneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChars(StrawberryParser::CharsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnOrMore(StrawberryParser::OnOrMoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWord(StrawberryParser::WordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewline(StrawberryParser::NewlineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBslash(StrawberryParser::BslashContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWildCard(StrawberryParser::WildCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOther(StrawberryParser::OtherContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(StrawberryParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefixExpr(StrawberryParser::PrefixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultSuffixExpr(StrawberryParser::DefaultSuffixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpExpr(StrawberryParser::OpExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSuffixExpr(StrawberryParser::SuffixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignExpr(StrawberryParser::AssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFnAccess(StrawberryParser::FnAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLitExpr(StrawberryParser::LitExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(StrawberryParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessExpr(StrawberryParser::AccessExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDStringLit(StrawberryParser::DStringLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSStringLit(StrawberryParser::SStringLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayLit(StrawberryParser::ArrayLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumLit(StrawberryParser::NumLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentityString(StrawberryParser::IdentityStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDollarSignString(StrawberryParser::DollarSignStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhitespace(StrawberryParser::WhitespaceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOtherString(StrawberryParser::OtherStringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclareAssign(StrawberryParser::DeclareAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqAssign(StrawberryParser::EqAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPowAssign(StrawberryParser::PowAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultAssign(StrawberryParser::MultAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivAssign(StrawberryParser::DivAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModAssign(StrawberryParser::ModAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddAssign(StrawberryParser::AddAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMinAssign(StrawberryParser::MinAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncrem(StrawberryParser::IncremContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecrem(StrawberryParser::DecremContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDotAccess(StrawberryParser::DotAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrAccesss(StrawberryParser::ArrAccesssContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdAccess(StrawberryParser::IdAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultAccess(StrawberryParser::DefaultAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLooseFnCall(StrawberryParser::LooseFnCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegatePrefix(StrawberryParser::NegatePrefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRefPrefix(StrawberryParser::RefPrefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegativePrefix(StrawberryParser::NegativePrefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExcitedSuff(StrawberryParser::ExcitedSuffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPowOp(StrawberryParser::PowOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultOp(StrawberryParser::MultOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivOp(StrawberryParser::DivOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModOp(StrawberryParser::ModOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlusOp(StrawberryParser::PlusOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMinOp(StrawberryParser::MinOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedOrOp(StrawberryParser::DefinedOrOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRangeOp(StrawberryParser::RangeOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolEqOp(StrawberryParser::BoolEqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolNeqOp(StrawberryParser::BoolNeqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolGtOp(StrawberryParser::BoolGtOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolGtEqOp(StrawberryParser::BoolGtEqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolLtOp(StrawberryParser::BoolLtOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolLtEqOp(StrawberryParser::BoolLtEqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrOp(StrawberryParser::OrOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndOp(StrawberryParser::AndOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchSuff(StrawberryParser::MatchSuffContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
