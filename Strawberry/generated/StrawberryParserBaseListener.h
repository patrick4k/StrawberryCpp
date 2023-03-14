
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

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

  virtual void enterDeclaration(StrawberryParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(StrawberryParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterAction(StrawberryParser::ActionContext * /*ctx*/) override { }
  virtual void exitAction(StrawberryParser::ActionContext * /*ctx*/) override { }

  virtual void enterScope(StrawberryParser::ScopeContext * /*ctx*/) override { }
  virtual void exitScope(StrawberryParser::ScopeContext * /*ctx*/) override { }

  virtual void enterStatement(StrawberryParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(StrawberryParser::StatementContext * /*ctx*/) override { }

  virtual void enterReturnStat(StrawberryParser::ReturnStatContext * /*ctx*/) override { }
  virtual void exitReturnStat(StrawberryParser::ReturnStatContext * /*ctx*/) override { }

  virtual void enterOnceStat(StrawberryParser::OnceStatContext * /*ctx*/) override { }
  virtual void exitOnceStat(StrawberryParser::OnceStatContext * /*ctx*/) override { }

  virtual void enterNextStat(StrawberryParser::NextStatContext * /*ctx*/) override { }
  virtual void exitNextStat(StrawberryParser::NextStatContext * /*ctx*/) override { }

  virtual void enterLastStat(StrawberryParser::LastStatContext * /*ctx*/) override { }
  virtual void exitLastStat(StrawberryParser::LastStatContext * /*ctx*/) override { }

  virtual void enterBreakStat(StrawberryParser::BreakStatContext * /*ctx*/) override { }
  virtual void exitBreakStat(StrawberryParser::BreakStatContext * /*ctx*/) override { }

  virtual void enterBody(StrawberryParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(StrawberryParser::BodyContext * /*ctx*/) override { }

  virtual void enterControlFlow(StrawberryParser::ControlFlowContext * /*ctx*/) override { }
  virtual void exitControlFlow(StrawberryParser::ControlFlowContext * /*ctx*/) override { }

  virtual void enterLoop(StrawberryParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(StrawberryParser::LoopContext * /*ctx*/) override { }

  virtual void enterLoopScope(StrawberryParser::LoopScopeContext * /*ctx*/) override { }
  virtual void exitLoopScope(StrawberryParser::LoopScopeContext * /*ctx*/) override { }

  virtual void enterLoopBody(StrawberryParser::LoopBodyContext * /*ctx*/) override { }
  virtual void exitLoopBody(StrawberryParser::LoopBodyContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(StrawberryParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(StrawberryParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterStatementCompound(StrawberryParser::StatementCompoundContext * /*ctx*/) override { }
  virtual void exitStatementCompound(StrawberryParser::StatementCompoundContext * /*ctx*/) override { }

  virtual void enterIfScopeCompound(StrawberryParser::IfScopeCompoundContext * /*ctx*/) override { }
  virtual void exitIfScopeCompound(StrawberryParser::IfScopeCompoundContext * /*ctx*/) override { }

  virtual void enterLoopScopeCompound(StrawberryParser::LoopScopeCompoundContext * /*ctx*/) override { }
  virtual void exitLoopScopeCompound(StrawberryParser::LoopScopeCompoundContext * /*ctx*/) override { }

  virtual void enterIfRegexCompound(StrawberryParser::IfRegexCompoundContext * /*ctx*/) override { }
  virtual void exitIfRegexCompound(StrawberryParser::IfRegexCompoundContext * /*ctx*/) override { }

  virtual void enterIfCompound(StrawberryParser::IfCompoundContext * /*ctx*/) override { }
  virtual void exitIfCompound(StrawberryParser::IfCompoundContext * /*ctx*/) override { }

  virtual void enterIfStatement(StrawberryParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(StrawberryParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterExprIfScope(StrawberryParser::ExprIfScopeContext * /*ctx*/) override { }
  virtual void exitExprIfScope(StrawberryParser::ExprIfScopeContext * /*ctx*/) override { }

  virtual void enterPatternIfScope(StrawberryParser::PatternIfScopeContext * /*ctx*/) override { }
  virtual void exitPatternIfScope(StrawberryParser::PatternIfScopeContext * /*ctx*/) override { }

  virtual void enterExprIfBody(StrawberryParser::ExprIfBodyContext * /*ctx*/) override { }
  virtual void exitExprIfBody(StrawberryParser::ExprIfBodyContext * /*ctx*/) override { }

  virtual void enterPatternIfBody(StrawberryParser::PatternIfBodyContext * /*ctx*/) override { }
  virtual void exitPatternIfBody(StrawberryParser::PatternIfBodyContext * /*ctx*/) override { }

  virtual void enterIfKeyword(StrawberryParser::IfKeywordContext * /*ctx*/) override { }
  virtual void exitIfKeyword(StrawberryParser::IfKeywordContext * /*ctx*/) override { }

  virtual void enterUnlessKeyword(StrawberryParser::UnlessKeywordContext * /*ctx*/) override { }
  virtual void exitUnlessKeyword(StrawberryParser::UnlessKeywordContext * /*ctx*/) override { }

  virtual void enterForLoop(StrawberryParser::ForLoopContext * /*ctx*/) override { }
  virtual void exitForLoop(StrawberryParser::ForLoopContext * /*ctx*/) override { }

  virtual void enterWhileLoop(StrawberryParser::WhileLoopContext * /*ctx*/) override { }
  virtual void exitWhileLoop(StrawberryParser::WhileLoopContext * /*ctx*/) override { }

  virtual void enterUntilLoop(StrawberryParser::UntilLoopContext * /*ctx*/) override { }
  virtual void exitUntilLoop(StrawberryParser::UntilLoopContext * /*ctx*/) override { }

  virtual void enterFnDeclaration(StrawberryParser::FnDeclarationContext * /*ctx*/) override { }
  virtual void exitFnDeclaration(StrawberryParser::FnDeclarationContext * /*ctx*/) override { }

  virtual void enterLambda(StrawberryParser::LambdaContext * /*ctx*/) override { }
  virtual void exitLambda(StrawberryParser::LambdaContext * /*ctx*/) override { }

  virtual void enterParams(StrawberryParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(StrawberryParser::ParamsContext * /*ctx*/) override { }

  virtual void enterParamsExpand(StrawberryParser::ParamsExpandContext * /*ctx*/) override { }
  virtual void exitParamsExpand(StrawberryParser::ParamsExpandContext * /*ctx*/) override { }

  virtual void enterArgs(StrawberryParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(StrawberryParser::ArgsContext * /*ctx*/) override { }

  virtual void enterArg(StrawberryParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(StrawberryParser::ArgContext * /*ctx*/) override { }

  virtual void enterArgExpand(StrawberryParser::ArgExpandContext * /*ctx*/) override { }
  virtual void exitArgExpand(StrawberryParser::ArgExpandContext * /*ctx*/) override { }

  virtual void enterLooseFnCallArg(StrawberryParser::LooseFnCallArgContext * /*ctx*/) override { }
  virtual void exitLooseFnCallArg(StrawberryParser::LooseFnCallArgContext * /*ctx*/) override { }

  virtual void enterDefaultPattern(StrawberryParser::DefaultPatternContext * /*ctx*/) override { }
  virtual void exitDefaultPattern(StrawberryParser::DefaultPatternContext * /*ctx*/) override { }

  virtual void enterExprPattern(StrawberryParser::ExprPatternContext * /*ctx*/) override { }
  virtual void exitExprPattern(StrawberryParser::ExprPatternContext * /*ctx*/) override { }

  virtual void enterWord(StrawberryParser::WordContext * /*ctx*/) override { }
  virtual void exitWord(StrawberryParser::WordContext * /*ctx*/) override { }

  virtual void enterWildCard(StrawberryParser::WildCardContext * /*ctx*/) override { }
  virtual void exitWildCard(StrawberryParser::WildCardContext * /*ctx*/) override { }

  virtual void enterOther(StrawberryParser::OtherContext * /*ctx*/) override { }
  virtual void exitOther(StrawberryParser::OtherContext * /*ctx*/) override { }

  virtual void enterValue(StrawberryParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(StrawberryParser::ValueContext * /*ctx*/) override { }

  virtual void enterLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext * /*ctx*/) override { }
  virtual void exitLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext * /*ctx*/) override { }

  virtual void enterPrefixExpr(StrawberryParser::PrefixExprContext * /*ctx*/) override { }
  virtual void exitPrefixExpr(StrawberryParser::PrefixExprContext * /*ctx*/) override { }

  virtual void enterOpExpr(StrawberryParser::OpExprContext * /*ctx*/) override { }
  virtual void exitOpExpr(StrawberryParser::OpExprContext * /*ctx*/) override { }

  virtual void enterSuffixExpr(StrawberryParser::SuffixExprContext * /*ctx*/) override { }
  virtual void exitSuffixExpr(StrawberryParser::SuffixExprContext * /*ctx*/) override { }

  virtual void enterAssignExpr(StrawberryParser::AssignExprContext * /*ctx*/) override { }
  virtual void exitAssignExpr(StrawberryParser::AssignExprContext * /*ctx*/) override { }

  virtual void enterLitExpr(StrawberryParser::LitExprContext * /*ctx*/) override { }
  virtual void exitLitExpr(StrawberryParser::LitExprContext * /*ctx*/) override { }

  virtual void enterParenExpr(StrawberryParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(StrawberryParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterAccessExpr(StrawberryParser::AccessExprContext * /*ctx*/) override { }
  virtual void exitAccessExpr(StrawberryParser::AccessExprContext * /*ctx*/) override { }

  virtual void enterDStringLit(StrawberryParser::DStringLitContext * /*ctx*/) override { }
  virtual void exitDStringLit(StrawberryParser::DStringLitContext * /*ctx*/) override { }

  virtual void enterSStringLit(StrawberryParser::SStringLitContext * /*ctx*/) override { }
  virtual void exitSStringLit(StrawberryParser::SStringLitContext * /*ctx*/) override { }

  virtual void enterArrayLit(StrawberryParser::ArrayLitContext * /*ctx*/) override { }
  virtual void exitArrayLit(StrawberryParser::ArrayLitContext * /*ctx*/) override { }

  virtual void enterNumLit(StrawberryParser::NumLitContext * /*ctx*/) override { }
  virtual void exitNumLit(StrawberryParser::NumLitContext * /*ctx*/) override { }

  virtual void enterIdentityString(StrawberryParser::IdentityStringContext * /*ctx*/) override { }
  virtual void exitIdentityString(StrawberryParser::IdentityStringContext * /*ctx*/) override { }

  virtual void enterDollarSignString(StrawberryParser::DollarSignStringContext * /*ctx*/) override { }
  virtual void exitDollarSignString(StrawberryParser::DollarSignStringContext * /*ctx*/) override { }

  virtual void enterOtherString(StrawberryParser::OtherStringContext * /*ctx*/) override { }
  virtual void exitOtherString(StrawberryParser::OtherStringContext * /*ctx*/) override { }

  virtual void enterDeclareAssign(StrawberryParser::DeclareAssignContext * /*ctx*/) override { }
  virtual void exitDeclareAssign(StrawberryParser::DeclareAssignContext * /*ctx*/) override { }

  virtual void enterEqAssign(StrawberryParser::EqAssignContext * /*ctx*/) override { }
  virtual void exitEqAssign(StrawberryParser::EqAssignContext * /*ctx*/) override { }

  virtual void enterPowAssign(StrawberryParser::PowAssignContext * /*ctx*/) override { }
  virtual void exitPowAssign(StrawberryParser::PowAssignContext * /*ctx*/) override { }

  virtual void enterMultAssign(StrawberryParser::MultAssignContext * /*ctx*/) override { }
  virtual void exitMultAssign(StrawberryParser::MultAssignContext * /*ctx*/) override { }

  virtual void enterDivAssign(StrawberryParser::DivAssignContext * /*ctx*/) override { }
  virtual void exitDivAssign(StrawberryParser::DivAssignContext * /*ctx*/) override { }

  virtual void enterModAssign(StrawberryParser::ModAssignContext * /*ctx*/) override { }
  virtual void exitModAssign(StrawberryParser::ModAssignContext * /*ctx*/) override { }

  virtual void enterAddAssign(StrawberryParser::AddAssignContext * /*ctx*/) override { }
  virtual void exitAddAssign(StrawberryParser::AddAssignContext * /*ctx*/) override { }

  virtual void enterMinAssign(StrawberryParser::MinAssignContext * /*ctx*/) override { }
  virtual void exitMinAssign(StrawberryParser::MinAssignContext * /*ctx*/) override { }

  virtual void enterIncrem(StrawberryParser::IncremContext * /*ctx*/) override { }
  virtual void exitIncrem(StrawberryParser::IncremContext * /*ctx*/) override { }

  virtual void enterDecrem(StrawberryParser::DecremContext * /*ctx*/) override { }
  virtual void exitDecrem(StrawberryParser::DecremContext * /*ctx*/) override { }

  virtual void enterDotAccess(StrawberryParser::DotAccessContext * /*ctx*/) override { }
  virtual void exitDotAccess(StrawberryParser::DotAccessContext * /*ctx*/) override { }

  virtual void enterArrAccesss(StrawberryParser::ArrAccesssContext * /*ctx*/) override { }
  virtual void exitArrAccesss(StrawberryParser::ArrAccesssContext * /*ctx*/) override { }

  virtual void enterIdAccess(StrawberryParser::IdAccessContext * /*ctx*/) override { }
  virtual void exitIdAccess(StrawberryParser::IdAccessContext * /*ctx*/) override { }

  virtual void enterDefaultAccess(StrawberryParser::DefaultAccessContext * /*ctx*/) override { }
  virtual void exitDefaultAccess(StrawberryParser::DefaultAccessContext * /*ctx*/) override { }

  virtual void enterFnAccess(StrawberryParser::FnAccessContext * /*ctx*/) override { }
  virtual void exitFnAccess(StrawberryParser::FnAccessContext * /*ctx*/) override { }

  virtual void enterLooseFnCall(StrawberryParser::LooseFnCallContext * /*ctx*/) override { }
  virtual void exitLooseFnCall(StrawberryParser::LooseFnCallContext * /*ctx*/) override { }

  virtual void enterPow(StrawberryParser::PowContext * /*ctx*/) override { }
  virtual void exitPow(StrawberryParser::PowContext * /*ctx*/) override { }

  virtual void enterMult(StrawberryParser::MultContext * /*ctx*/) override { }
  virtual void exitMult(StrawberryParser::MultContext * /*ctx*/) override { }

  virtual void enterDiv(StrawberryParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(StrawberryParser::DivContext * /*ctx*/) override { }

  virtual void enterMod(StrawberryParser::ModContext * /*ctx*/) override { }
  virtual void exitMod(StrawberryParser::ModContext * /*ctx*/) override { }

  virtual void enterPlus(StrawberryParser::PlusContext * /*ctx*/) override { }
  virtual void exitPlus(StrawberryParser::PlusContext * /*ctx*/) override { }

  virtual void enterMin(StrawberryParser::MinContext * /*ctx*/) override { }
  virtual void exitMin(StrawberryParser::MinContext * /*ctx*/) override { }

  virtual void enterDefinedOr(StrawberryParser::DefinedOrContext * /*ctx*/) override { }
  virtual void exitDefinedOr(StrawberryParser::DefinedOrContext * /*ctx*/) override { }

  virtual void enterRangeOp(StrawberryParser::RangeOpContext * /*ctx*/) override { }
  virtual void exitRangeOp(StrawberryParser::RangeOpContext * /*ctx*/) override { }

  virtual void enterNegatePrefix(StrawberryParser::NegatePrefixContext * /*ctx*/) override { }
  virtual void exitNegatePrefix(StrawberryParser::NegatePrefixContext * /*ctx*/) override { }

  virtual void enterRefPrefix(StrawberryParser::RefPrefixContext * /*ctx*/) override { }
  virtual void exitRefPrefix(StrawberryParser::RefPrefixContext * /*ctx*/) override { }

  virtual void enterNegativePrefix(StrawberryParser::NegativePrefixContext * /*ctx*/) override { }
  virtual void exitNegativePrefix(StrawberryParser::NegativePrefixContext * /*ctx*/) override { }

  virtual void enterBoolEq(StrawberryParser::BoolEqContext * /*ctx*/) override { }
  virtual void exitBoolEq(StrawberryParser::BoolEqContext * /*ctx*/) override { }

  virtual void enterBoolNeq(StrawberryParser::BoolNeqContext * /*ctx*/) override { }
  virtual void exitBoolNeq(StrawberryParser::BoolNeqContext * /*ctx*/) override { }

  virtual void enterBoolGt(StrawberryParser::BoolGtContext * /*ctx*/) override { }
  virtual void exitBoolGt(StrawberryParser::BoolGtContext * /*ctx*/) override { }

  virtual void enterBoolGtEq(StrawberryParser::BoolGtEqContext * /*ctx*/) override { }
  virtual void exitBoolGtEq(StrawberryParser::BoolGtEqContext * /*ctx*/) override { }

  virtual void enterBoolLt(StrawberryParser::BoolLtContext * /*ctx*/) override { }
  virtual void exitBoolLt(StrawberryParser::BoolLtContext * /*ctx*/) override { }

  virtual void enterBoolLtEq(StrawberryParser::BoolLtEqContext * /*ctx*/) override { }
  virtual void exitBoolLtEq(StrawberryParser::BoolLtEqContext * /*ctx*/) override { }

  virtual void enterOr(StrawberryParser::OrContext * /*ctx*/) override { }
  virtual void exitOr(StrawberryParser::OrContext * /*ctx*/) override { }

  virtual void enterAnd(StrawberryParser::AndContext * /*ctx*/) override { }
  virtual void exitAnd(StrawberryParser::AndContext * /*ctx*/) override { }

  virtual void enterOrDefault(StrawberryParser::OrDefaultContext * /*ctx*/) override { }
  virtual void exitOrDefault(StrawberryParser::OrDefaultContext * /*ctx*/) override { }

  virtual void enterExcitedSuff(StrawberryParser::ExcitedSuffContext * /*ctx*/) override { }
  virtual void exitExcitedSuff(StrawberryParser::ExcitedSuffContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
