//
// Created by Patrick on 4/6/2023.
//

#ifndef LIBANTLR4_STRAWBERRYINTERPRETER_H
#define LIBANTLR4_STRAWBERRYINTERPRETER_H

#include "StrawberryAllocator.h"

namespace antlrcpptest {

class StrawberryInterpreter : public StrawberryAllocator, public std::enable_shared_from_this<StrawberryInterpreter> {

public:
    std::any visitAction_(StrawberryParser::Action_Context *ctx) override;
    std::any visitScript_(StrawberryParser::Script_Context *ctx) override;
    std::any visitScope(StrawberryParser::ScopeContext *ctx) override;
    std::any visitReturnStat(StrawberryParser::ReturnStatContext *ctx) override;
    std::any visitOnceStat(StrawberryParser::OnceStatContext *ctx) override;
    std::any visitNextStat(StrawberryParser::NextStatContext *ctx) override;
    std::any visitLastStat(StrawberryParser::LastStatContext *ctx) override;
    std::any visitBreakStat(StrawberryParser::BreakStatContext *ctx) override;
    std::any visitLoopOnScope(StrawberryParser::LoopOnScopeContext *ctx) override;
    std::any visitLoopOnBody(StrawberryParser::LoopOnBodyContext *ctx) override;
    std::any visitDoWhileLoop(StrawberryParser::DoWhileLoopContext *ctx) override;
    std::any visitCompoundStatement(StrawberryParser::CompoundStatementContext *ctx) override;
    std::any visitStatementCompound(StrawberryParser::StatementCompoundContext *ctx) override;
    std::any visitIfScopeCompound(StrawberryParser::IfScopeCompoundContext *ctx) override;
    std::any visitLoopScopeCompound(StrawberryParser::LoopScopeCompoundContext *ctx) override;
    std::any visitIfCompound(StrawberryParser::IfCompoundContext *ctx) override;
    std::any visitIfScope(StrawberryParser::IfScopeContext *ctx) override;
    std::any visitIfBody(StrawberryParser::IfBodyContext *ctx) override;
    std::any visitIfKeyword(StrawberryParser::IfKeywordContext *ctx) override;
    std::any visitUnlessKeyword(StrawberryParser::UnlessKeywordContext *ctx) override;
    std::any visitForLoop(StrawberryParser::ForLoopContext *ctx) override;
    std::any visitLoopLoop(StrawberryParser::LoopLoopContext *ctx) override;
    std::any visitConditionalLoop(StrawberryParser::ConditionalLoopContext *ctx) override;
    std::any visitWhileLoop(StrawberryParser::WhileLoopContext *ctx) override;
    std::any visitUntilLoop(StrawberryParser::UntilLoopContext *ctx) override;
    std::any visitFnDeclaration(StrawberryParser::FnDeclarationContext *ctx) override;
    std::any visitLambda(StrawberryParser::LambdaContext *ctx) override;
    std::any visitParams(StrawberryParser::ParamsContext *ctx) override;
    std::any visitParamsExpand(StrawberryParser::ParamsExpandContext *ctx) override;
    std::any visitArgs(StrawberryParser::ArgsContext *ctx) override;
    std::any visitArg(StrawberryParser::ArgContext *ctx) override;
    std::any visitArgExpand(StrawberryParser::ArgExpandContext *ctx) override;
    std::any visitRangeArg(StrawberryParser::RangeArgContext *ctx) override;
    std::any visitMatchRegex(StrawberryParser::MatchRegexContext *ctx) override;
    std::any visitLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext *ctx) override;
    std::any visitPrefixExpr(StrawberryParser::PrefixExprContext *ctx) override;
    std::any visitDefaultSuffixExpr(StrawberryParser::DefaultSuffixExprContext *ctx) override;
    std::any visitOpExpr1(StrawberryParser::OpExpr1Context *ctx) override;
    std::any visitOpExpr2(StrawberryParser::OpExpr2Context *ctx) override;
    std::any visitOpExpr3(StrawberryParser::OpExpr3Context *ctx) override;
    std::any visitOpExpr4(StrawberryParser::OpExpr4Context *ctx) override;
    std::any visitOpExpr5(StrawberryParser::OpExpr5Context *ctx) override;
    std::any visitOpExpr6(StrawberryParser::OpExpr6Context *ctx) override;
    std::any visitSuffixExpr(StrawberryParser::SuffixExprContext *ctx) override;
    std::any visitAssignExpr(StrawberryParser::AssignExprContext *ctx) override;
    std::any visitFnAccess(StrawberryParser::FnAccessContext *ctx) override;
    std::any visitParenExpr(StrawberryParser::ParenExprContext *ctx) override;
    std::any visitDStringLit(StrawberryParser::DStringLitContext *ctx) override;
    std::any visitSStringLit(StrawberryParser::SStringLitContext *ctx) override;
    std::any visitArrayLit(StrawberryParser::ArrayLitContext *ctx) override;
    std::any visitHashLit(StrawberryParser::HashLitContext *ctx) override;
    std::any visitNumLit(StrawberryParser::NumLitContext *ctx) override;
    std::any visitPairValue(StrawberryParser::PairValueContext *ctx) override;
    std::any visitPairArgs(StrawberryParser::PairArgsContext *ctx) override;
    std::any visitTrueLit(StrawberryParser::TrueLitContext *ctx) override;
    std::any visitFalseLit(StrawberryParser::FalseLitContext *ctx) override;
    std::any visitNullLit(StrawberryParser::NullLitContext *ctx) override;
    std::any visitDeclareAssign(StrawberryParser::DeclareAssignContext *ctx) override;
    std::any visitEqAssign(StrawberryParser::EqAssignContext *ctx) override;
    std::any visitEqAssignArgs(StrawberryParser::EqAssignArgsContext *ctx) override;
    std::any visitSetRefAssign(StrawberryParser::SetRefAssignContext *ctx) override;
    std::any visitSetRefAssignArgs(StrawberryParser::SetRefAssignArgsContext *ctx) override;
    std::any visitDefaultEqAssign(StrawberryParser::DefaultEqAssignContext *ctx) override;
    std::any visitPowAssign(StrawberryParser::PowAssignContext *ctx) override;
    std::any visitMultAssign(StrawberryParser::MultAssignContext *ctx) override;
    std::any visitDivAssign(StrawberryParser::DivAssignContext *ctx) override;
    std::any visitModAssign(StrawberryParser::ModAssignContext *ctx) override;
    std::any visitAddAssign(StrawberryParser::AddAssignContext *ctx) override;
    std::any visitMinAssign(StrawberryParser::MinAssignContext *ctx) override;
    std::any visitIncrem(StrawberryParser::IncremContext *ctx) override;
    std::any visitDecrem(StrawberryParser::DecremContext *ctx) override;
    std::any visitNoInitVarDeclar(StrawberryParser::NoInitVarDeclarContext *ctx) override;
    std::any visitInitVarDeclar(StrawberryParser::InitVarDeclarContext *ctx) override;
    std::any visitInitVarDeclarArgs(StrawberryParser::InitVarDeclarArgsContext *ctx) override;
    std::any visitDotAccess(StrawberryParser::DotAccessContext *ctx) override;
    std::any visitArrAccess(StrawberryParser::ArrAccessContext *ctx) override;
    std::any visitArrAccessArgs(StrawberryParser::ArrAccessArgsContext *ctx) override;
    std::any visitDerefExpr(StrawberryParser::DerefExprContext *ctx) override;
    std::any visitIdAccess(StrawberryParser::IdAccessContext *ctx) override;
    std::any visitDefaultAccess(StrawberryParser::DefaultAccessContext *ctx) override;
    std::any visitIdReference(StrawberryParser::IdReferenceContext *ctx) override;
    std::any visitLooseFnCall(StrawberryParser::LooseFnCallContext *ctx) override;
    std::any visitNegatePrefix(StrawberryParser::NegatePrefixContext *ctx) override;
    std::any visitNegativePrefix(StrawberryParser::NegativePrefixContext *ctx) override;
    std::any visitSizePrefix(StrawberryParser::SizePrefixContext *ctx) override;
    std::any visitExcitedSuff(StrawberryParser::ExcitedSuffContext *ctx) override;
    std::any visitPowOp(StrawberryParser::PowOpContext *ctx) override;
    std::any visitMultOp(StrawberryParser::MultOpContext *ctx) override;
    std::any visitDivOp(StrawberryParser::DivOpContext *ctx) override;
    std::any visitModOp(StrawberryParser::ModOpContext *ctx) override;
    std::any visitPlusOp(StrawberryParser::PlusOpContext *ctx) override;
    std::any visitMinOp(StrawberryParser::MinOpContext *ctx) override;
    std::any visitDefinedOrOp(StrawberryParser::DefinedOrOpContext *ctx) override;
    std::any visitBoolEqOp(StrawberryParser::BoolEqOpContext *ctx) override;
    std::any visitBoolDeepEqOp(StrawberryParser::BoolDeepEqOpContext *ctx) override;
    std::any visitBoolNeqOp(StrawberryParser::BoolNeqOpContext *ctx) override;
    std::any visitBoolDeepNeqOp(StrawberryParser::BoolDeepNeqOpContext *ctx) override;
    std::any visitBoolGtOp(StrawberryParser::BoolGtOpContext *ctx) override;
    std::any visitBoolGtEqOp(StrawberryParser::BoolGtEqOpContext *ctx) override;
    std::any visitBoolLtOp(StrawberryParser::BoolLtOpContext *ctx) override;
    std::any visitBoolLtEqOp(StrawberryParser::BoolLtEqOpContext *ctx) override;
    std::any visitOrOp(StrawberryParser::OrOpContext *ctx) override;
    std::any visitBitOrOp(StrawberryParser::BitOrOpContext *ctx) override;
    std::any visitAndOp(StrawberryParser::AndOpContext *ctx) override;
    std::any visitBitAndOp(StrawberryParser::BitAndOpContext *ctx) override;
    std::any visitMatchSuff(StrawberryParser::MatchSuffContext *ctx) override;
};

}

#endif //LIBANTLR4_STRAWBERRYINTERPRETER_H
