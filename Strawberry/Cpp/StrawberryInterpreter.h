//
// Created by patrick on 3/10/23.
//

#ifndef LIBANTLR4_STRAWBERRYINTERPRETER_H
#define LIBANTLR4_STRAWBERRYINTERPRETER_H

#include <memory>
#include <utility>

#include "StrawberryParserBaseVisitor.h"
#include "types/Value.h"
#include "types/expressions/Number.h"
#include "types/Reference.h"

namespace antlrcpptest {

    class StrawberryInterpreter: public StrawberryParserBaseVisitor {

/* ================================================================================================================== */
    /* Memory Allocation */
    private:
    // -------------------------------------------------------------------------------------------------------------- //
        // Scope Linked List //
        class Scope {
        public:
            std::unordered_map<std::string, std::shared_ptr<Reference>> memory;
            std::shared_ptr<Scope> outerScope;
            explicit Scope(std::unordered_map<std::string,std::shared_ptr<Reference>> d,
                           std::shared_ptr<Scope> n = nullptr): memory(std::move(d)), outerScope(std::move(n)){}
        };

    // -------------------------------------------------------------------------------------------------------------- //
        // Memory Management Methods //
        std::shared_ptr<Scope> innerScope;

        void scope_in() {
            auto clean_memory = std::unordered_map<std::string,std::shared_ptr<Reference>>();
            innerScope = std::make_shared<Scope>(clean_memory, std::move(innerScope));
        }

        void scope_out() {
            innerScope = innerScope->outerScope;
        }

        std::shared_ptr<Reference> declare(const std::string& id, const std::shared_ptr<Value>& val) const {
            if (innerScope->memory.find(id) == innerScope->memory.end()) {
                auto ref = std::make_shared<Reference>(val);
                innerScope->memory.insert_or_assign(id, ref);
                return ref;
            }
            else throw std::runtime_error("'" + id + "' is already declared in scope");
        }

        std::shared_ptr<Reference> declare(const std::string& id) const {
            return declare(id, std::make_shared<Value>());
        }

            void assign(const std::string& id, std::shared_ptr<Value> val) const {
            get_from_memory(id)->set(std::move(val));
        }

