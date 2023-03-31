//
// Created by patrick on 3/10/23.
//

#include "StrawberryInterpreter.h"

#include <memory>
#include "types/expressions/Number.h"
#include "types/containers/List.h"
#include "types/expressions/String.h"
#include "types/containers/Pair.h"
#include "types/containers/Hash.h"

namespace antlrcpptest {

    void StrawberryInterpreter::testRef() {

        auto x = declare("x", std::make_shared<Number>(11)); // new
        auto y = declare("y", get_from_memory("x")->copy_value()); // copy
        auto z = declare("z", get_from_memory("x")); // reference

        assign("x", std::make_shared<Number>(22));

        std::cout << "x = " << x->toString() << std::endl;
        std::cout << "y = " << y->toString() << std::endl;
        std::cout << "z = " << z->toString() << std::endl;
    }

    void StrawberryInterpreter::testList() {
        auto lref = declare("l", std::make_shared<List>())->deref<List>();
        lref->append(std::make_shared<Number>(1));
        lref->append(std::make_shared<Number>(2));
        lref->append(std::make_shared<Number>(3));

        std::cout << get_from_memory("l")->deref<List>()->get(0)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(1)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(2)->toString() << std::endl << std::endl;

        std::cout << get_from_memory("l")->deref<List>()->get(-0)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(-1)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(-2)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(-3)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(-4)->toString() << std::endl;
    }

    void StrawberryInterpreter::moreListTesting() {

        auto x = declare("x", std::make_shared<Number>(12));
        auto l = declare("l", std::make_shared<List>())->deref<List>();

        l->append(x->copy_value());

        std::cout << l->toString() << std::endl;

        x->set(std::make_shared<Number>(1));

        std::cout << l->toString();
    }

    void StrawberryInterpreter::pairHashTesting() {

        auto s1 = declare("s1", std::make_shared<String>("key1"));
        auto s2 = declare("s2", std::make_shared<String>("key2"));

        auto n1 = declare("n1", std::make_shared<Number>(1));
        auto n2 = declare("n2", std::make_shared<Number>(2));

        auto p1 = declare("p1", std::make_shared<Pair>(s1,n1->copy_to_reference()));
        auto p2 = declare("p2", std::make_shared<Pair>(s2,n1));

        assign("n1", std::make_shared<Number>(2));
        std::cout << "p = " << get_from_memory("p1")->toString() << std::endl;

        auto hash = declare("hash", std::make_shared<Hash>());
        hash->deref<Container>()->append(p1);
        hash->deref<Container>()->append(p2);

        std::cout << "hash = " << hash->toString();

    }

