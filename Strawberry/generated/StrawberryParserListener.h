
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "StrawberryParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by StrawberryParser.
 */
class  StrawberryParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterScript(StrawberryParser::ScriptContext *ctx) = 0;
  virtual void exitScript(StrawberryParser::ScriptContext *ctx) = 0;

  virtual void enterDeclaration(StrawberryParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(StrawberryParser::DeclarationContext *ctx) = 0;

  virtual void enterAction(StrawberryParser::ActionContext *ctx) = 0;
  virtual void exitAction(StrawberryParser::ActionContext *ctx) = 0;

  virtual void enterScope(StrawberryParser::ScopeContext *ctx) = 0;
  virtual void exitScope(StrawberryParser::ScopeContext *ctx) = 0;

  virtual void enterStatement(StrawberryParser::StatementContext *ctx) = 0;
  virtual void exitStatement(StrawberryParser::StatementContext *ctx) = 0;

  virtual void enterReturnStat(StrawberryParser::ReturnStatContext *ctx) = 0;
  virtual void exitReturnStat(StrawberryParser::ReturnStatContext *ctx) = 0;

  virtual void enterOnceStat(StrawberryParser::OnceStatContext *ctx) = 0;
  virtual void exitOnceStat(StrawberryParser::OnceStatContext *ctx) = 0;

  virtual void enterNextStat(StrawberryParser::NextStatContext *ctx) = 0;
  virtual void exitNextStat(StrawberryParser::NextStatContext *ctx) = 0;

  virtual void enterLastStat(StrawberryParser::LastStatContext *ctx) = 0;
  virtual void exitLastStat(StrawberryParser::LastStatContext *ctx) = 0;

  virtual void enterBreakStat(StrawberryParser::BreakStatContext *ctx) = 0;
  virtual void exitBreakStat(StrawberryParser::BreakStatContext *ctx) = 0;

  virtual void enterBody(StrawberryParser::BodyContext *ctx) = 0;
  virtual void exitBody(StrawberryParser::BodyContext *ctx) = 0;

  virtual void enterFnDeclaration(StrawberryParser::FnDeclarationContext *ctx) = 0;
  virtual void exitFnDeclaration(StrawberryParser::FnDeclarationContext *ctx) = 0;

  virtual void enterLambda(StrawberryParser::LambdaContext *ctx) = 0;
  virtual void exitLambda(StrawberryParser::LambdaContext *ctx) = 0;

  virtual void enterParams(StrawberryParser::ParamsContext *ctx) = 0;
  virtual void exitParams(StrawberryParser::ParamsContext *ctx) = 0;

  virtual void enterParamsExpand(StrawberryParser::ParamsExpandContext *ctx) = 0;
  virtual void exitParamsExpand(StrawberryParser::ParamsExpandContext *ctx) = 0;

  virtual void enterArgs(StrawberryParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(StrawberryParser::ArgsContext *ctx) = 0;

  virtual void enterArg(StrawberryParser::ArgContext *ctx) = 0;
  virtual void exitArg(StrawberryParser::ArgContext *ctx) = 0;

  virtual void enterArgExpand(StrawberryParser::ArgExpandContext *ctx) = 0;
  virtual void exitArgExpand(StrawberryParser::ArgExpandContext *ctx) = 0;

  virtual void enterLooseFnCallArg(StrawberryParser::LooseFnCallArgContext *ctx) = 0;
  virtual void exitLooseFnCallArg(StrawberryParser::LooseFnCallArgContext *ctx) = 0;

  virtual void enterControlFlow(StrawberryParser::ControlFlowContext *ctx) = 0;
  virtual void exitControlFlow(StrawberryParser::ControlFlowContext *ctx) = 0;

  virtual void enterLoop(StrawberryParser::LoopContext *ctx) = 0;
  virtual void exitLoop(StrawberryParser::LoopContext *ctx) = 0;

  virtual void enterCompoundStatement(StrawberryParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(StrawberryParser::CompoundStatementContext *ctx) = 0;

  virtual void enterCompoundAction(StrawberryParser::CompoundActionContext *ctx) = 0;
  virtual void exitCompoundAction(StrawberryParser::CompoundActionContext *ctx) = 0;

  virtual void enterIfScope(StrawberryParser::IfScopeContext *ctx) = 0;
  virtual void exitIfScope(StrawberryParser::IfScopeContext *ctx) = 0;

  virtual void enterIfBody(StrawberryParser::IfBodyContext *ctx) = 0;
  virtual void exitIfBody(StrawberryParser::IfBodyContext *ctx) = 0;

  virtual void enterIfKeyword(StrawberryParser::IfKeywordContext *ctx) = 0;
  virtual void exitIfKeyword(StrawberryParser::IfKeywordContext *ctx) = 0;

  virtual void enterUnlessKeyword(StrawberryParser::UnlessKeywordContext *ctx) = 0;
  virtual void exitUnlessKeyword(StrawberryParser::UnlessKeywordContext *ctx) = 0;

  virtual void enterForCompound(StrawberryParser::ForCompoundContext *ctx) = 0;
  virtual void exitForCompound(StrawberryParser::ForCompoundContext *ctx) = 0;

  virtual void enterWhileCompound(StrawberryParser::WhileCompoundContext *ctx) = 0;
  virtual void exitWhileCompound(StrawberryParser::WhileCompoundContext *ctx) = 0;

  virtual void enterUntilCompound(StrawberryParser::UntilCompoundContext *ctx) = 0;
  virtual void exitUntilCompound(StrawberryParser::UntilCompoundContext *ctx) = 0;

  virtual void enterValue(StrawberryParser::ValueContext *ctx) = 0;
  virtual void exitValue(StrawberryParser::ValueContext *ctx) = 0;

  virtual void enterLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext *ctx) = 0;
  virtual void exitLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext *ctx) = 0;

  virtual void enterPrefixExpr(StrawberryParser::PrefixExprContext *ctx) = 0;
  virtual void exitPrefixExpr(StrawberryParser::PrefixExprContext *ctx) = 0;

  virtual void enterOpExpr(StrawberryParser::OpExprContext *ctx) = 0;
  virtual void exitOpExpr(StrawberryParser::OpExprContext *ctx) = 0;

  virtual void enterAssignExpr(StrawberryParser::AssignExprContext *ctx) = 0;
  virtual void exitAssignExpr(StrawberryParser::AssignExprContext *ctx) = 0;

  virtual void enterLitExpr(StrawberryParser::LitExprContext *ctx) = 0;
  virtual void exitLitExpr(StrawberryParser::LitExprContext *ctx) = 0;

  virtual void enterParenExpr(StrawberryParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(StrawberryParser::ParenExprContext *ctx) = 0;

  virtual void enterAccessExpr(StrawberryParser::AccessExprContext *ctx) = 0;
  virtual void exitAccessExpr(StrawberryParser::AccessExprContext *ctx) = 0;

  virtual void enterDStringLit(StrawberryParser::DStringLitContext *ctx) = 0;
  virtual void exitDStringLit(StrawberryParser::DStringLitContext *ctx) = 0;

  virtual void enterSStringLit(StrawberryParser::SStringLitContext *ctx) = 0;
  virtual void exitSStringLit(StrawberryParser::SStringLitContext *ctx) = 0;

  virtual void enterArrayLit(StrawberryParser::ArrayLitContext *ctx) = 0;
  virtual void exitArrayLit(StrawberryParser::ArrayLitContext *ctx) = 0;

  virtual void enterNumLit(StrawberryParser::NumLitContext *ctx) = 0;
  virtual void exitNumLit(StrawberryParser::NumLitContext *ctx) = 0;

  virtual void enterDeclareAssign(StrawberryParser::DeclareAssignContext *ctx) = 0;
  virtual void exitDeclareAssign(StrawberryParser::DeclareAssignContext *ctx) = 0;

  virtual void enterEqAssign(StrawberryParser::EqAssignContext *ctx) = 0;
  virtual void exitEqAssign(StrawberryParser::EqAssignContext *ctx) = 0;

  virtual void enterPowAssign(StrawberryParser::PowAssignContext *ctx) = 0;
  virtual void exitPowAssign(StrawberryParser::PowAssignContext *ctx) = 0;

  virtual void enterMultAssign(StrawberryParser::MultAssignContext *ctx) = 0;
  virtual void exitMultAssign(StrawberryParser::MultAssignContext *ctx) = 0;

  virtual void enterDivAssign(StrawberryParser::DivAssignContext *ctx) = 0;
  virtual void exitDivAssign(StrawberryParser::DivAssignContext *ctx) = 0;

  virtual void enterModAssign(StrawberryParser::ModAssignContext *ctx) = 0;
  virtual void exitModAssign(StrawberryParser::ModAssignContext *ctx) = 0;

  virtual void enterAddAssign(StrawberryParser::AddAssignContext *ctx) = 0;
  virtual void exitAddAssign(StrawberryParser::AddAssignContext *ctx) = 0;

  virtual void enterMinAssign(StrawberryParser::MinAssignContext *ctx) = 0;
  virtual void exitMinAssign(StrawberryParser::MinAssignContext *ctx) = 0;

  virtual void enterIncrem(StrawberryParser::IncremContext *ctx) = 0;
  virtual void exitIncrem(StrawberryParser::IncremContext *ctx) = 0;

  virtual void enterDecrem(StrawberryParser::DecremContext *ctx) = 0;
  virtual void exitDecrem(StrawberryParser::DecremContext *ctx) = 0;

  virtual void enterDotAccess(StrawberryParser::DotAccessContext *ctx) = 0;
  virtual void exitDotAccess(StrawberryParser::DotAccessContext *ctx) = 0;

  virtual void enterArrAccesss(StrawberryParser::ArrAccesssContext *ctx) = 0;
  virtual void exitArrAccesss(StrawberryParser::ArrAccesssContext *ctx) = 0;

  virtual void enterIdAccess(StrawberryParser::IdAccessContext *ctx) = 0;
  virtual void exitIdAccess(StrawberryParser::IdAccessContext *ctx) = 0;

  virtual void enterDefaultAccess(StrawberryParser::DefaultAccessContext *ctx) = 0;
  virtual void exitDefaultAccess(StrawberryParser::DefaultAccessContext *ctx) = 0;

  virtual void enterFnAccess(StrawberryParser::FnAccessContext *ctx) = 0;
  virtual void exitFnAccess(StrawberryParser::FnAccessContext *ctx) = 0;

  virtual void enterLooseFnCall(StrawberryParser::LooseFnCallContext *ctx) = 0;
  virtual void exitLooseFnCall(StrawberryParser::LooseFnCallContext *ctx) = 0;

  virtual void enterNegatePrefix(StrawberryParser::NegatePrefixContext *ctx) = 0;
  virtual void exitNegatePrefix(StrawberryParser::NegatePrefixContext *ctx) = 0;

  virtual void enterRefPrefix(StrawberryParser::RefPrefixContext *ctx) = 0;
  virtual void exitRefPrefix(StrawberryParser::RefPrefixContext *ctx) = 0;

  virtual void enterNegativePrefix(StrawberryParser::NegativePrefixContext *ctx) = 0;
  virtual void exitNegativePrefix(StrawberryParser::NegativePrefixContext *ctx) = 0;

  virtual void enterReversePrefix(StrawberryParser::ReversePrefixContext *ctx) = 0;
  virtual void exitReversePrefix(StrawberryParser::ReversePrefixContext *ctx) = 0;

  virtual void enterPow(StrawberryParser::PowContext *ctx) = 0;
  virtual void exitPow(StrawberryParser::PowContext *ctx) = 0;

  virtual void enterMult(StrawberryParser::MultContext *ctx) = 0;
  virtual void exitMult(StrawberryParser::MultContext *ctx) = 0;

  virtual void enterDiv(StrawberryParser::DivContext *ctx) = 0;
  virtual void exitDiv(StrawberryParser::DivContext *ctx) = 0;

  virtual void enterMod(StrawberryParser::ModContext *ctx) = 0;
  virtual void exitMod(StrawberryParser::ModContext *ctx) = 0;

  virtual void enterPlus(StrawberryParser::PlusContext *ctx) = 0;
  virtual void exitPlus(StrawberryParser::PlusContext *ctx) = 0;

  virtual void enterMin(StrawberryParser::MinContext *ctx) = 0;
  virtual void exitMin(StrawberryParser::MinContext *ctx) = 0;

  virtual void enterDefinedOr(StrawberryParser::DefinedOrContext *ctx) = 0;
  virtual void exitDefinedOr(StrawberryParser::DefinedOrContext *ctx) = 0;

  virtual void enterRangeOp(StrawberryParser::RangeOpContext *ctx) = 0;
  virtual void exitRangeOp(StrawberryParser::RangeOpContext *ctx) = 0;

  virtual void enterBoolEq(StrawberryParser::BoolEqContext *ctx) = 0;
  virtual void exitBoolEq(StrawberryParser::BoolEqContext *ctx) = 0;

  virtual void enterBoolNeq(StrawberryParser::BoolNeqContext *ctx) = 0;
  virtual void exitBoolNeq(StrawberryParser::BoolNeqContext *ctx) = 0;

  virtual void enterBoolGt(StrawberryParser::BoolGtContext *ctx) = 0;
  virtual void exitBoolGt(StrawberryParser::BoolGtContext *ctx) = 0;

  virtual void enterBoolGtEq(StrawberryParser::BoolGtEqContext *ctx) = 0;
  virtual void exitBoolGtEq(StrawberryParser::BoolGtEqContext *ctx) = 0;

  virtual void enterBoolLt(StrawberryParser::BoolLtContext *ctx) = 0;
  virtual void exitBoolLt(StrawberryParser::BoolLtContext *ctx) = 0;

  virtual void enterBoolLtEq(StrawberryParser::BoolLtEqContext *ctx) = 0;
  virtual void exitBoolLtEq(StrawberryParser::BoolLtEqContext *ctx) = 0;

  virtual void enterOr(StrawberryParser::OrContext *ctx) = 0;
  virtual void exitOr(StrawberryParser::OrContext *ctx) = 0;

  virtual void enterAnd(StrawberryParser::AndContext *ctx) = 0;
  virtual void exitAnd(StrawberryParser::AndContext *ctx) = 0;


};

}  // namespace antlrcpptest
