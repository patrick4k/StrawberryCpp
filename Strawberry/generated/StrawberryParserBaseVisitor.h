
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "../Cpp/types/Value.h"
#include "StrawberryParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of StrawberryParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  StrawberryParserBaseVisitor : public StrawberryParserVisitor {
public:

  virtual Value visitScript(StrawberryParser::ScriptContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDeclaration(StrawberryParser::DeclarationContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitAction(StrawberryParser::ActionContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitScope(StrawberryParser::ScopeContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitStatement(StrawberryParser::StatementContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitReturnStat(StrawberryParser::ReturnStatContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitOnceStat(StrawberryParser::OnceStatContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitNextStat(StrawberryParser::NextStatContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitLastStat(StrawberryParser::LastStatContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitBreakStat(StrawberryParser::BreakStatContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitBody(StrawberryParser::BodyContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitControlFlow(StrawberryParser::ControlFlowContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitLoop(StrawberryParser::LoopContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitLoopScope(StrawberryParser::LoopScopeContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitLoopBody(StrawberryParser::LoopBodyContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitCompoundStatement(StrawberryParser::CompoundStatementContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitStatementCompound(StrawberryParser::StatementCompoundContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitIfScopeCompound(StrawberryParser::IfScopeCompoundContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitLoopScopeCompound(StrawberryParser::LoopScopeCompoundContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitIfRegexCompound(StrawberryParser::IfRegexCompoundContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitIfCompound(StrawberryParser::IfCompoundContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitIfStatement(StrawberryParser::IfStatementContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitExprIfScope(StrawberryParser::ExprIfScopeContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitPatternIfScope(StrawberryParser::PatternIfScopeContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitExprIfBody(StrawberryParser::ExprIfBodyContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitPatternIfBody(StrawberryParser::PatternIfBodyContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitIfKeyword(StrawberryParser::IfKeywordContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitUnlessKeyword(StrawberryParser::UnlessKeywordContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitForLoop(StrawberryParser::ForLoopContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitWhileLoop(StrawberryParser::WhileLoopContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitUntilLoop(StrawberryParser::UntilLoopContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitFnDeclaration(StrawberryParser::FnDeclarationContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitLambda(StrawberryParser::LambdaContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitParams(StrawberryParser::ParamsContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitParamsExpand(StrawberryParser::ParamsExpandContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitArgs(StrawberryParser::ArgsContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitArg(StrawberryParser::ArgContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitArgExpand(StrawberryParser::ArgExpandContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitLooseFnCallArg(StrawberryParser::LooseFnCallArgContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDefaultPattern(StrawberryParser::DefaultPatternContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitExprPattern(StrawberryParser::ExprPatternContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitWord(StrawberryParser::WordContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitWildCard(StrawberryParser::WildCardContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitOther(StrawberryParser::OtherContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitValue(StrawberryParser::ValueContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitPrefixExpr(StrawberryParser::PrefixExprContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitOpExpr(StrawberryParser::OpExprContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitSuffixExpr(StrawberryParser::SuffixExprContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitAssignExpr(StrawberryParser::AssignExprContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitLitExpr(StrawberryParser::LitExprContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitParenExpr(StrawberryParser::ParenExprContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitAccessExpr(StrawberryParser::AccessExprContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDStringLit(StrawberryParser::DStringLitContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitSStringLit(StrawberryParser::SStringLitContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitArrayLit(StrawberryParser::ArrayLitContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitNumLit(StrawberryParser::NumLitContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitIdentityString(StrawberryParser::IdentityStringContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDollarSignString(StrawberryParser::DollarSignStringContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitOtherString(StrawberryParser::OtherStringContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDeclareAssign(StrawberryParser::DeclareAssignContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitEqAssign(StrawberryParser::EqAssignContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitPowAssign(StrawberryParser::PowAssignContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitMultAssign(StrawberryParser::MultAssignContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDivAssign(StrawberryParser::DivAssignContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitModAssign(StrawberryParser::ModAssignContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitAddAssign(StrawberryParser::AddAssignContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitMinAssign(StrawberryParser::MinAssignContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitIncrem(StrawberryParser::IncremContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDecrem(StrawberryParser::DecremContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDotAccess(StrawberryParser::DotAccessContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitArrAccesss(StrawberryParser::ArrAccesssContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitIdAccess(StrawberryParser::IdAccessContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDefaultAccess(StrawberryParser::DefaultAccessContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitFnAccess(StrawberryParser::FnAccessContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitLooseFnCall(StrawberryParser::LooseFnCallContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitPow(StrawberryParser::PowContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitMult(StrawberryParser::MultContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDiv(StrawberryParser::DivContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitMod(StrawberryParser::ModContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitPlus(StrawberryParser::PlusContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitMin(StrawberryParser::MinContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitDefinedOr(StrawberryParser::DefinedOrContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitRangeOp(StrawberryParser::RangeOpContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitNegatePrefix(StrawberryParser::NegatePrefixContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitRefPrefix(StrawberryParser::RefPrefixContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitNegativePrefix(StrawberryParser::NegativePrefixContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitBoolEq(StrawberryParser::BoolEqContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitBoolNeq(StrawberryParser::BoolNeqContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitBoolGt(StrawberryParser::BoolGtContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitBoolGtEq(StrawberryParser::BoolGtEqContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitBoolLt(StrawberryParser::BoolLtContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitBoolLtEq(StrawberryParser::BoolLtEqContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitOr(StrawberryParser::OrContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitAnd(StrawberryParser::AndContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitOrDefault(StrawberryParser::OrDefaultContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }

  virtual Value visitExcitedSuff(StrawberryParser::ExcitedSuffContext *ctx) override {
    return std::any_cast<Value>(visitChildren(ctx));
  }


};

}  // namespace antlrcpptest