    void StrawberryInterpreter::castTesting() {

        auto ptr = declare("x", std::make_shared<Number>(1));
        auto castedCorrect = ptr->deref()->as<Number>();
        auto castedBad = ptr->deref()->as<List>();

        std::cout << std::endl << ptr->toString();

    }

/* ================================================ VISITOR OVERRIDES =============================================== */
    std::any StrawberryInterpreter::visitScript_(StrawberryParser::Script_Context *ctx) {
        this->scope_in();
        StrawberryParserBaseVisitor::visitScript_(ctx);
        print_memory();
        this->scope_out();
        return 0;
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Loop Keywords */
    std::any StrawberryInterpreter::visitReturnStat(StrawberryParser::ReturnStatContext *ctx) {
        return StrawberryParserBaseVisitor::visitReturnStat(ctx);
    }

    std::any StrawberryInterpreter::visitOnceStat(StrawberryParser::OnceStatContext *ctx) {
        return StrawberryParserBaseVisitor::visitOnceStat(ctx);
    }

    std::any StrawberryInterpreter::visitNextStat(StrawberryParser::NextStatContext *ctx) {
        return StrawberryParserBaseVisitor::visitNextStat(ctx);
    }

    std::any StrawberryInterpreter::visitLastStat(StrawberryParser::LastStatContext *ctx) {
        return StrawberryParserBaseVisitor::visitLastStat(ctx);
    }

    std::any StrawberryInterpreter::visitBreakStat(StrawberryParser::BreakStatContext *ctx) {
        return StrawberryParserBaseVisitor::visitBreakStat(ctx);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Control Flow */
    std::any StrawberryInterpreter::visitLoopScope(StrawberryParser::LoopScopeContext *ctx) {
        return StrawberryParserBaseVisitor::visitLoopScope(ctx);
    }

    std::any StrawberryInterpreter::visitLoopBody(StrawberryParser::LoopBodyContext *ctx) {
        return StrawberryParserBaseVisitor::visitLoopBody(ctx);
    }

    std::any StrawberryInterpreter::visitDoWhileLoop(StrawberryParser::DoWhileLoopContext *ctx) {
        return StrawberryParserBaseVisitor::visitDoWhileLoop(ctx);
    }

    std::any StrawberryInterpreter::visitCompoundStatement(StrawberryParser::CompoundStatementContext *ctx) {
        return StrawberryParserBaseVisitor::visitCompoundStatement(ctx);
    }

    std::any StrawberryInterpreter::visitStatementCompound(StrawberryParser::StatementCompoundContext *ctx) {
        return StrawberryParserBaseVisitor::visitStatementCompound(ctx);
    }

    std::any StrawberryInterpreter::visitIfScopeCompound(StrawberryParser::IfScopeCompoundContext *ctx) {
        return StrawberryParserBaseVisitor::visitIfScopeCompound(ctx);
    }

    std::any StrawberryInterpreter::visitLoopScopeCompound(StrawberryParser::LoopScopeCompoundContext *ctx) {
        return StrawberryParserBaseVisitor::visitLoopScopeCompound(ctx);
    }

    std::any StrawberryInterpreter::visitIfCompound(StrawberryParser::IfCompoundContext *ctx) {
        return StrawberryParserBaseVisitor::visitIfCompound(ctx);
    }

    std::any StrawberryInterpreter::visitIfScope(StrawberryParser::IfScopeContext *ctx) {
        return StrawberryParserBaseVisitor::visitIfScope(ctx);
    }

    std::any StrawberryInterpreter::visitIfBody(StrawberryParser::IfBodyContext *ctx) {
        return StrawberryParserBaseVisitor::visitIfBody(ctx);
    }

    std::any StrawberryInterpreter::visitIfKeyword(StrawberryParser::IfKeywordContext *ctx) {
        return StrawberryParserBaseVisitor::visitIfKeyword(ctx);
    }

    std::any StrawberryInterpreter::visitUnlessKeyword(StrawberryParser::UnlessKeywordContext *ctx) {
        return StrawberryParserBaseVisitor::visitUnlessKeyword(ctx);
    }

    std::any StrawberryInterpreter::visitForLoop(StrawberryParser::ForLoopContext *ctx) {
        return StrawberryParserBaseVisitor::visitForLoop(ctx);
    }

    std::any StrawberryInterpreter::visitLoopLoop(StrawberryParser::LoopLoopContext *ctx) {
        return StrawberryParserBaseVisitor::visitLoopLoop(ctx);
    }

    std::any StrawberryInterpreter::visitConditionalLoop(StrawberryParser::ConditionalLoopContext *ctx) {
        return StrawberryParserBaseVisitor::visitConditionalLoop(ctx);
    }

    std::any StrawberryInterpreter::visitWhileLoop(StrawberryParser::WhileLoopContext *ctx) {
        return StrawberryParserBaseVisitor::visitWhileLoop(ctx);
    }

    std::any StrawberryInterpreter::visitUntilLoop(StrawberryParser::UntilLoopContext *ctx) {
        return StrawberryParserBaseVisitor::visitUntilLoop(ctx);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Function Handlers */
    std::any StrawberryInterpreter::visitFnDeclaration(StrawberryParser::FnDeclarationContext *ctx) {
        return StrawberryParserBaseVisitor::visitFnDeclaration(ctx);
    }

    std::any StrawberryInterpreter::visitLambda(StrawberryParser::LambdaContext *ctx) {
        return StrawberryParserBaseVisitor::visitLambda(ctx);
    }

    std::any StrawberryInterpreter::visitParams(StrawberryParser::ParamsContext *ctx) {
        return StrawberryParserBaseVisitor::visitParams(ctx);
    }

    std::any StrawberryInterpreter::visitParamsExpand(StrawberryParser::ParamsExpandContext *ctx) {
        return StrawberryParserBaseVisitor::visitParamsExpand(ctx);
    }

    std::any StrawberryInterpreter::visitArgs(StrawberryParser::ArgsContext *ctx) {
        return StrawberryParserBaseVisitor::visitArgs(ctx);
    }

    std::any StrawberryInterpreter::visitArg(StrawberryParser::ArgContext *ctx) {
        return StrawberryParserBaseVisitor::visitArg(ctx);
    }

    std::any StrawberryInterpreter::visitArgExpand(StrawberryParser::ArgExpandContext *ctx) {
        return StrawberryParserBaseVisitor::visitArgExpand(ctx);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Regex */
    std::any StrawberryInterpreter::visitMatchRegex(StrawberryParser::MatchRegexContext *ctx) {
        return StrawberryParserBaseVisitor::visitMatchRegex(ctx);
    }

    std::any StrawberryInterpreter::visitReturnAllMatchOption(StrawberryParser::ReturnAllMatchOptionContext *ctx) {
        return StrawberryParserBaseVisitor::visitReturnAllMatchOption(ctx);
    }

    std::any StrawberryInterpreter::visitZeroOrMore(StrawberryParser::ZeroOrMoreContext *ctx) {
        return StrawberryParserBaseVisitor::visitZeroOrMore(ctx);
    }

    std::any StrawberryInterpreter::visitOrMatch(StrawberryParser::OrMatchContext *ctx) {
        return StrawberryParserBaseVisitor::visitOrMatch(ctx);
    }

    std::any StrawberryInterpreter::visitCollectMatch(StrawberryParser::CollectMatchContext *ctx) {
        return StrawberryParserBaseVisitor::visitCollectMatch(ctx);
    }

    std::any StrawberryInterpreter::visitZeroOrOne(StrawberryParser::ZeroOrOneContext *ctx) {
        return StrawberryParserBaseVisitor::visitZeroOrOne(ctx);
    }

    std::any StrawberryInterpreter::visitChars(StrawberryParser::CharsContext *ctx) {
        return StrawberryParserBaseVisitor::visitChars(ctx);
    }

    std::any StrawberryInterpreter::visitOnOrMore(StrawberryParser::OnOrMoreContext *ctx) {
        return StrawberryParserBaseVisitor::visitOnOrMore(ctx);
    }

    std::any StrawberryInterpreter::visitWord(StrawberryParser::WordContext *ctx) {
        return StrawberryParserBaseVisitor::visitWord(ctx);
    }

    std::any StrawberryInterpreter::visitNewline(StrawberryParser::NewlineContext *ctx) {
        return StrawberryParserBaseVisitor::visitNewline(ctx);
    }

    std::any StrawberryInterpreter::visitBslash(StrawberryParser::BslashContext *ctx) {
        return StrawberryParserBaseVisitor::visitBslash(ctx);
    }

    std::any StrawberryInterpreter::visitWildCard(StrawberryParser::WildCardContext *ctx) {
        return StrawberryParserBaseVisitor::visitWildCard(ctx);
    }

    std::any StrawberryInterpreter::visitOther(StrawberryParser::OtherContext *ctx) {
        return StrawberryParserBaseVisitor::visitOther(ctx);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Expressions */
    std::any StrawberryInterpreter::visitLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitLooseFnCallExpr(ctx);
    }

    std::any StrawberryInterpreter::visitPrefixExpr(StrawberryParser::PrefixExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitPrefixExpr(ctx);
    }

    std::any StrawberryInterpreter::visitDefaultSuffixExpr(StrawberryParser::DefaultSuffixExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitDefaultSuffixExpr(ctx);
    }

    std::any StrawberryInterpreter::visitOpExpr(StrawberryParser::OpExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitOpExpr(ctx);
    }

    std::any StrawberryInterpreter::visitSuffixExpr(StrawberryParser::SuffixExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitSuffixExpr(ctx);
    }

    std::any StrawberryInterpreter::visitLitExpr(StrawberryParser::LitExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitLitExpr(ctx);
    }

    std::any StrawberryInterpreter::visitAssignExpr(StrawberryParser::AssignExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitAssignExpr(ctx);
    }

    std::any StrawberryInterpreter::visitFnAccess(StrawberryParser::FnAccessContext *ctx) {
        return StrawberryParserBaseVisitor::visitFnAccess(ctx);
    }

    std::any StrawberryInterpreter::visitParenExpr(StrawberryParser::ParenExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitParenExpr(ctx);
    }

    std::any StrawberryInterpreter::visitAccessExpr(StrawberryParser::AccessExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitAccessExpr(ctx);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Literals */
    std::any StrawberryInterpreter::visitKeywordLit(StrawberryParser::KeywordLitContext *ctx) {
        return StrawberryParserBaseVisitor::visitKeywordLit(ctx);
    }

    // std::shared_ptr<Reference>
    std::any StrawberryInterpreter::visitDStringLit(StrawberryParser::DStringLitContext *ctx) {
        auto string = ctx->String()->getText();
        return std::make_shared<Reference>(std::make_shared<String>(string.substr(1, string.length() - 2)));
    }

    std::any StrawberryInterpreter::visitSStringLit(StrawberryParser::SStringLitContext *ctx) {
        return StrawberryParserBaseVisitor::visitSStringLit(ctx);
    }

    std::any StrawberryInterpreter::visitArrayLit(StrawberryParser::ArrayLitContext *ctx) {
        return StrawberryParserBaseVisitor::visitArrayLit(ctx);
    }

    std::any StrawberryInterpreter::visitHashLit(StrawberryParser::HashLitContext *ctx) {
        return StrawberryParserBaseVisitor::visitHashLit(ctx);
    }

    // std::shared_ptr<Reference>
    std::any StrawberryInterpreter::visitNumLit(StrawberryParser::NumLitContext *ctx) {
        return std::make_shared<Reference>(std::make_shared<Number>(ctx->Number()->getText()));
    }

    std::any StrawberryInterpreter::visitPair(StrawberryParser::PairContext *ctx) {
        return StrawberryParserBaseVisitor::visitPair(ctx);
    }

    std::any StrawberryInterpreter::visitTrueLit(StrawberryParser::TrueLitContext *ctx) {
        return StrawberryParserBaseVisitor::visitTrueLit(ctx);
    }

    std::any StrawberryInterpreter::visitFalseLit(StrawberryParser::FalseLitContext *ctx) {
        return StrawberryParserBaseVisitor::visitFalseLit(ctx);
    }

    std::any StrawberryInterpreter::visitNullLit(StrawberryParser::NullLitContext *ctx) {
        return StrawberryParserBaseVisitor::visitNullLit(ctx);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Memory Allocation */
    // std::shared_ptr<Reference> || std::shared_ptr<List>
    std::any StrawberryInterpreter::visitDeclareAssign(StrawberryParser::DeclareAssignContext *ctx) {
        if (ctx->varDeclare_().size() == 1) {
            return visit(ctx->varDeclare_(0));
        }
        auto vars = std::shared_ptr<List>();
        for (auto item: ctx->varDeclare_())
            vars->append(std::any_cast<std::shared_ptr<Reference>>(visit(item)));
        return vars;
    }

    std::any StrawberryInterpreter::visitEqAssign(StrawberryParser::EqAssignContext *ctx) {
        return StrawberryParserBaseVisitor::visitEqAssign(ctx);
    }

    std::any StrawberryInterpreter::visitDefaultEqAssign(StrawberryParser::DefaultEqAssignContext *ctx) {
        return StrawberryParserBaseVisitor::visitDefaultEqAssign(ctx);
    }

    std::any StrawberryInterpreter::visitPowAssign(StrawberryParser::PowAssignContext *ctx) {
        return StrawberryParserBaseVisitor::visitPowAssign(ctx);
    }

    std::any StrawberryInterpreter::visitMultAssign(StrawberryParser::MultAssignContext *ctx) {
        return StrawberryParserBaseVisitor::visitMultAssign(ctx);
    }

    std::any StrawberryInterpreter::visitDivAssign(StrawberryParser::DivAssignContext *ctx) {
        return StrawberryParserBaseVisitor::visitDivAssign(ctx);
    }

    std::any StrawberryInterpreter::visitModAssign(StrawberryParser::ModAssignContext *ctx) {
        return StrawberryParserBaseVisitor::visitModAssign(ctx);
    }

    std::any StrawberryInterpreter::visitAddAssign(StrawberryParser::AddAssignContext *ctx) {
        return StrawberryParserBaseVisitor::visitAddAssign(ctx);
    }

    std::any StrawberryInterpreter::visitMinAssign(StrawberryParser::MinAssignContext *ctx) {
        return StrawberryParserBaseVisitor::visitMinAssign(ctx);
    }

    std::any StrawberryInterpreter::visitIncrem(StrawberryParser::IncremContext *ctx) {
        return StrawberryParserBaseVisitor::visitIncrem(ctx);
    }

    std::any StrawberryInterpreter::visitDecrem(StrawberryParser::DecremContext *ctx) {
        return StrawberryParserBaseVisitor::visitDecrem(ctx);
    }

    // std::shared_ptr<Reference>
    std::any StrawberryInterpreter::visitNoInitVarDeclar(StrawberryParser::NoInitVarDeclarContext *ctx) {
        return declare(ctx->Id()->getText(), std::make_shared<Value>());
    }

    // std::shared_ptr<Reference>
    std::any StrawberryInterpreter::visitInitVarDeclar(StrawberryParser::InitVarDeclarContext *ctx) {
        auto rawval = visit(ctx->value_());
        auto value = std::any_cast<std::shared_ptr<Reference>>(rawval);
        return declare(ctx->Id()->getText(), value);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Identifiers / Container Access */
    std::any StrawberryInterpreter::visitDotAccess(StrawberryParser::DotAccessContext *ctx) {
        return StrawberryParserBaseVisitor::visitDotAccess(ctx);
    }

    std::any StrawberryInterpreter::visitArrAccesss(StrawberryParser::ArrAccesssContext *ctx) {
        return StrawberryParserBaseVisitor::visitArrAccesss(ctx);
    }

    std::any StrawberryInterpreter::visitIdAccess(StrawberryParser::IdAccessContext *ctx) {
        return StrawberryParserBaseVisitor::visitIdAccess(ctx);
    }

    std::any StrawberryInterpreter::visitDefaultAccess(StrawberryParser::DefaultAccessContext *ctx) {
        return StrawberryParserBaseVisitor::visitDefaultAccess(ctx);
    }

    std::any StrawberryInterpreter::visitIdReference(StrawberryParser::IdReferenceContext *ctx) {
        return StrawberryParserBaseVisitor::visitIdReference(ctx);
    }

    std::any StrawberryInterpreter::visitLooseFnCall(StrawberryParser::LooseFnCallContext *ctx) {
        return StrawberryParserBaseVisitor::visitLooseFnCall(ctx);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Operators */
    std::any StrawberryInterpreter::visitNegatePrefix(StrawberryParser::NegatePrefixContext *ctx) {
        return StrawberryParserBaseVisitor::visitNegatePrefix(ctx);
    }

    std::any StrawberryInterpreter::visitNegativePrefix(StrawberryParser::NegativePrefixContext *ctx) {
        return StrawberryParserBaseVisitor::visitNegativePrefix(ctx);
    }

    std::any StrawberryInterpreter::visitExcitedSuff(StrawberryParser::ExcitedSuffContext *ctx) {
        return StrawberryParserBaseVisitor::visitExcitedSuff(ctx);
    }

    std::any StrawberryInterpreter::visitPowOp(StrawberryParser::PowOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitPowOp(ctx);
    }

    std::any StrawberryInterpreter::visitMultOp(StrawberryParser::MultOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitMultOp(ctx);
    }

    std::any StrawberryInterpreter::visitDivOp(StrawberryParser::DivOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitDivOp(ctx);
    }

    std::any StrawberryInterpreter::visitModOp(StrawberryParser::ModOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitModOp(ctx);
    }

    std::any StrawberryInterpreter::visitPlusOp(StrawberryParser::PlusOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitPlusOp(ctx);
    }

    std::any StrawberryInterpreter::visitMinOp(StrawberryParser::MinOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitMinOp(ctx);
    }

    std::any StrawberryInterpreter::visitDefinedOrOp(StrawberryParser::DefinedOrOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitDefinedOrOp(ctx);
    }

    std::any StrawberryInterpreter::visitRangeOp(StrawberryParser::RangeOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitRangeOp(ctx);
    }

    std::any StrawberryInterpreter::visitBoolEqOp(StrawberryParser::BoolEqOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitBoolEqOp(ctx);
    }

    std::any StrawberryInterpreter::visitBoolNeqOp(StrawberryParser::BoolNeqOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitBoolNeqOp(ctx);
    }

    std::any StrawberryInterpreter::visitBoolGtOp(StrawberryParser::BoolGtOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitBoolGtOp(ctx);
    }

    std::any StrawberryInterpreter::visitBoolGtEqOp(StrawberryParser::BoolGtEqOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitBoolGtEqOp(ctx);
    }

    std::any StrawberryInterpreter::visitBoolLtOp(StrawberryParser::BoolLtOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitBoolLtOp(ctx);
    }

    std::any StrawberryInterpreter::visitBoolLtEqOp(StrawberryParser::BoolLtEqOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitBoolLtEqOp(ctx);
    }

    std::any StrawberryInterpreter::visitOrOp(StrawberryParser::OrOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitOrOp(ctx);
    }

    std::any StrawberryInterpreter::visitBitOrOp(StrawberryParser::BitOrOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitBitOrOp(ctx);
    }

    std::any StrawberryInterpreter::visitAndOp(StrawberryParser::AndOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitAndOp(ctx);
    }

    std::any StrawberryInterpreter::visitBitAndOp(StrawberryParser::BitAndOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitBitAndOp(ctx);
    }

    std::any StrawberryInterpreter::visitMatchSuff(StrawberryParser::MatchSuffContext *ctx) {
        return StrawberryParserBaseVisitor::visitMatchSuff(ctx);
    }

} // antlrcpptest