        [[nodiscard]] std::shared_ptr<Reference> get_from_memory(const std::string& id) const {
            auto scope = innerScope.get();
            auto value = innerScope->memory.find(id);
            while (value == scope->memory.end()) {
                if (!scope->outerScope)
                    throw std::runtime_error("No variable '" + id + "' in memory\n");
                scope = scope->outerScope.get();
                value = scope->memory.find(id);
            }
            return value->second;
        }

/* ================================================================================================================== */
    /* Visitor Overrides */
    public:
        std::any visitScript_(StrawberryParser::Script_Context *ctx) override;
        std::any visitReturnStat(StrawberryParser::ReturnStatContext *ctx) override;
        std::any visitOnceStat(StrawberryParser::OnceStatContext *ctx) override;
        std::any visitNextStat(StrawberryParser::NextStatContext *ctx) override;
        std::any visitLastStat(StrawberryParser::LastStatContext *ctx) override;
        std::any visitBreakStat(StrawberryParser::BreakStatContext *ctx) override;
        std::any visitControlFlow_(StrawberryParser::ControlFlow_Context *ctx) override;
        std::any visitLoopScope(StrawberryParser::LoopScopeContext *ctx) override;
        std::any visitLoopBody(StrawberryParser::LoopBodyContext *ctx) override;
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
        std::any visitMatchRegex(StrawberryParser::MatchRegexContext *ctx) override;
        std::any visitReturnAllMatchOption(StrawberryParser::ReturnAllMatchOptionContext *ctx) override;
        std::any visitZeroOrMore(StrawberryParser::ZeroOrMoreContext *ctx) override;
        std::any visitOrMatch(StrawberryParser::OrMatchContext *ctx) override;
        std::any visitCollectMatch(StrawberryParser::CollectMatchContext *ctx) override;
        std::any visitZeroOrOne(StrawberryParser::ZeroOrOneContext *ctx) override;
        std::any visitChars(StrawberryParser::CharsContext *ctx) override;
        std::any visitOnOrMore(StrawberryParser::OnOrMoreContext *ctx) override;
        std::any visitWord(StrawberryParser::WordContext *ctx) override;
        std::any visitNewline(StrawberryParser::NewlineContext *ctx) override;
        std::any visitBslash(StrawberryParser::BslashContext *ctx) override;
        std::any visitWildCard(StrawberryParser::WildCardContext *ctx) override;
        std::any visitOther(StrawberryParser::OtherContext *ctx) override;
        std::any visitLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext *ctx) override;
        std::any visitPrefixExpr(StrawberryParser::PrefixExprContext *ctx) override;
        std::any visitDefaultSuffixExpr(StrawberryParser::DefaultSuffixExprContext *ctx) override;
        std::any visitOpExpr(StrawberryParser::OpExprContext *ctx) override;
        std::any visitSuffixExpr(StrawberryParser::SuffixExprContext *ctx) override;
        std::any visitLitExpr(StrawberryParser::LitExprContext *ctx) override;
        std::any visitAssignExpr(StrawberryParser::AssignExprContext *ctx) override;
        std::any visitFnAccess(StrawberryParser::FnAccessContext *ctx) override;
        std::any visitParenExpr(StrawberryParser::ParenExprContext *ctx) override;
        std::any visitAccessExpr(StrawberryParser::AccessExprContext *ctx) override;
        std::any visitKeywordLit(StrawberryParser::KeywordLitContext *ctx) override;
        std::any visitDStringLit(StrawberryParser::DStringLitContext *ctx) override;
        std::any visitSStringLit(StrawberryParser::SStringLitContext *ctx) override;
        std::any visitArrayLit(StrawberryParser::ArrayLitContext *ctx) override;
        std::any visitHashLit(StrawberryParser::HashLitContext *ctx) override;
        std::any visitNumLit(StrawberryParser::NumLitContext *ctx) override;
        std::any visitPair(StrawberryParser::PairContext *ctx) override;
        std::any visitTrueLit(StrawberryParser::TrueLitContext *ctx) override;
        std::any visitFalseLit(StrawberryParser::FalseLitContext *ctx) override;
        std::any visitNullLit(StrawberryParser::NullLitContext *ctx) override;
        std::any visitDeclareAssign(StrawberryParser::DeclareAssignContext *ctx) override;
        std::any visitEqAssign(StrawberryParser::EqAssignContext *ctx) override;
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
        std::any visitDotAccess(StrawberryParser::DotAccessContext *ctx) override;
        std::any visitArrAccesss(StrawberryParser::ArrAccesssContext *ctx) override;
        std::any visitIdAccess(StrawberryParser::IdAccessContext *ctx) override;
        std::any visitDefaultAccess(StrawberryParser::DefaultAccessContext *ctx) override;
        std::any visitIdReference(StrawberryParser::IdReferenceContext *ctx) override;
        std::any visitLooseFnCall(StrawberryParser::LooseFnCallContext *ctx) override;
        std::any visitNegatePrefix(StrawberryParser::NegatePrefixContext *ctx) override;
        std::any visitNegativePrefix(StrawberryParser::NegativePrefixContext *ctx) override;
        std::any visitExcitedSuff(StrawberryParser::ExcitedSuffContext *ctx) override;
        std::any visitPowOp(StrawberryParser::PowOpContext *ctx) override;
        std::any visitMultOp(StrawberryParser::MultOpContext *ctx) override;
        std::any visitDivOp(StrawberryParser::DivOpContext *ctx) override;
        std::any visitModOp(StrawberryParser::ModOpContext *ctx) override;
        std::any visitPlusOp(StrawberryParser::PlusOpContext *ctx) override;
        std::any visitMinOp(StrawberryParser::MinOpContext *ctx) override;
        std::any visitDefinedOrOp(StrawberryParser::DefinedOrOpContext *ctx) override;
        std::any visitRangeOp(StrawberryParser::RangeOpContext *ctx) override;
        std::any visitBoolEqOp(StrawberryParser::BoolEqOpContext *ctx) override;
        std::any visitBoolNeqOp(StrawberryParser::BoolNeqOpContext *ctx) override;
        std::any visitBoolGtOp(StrawberryParser::BoolGtOpContext *ctx) override;
        std::any visitBoolGtEqOp(StrawberryParser::BoolGtEqOpContext *ctx) override;
        std::any visitBoolLtOp(StrawberryParser::BoolLtOpContext *ctx) override;
        std::any visitBoolLtEqOp(StrawberryParser::BoolLtEqOpContext *ctx) override;
        std::any visitOrOp(StrawberryParser::OrOpContext *ctx) override;
        std::any visitBitOrOp(StrawberryParser::BitOrOpContext *ctx) override;
        std::any visitAndOp(StrawberryParser::AndOpContext *ctx) override;
        std::any visitBitAndOp(StrawberryParser::BitAndOpContext *ctx) override;
        std::any visitMatchSuff(StrawberryParser::MatchSuffContext *ctx) override;

/* ================================================================================================================== */
        /* Test Definition */
    public:
        void testRef();
        void testList();
        void moreListTesting();
        void pairHashTesting();
        void castTesting();

    };




} // antlrcpptest

#endif //LIBANTLR4_STRAWBERRYINTERPRETER_H
