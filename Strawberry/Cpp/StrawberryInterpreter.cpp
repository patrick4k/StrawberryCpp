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
#include "types/expressions/Bool.h"

namespace antlrcpptest {
/* ================================================ VISITOR OVERRIDES =============================================== */
    std::any StrawberryInterpreter::visitScript_(StrawberryParser::Script_Context *ctx) {
        this->scope_in();
        this->new_default(std::make_shared<Value>());
        StrawberryParserBaseVisitor::visitScript_(ctx);
        std::cout << "Memory =============================================================" << std::endl;
        print_inner_scope();
        std::cout << "Default =============================================================" << std::endl;
        print_default();
        return 0;
    }

    std::any StrawberryInterpreter::visitScope(StrawberryParser::ScopeContext *ctx) {
        // TODO: Revise for keyword responses
        std::any action_response;
        this->scope_in();
        for (auto action: ctx->action_()) {
            action_response = visit(action);
        }
        this->scope_out();
        return action_response;
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
        auto fn = std::make_unique<FunctionHandle>(ctx);
        this->functionLibrary->add(ctx->Id()->getText(),std::move(fn));
        return nullptr;
    }

//        this->functionLibrary->add(ctx->Id()->getText(), std::move(fn));
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
        auto args = std::make_shared<List>();
        for (auto arg: ctx->argument_()) {
            if (dynamic_cast<StrawberryParser::ArgExpandContext*>(arg) || dynamic_cast<StrawberryParser::RangeArgContext*>(arg)) {
                auto args2 = std::any_cast<std::shared_ptr<Reference>>(visit(arg))->deref()->as<List>();
                for (int i = 0; i < args2->size(); ++i) {
                    args->append(args2->get(i)->deref());
                }
            }
            else {
                args->append(std::any_cast<std::shared_ptr<Reference>>(visit(arg))->deref());
            }
        }
        return std::make_shared<Reference>(args);
    }

    std::any StrawberryInterpreter::visitArg(StrawberryParser::ArgContext *ctx) {
        return visit(ctx->value_());
    }

    std::any StrawberryInterpreter::visitArgExpand(StrawberryParser::ArgExpandContext *ctx) {
        auto ref = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->value_()));
        if (auto list = ref->deref()->as<List>()) {
            return std::make_shared<Reference>(list);
        }
        return std::make_shared<Reference>(std::make_shared<List>(ref));
    }

    std::any StrawberryInterpreter::visitRangeArg(StrawberryParser::RangeArgContext *ctx) {
        auto ref1 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_()[0]));
        auto ref2 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_()[1]));
        auto list = std::make_shared<List>();
        int n1 = ref1->toDouble(), n2 = ref2->toDouble();
        if (auto l1 = ref1->deref<List>()) {
            n1 = l1->get(l1->size()-1)->toDouble();
        }
        if (auto l2 = ref2->deref<List>()) {
            n2 = l2->get(0)->toDouble();
        }
        if (n2 >= n1)
            for (int i = n1; i <= n2; ++i)
                list->append(std::make_shared<Number>(i));
        else
            for (int i = n1; i >= n2; --i)
                list->append(std::make_shared<Number>(i));
        return std::make_shared<Reference>(list);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Regex */ // TODO: fix regex
    std::any StrawberryInterpreter::visitMatchRegex(StrawberryParser::MatchRegexContext *ctx) {
        return StrawberryParserBaseVisitor::visitMatchRegex(ctx);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Expressions */
    std::any StrawberryInterpreter::visitLooseFnCallExpr(StrawberryParser::LooseFnCallExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitLooseFnCallExpr(ctx);
    }

    std::any StrawberryInterpreter::visitPrefixExpr(StrawberryParser::PrefixExprContext *ctx) {
        auto operation = std::any_cast
                <std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>)>>(visit(ctx->prefix_()));
        auto expr = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_()));
        return operation(expr);
    }

    std::any StrawberryInterpreter::visitDefaultSuffixExpr(StrawberryParser::DefaultSuffixExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitDefaultSuffixExpr(ctx);
    }

    // TODO: Fix repeated code?
    std::any StrawberryInterpreter::visitOpExpr1(StrawberryParser::OpExpr1Context *ctx) {
        auto val1 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(0)));
        auto val2 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(1)));
        auto operation = std::any_cast
                <std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>, std::shared_ptr<Reference>)>>
                (visit(ctx->op1_()));
        return operation(val1, val2);
    }

    std::any StrawberryInterpreter::visitOpExpr2(StrawberryParser::OpExpr2Context *ctx) {
        auto val1 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(0)));
        auto val2 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(1)));
        auto operation = std::any_cast
                <std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>, std::shared_ptr<Reference>)>>
                (visit(ctx->op2_()));
        return operation(val1, val2);
    }

    std::any StrawberryInterpreter::visitOpExpr3(StrawberryParser::OpExpr3Context *ctx) {
        auto val1 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(0)));
        auto val2 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(1)));
        auto operation = std::any_cast
                <std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>>
                (visit(ctx->op3_()));
        auto val3 = operation(val1, val2);
        return val3;
    }

    std::any StrawberryInterpreter::visitOpExpr4(StrawberryParser::OpExpr4Context *ctx) {
        auto val1 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(0)));
        auto val2 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(1)));
        auto operation = std::any_cast
                <std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>, std::shared_ptr<Reference>)>>
                (visit(ctx->op4_()));
        return operation(val1, val2);
    }

    std::any StrawberryInterpreter::visitOpExpr5(StrawberryParser::OpExpr5Context *ctx) {
        auto val1 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(0)));
        auto val2 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(1)));
        auto operation = std::any_cast
                <std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>, std::shared_ptr<Reference>)>>
                (visit(ctx->op5_()));
        return operation(val1, val2);
    }

    std::any StrawberryInterpreter::visitOpExpr6(StrawberryParser::OpExpr6Context *ctx) {
        auto val1 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(0)));
        auto val2 = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_(1)));
        auto operation = std::any_cast
                <std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>, std::shared_ptr<Reference>)>>
                (visit(ctx->op6_()));
        return operation(val1, val2);
    }

    std::any StrawberryInterpreter::visitSuffixExpr(StrawberryParser::SuffixExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitSuffixExpr(ctx);
    }

    std::any StrawberryInterpreter::visitDerefExpr(StrawberryParser::DerefExprContext *ctx) {
        auto ref = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->identifyer_()));
        if (auto ref_ref = ref->deref<Reference>()) {
            return ref_ref;
        }
        throw std::runtime_error("Cannot deref non-reference");
    }

    std::any StrawberryInterpreter::visitAssignExpr(StrawberryParser::AssignExprContext *ctx) {
        return visit(ctx->assign_());
    }

    std::any StrawberryInterpreter::visitFnAccess(StrawberryParser::FnAccessContext *ctx) {
        // TODO: Does not support object function calls
        auto &fn = this->functionLibrary->get(ctx->identifyer_()->getText());

        return nullptr;
    }

    std::any StrawberryInterpreter::visitParenExpr(StrawberryParser::ParenExprContext *ctx) {
        return visit(ctx->expression_());
    }

    std::any StrawberryInterpreter::visitAccessExpr(StrawberryParser::AccessExprContext *ctx) {
        return StrawberryParserBaseVisitor::visitAccessExpr(ctx);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Literals */

    std::any StrawberryInterpreter::visitDStringLit(StrawberryParser::DStringLitContext *ctx) {
        auto string = ctx->String()->getText();
        // TODO: Add escape characters
        return std::make_shared<Reference>(std::make_shared<String>(string.substr(1, string.length() - 2)));
    }

    std::any StrawberryInterpreter::visitSStringLit(StrawberryParser::SStringLitContext *ctx) {
        auto string = ctx->StringLit()->getText();
        return std::make_shared<Reference>(std::make_shared<String>(string.substr(1, string.length() - 2)));
    }

    std::any StrawberryInterpreter::visitArrayLit(StrawberryParser::ArrayLitContext *ctx) {
        if (ctx->args().size() == 1) return visit(ctx->args(0));
        auto list = std::make_shared<List>();
        for (auto args: ctx->args()) {
            list->append(std::any_cast<std::shared_ptr<Reference>>(visit(args))->deref());
        }
        return std::make_shared<Reference>(list);
    }

    std::any StrawberryInterpreter::visitHashLit(StrawberryParser::HashLitContext *ctx) {
        auto hash = std::make_shared<Hash>();
        for (auto pair_ctx: ctx->pair_()) {
            auto pair_ref = std::any_cast<std::shared_ptr<Reference>>(visit(pair_ctx));
            hash->append(pair_ref->deref());
        }
        return std::make_shared<Reference>(hash);
    }

    std::any StrawberryInterpreter::visitNumLit(StrawberryParser::NumLitContext *ctx) {
        return std::make_shared<Reference>(std::make_shared<Number>(ctx->Number()->getText()));
    }

    std::any StrawberryInterpreter::visitPairValue(StrawberryParser::PairValueContext *ctx) {
        std::string key;
        if (ctx->Id()) key = ctx->Id()->getText();
        else {
            key = ctx->Key->getText();
            key = key.substr(1, key.length() - 2);
        }
        auto value = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->value_()));
        auto pair = std::make_shared<Pair>(std::make_shared<String>(key), value->deref());
        return std::make_shared<Reference>(pair);
    }

    std::any StrawberryInterpreter::visitPairArgs(StrawberryParser::PairArgsContext *ctx) {
        std::string key;
        if (ctx->Id()) key = ctx->Id()->getText();
        else {
            key = ctx->Key->getText();
            key = key.substr(1, key.length() - 2);
        }
        auto value = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->args()));
        auto pair = std::make_shared<Pair>(std::make_shared<String>(key), value->deref());
        return std::make_shared<Reference>(pair);
    }

    std::any StrawberryInterpreter::visitTrueLit(StrawberryParser::TrueLitContext *ctx) {
        auto trueBool = std::make_shared<Bool>(true);
        return std::make_shared<Reference>(trueBool);
    }

    std::any StrawberryInterpreter::visitFalseLit(StrawberryParser::FalseLitContext *ctx) {
        auto trueBool = std::make_shared<Bool>(false);
        return std::make_shared<Reference>(trueBool);
    }

    std::any StrawberryInterpreter::visitNullLit(StrawberryParser::NullLitContext *ctx) {
        return std::make_shared<Reference>();
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Memory Allocation */
    // std::shared_ptr<Reference>
    std::any StrawberryInterpreter::visitDeclareAssign(StrawberryParser::DeclareAssignContext *ctx) {
        auto varDeclares = ctx->varDeclare_();
        if (varDeclares.size() == 1) {
            std::any ref = visit(varDeclares[0]);
            return std::make_shared<Reference>(std::any_cast<std::shared_ptr<Reference>>(ref));
        }
        auto vars = std::make_shared<List>();
        for (auto varDeclare: varDeclares) {
            auto ref = visit(varDeclare);
            vars->append(std::make_shared<Reference>(std::any_cast<std::shared_ptr<Reference>>(ref)->deref()));
        }
        return std::make_shared<Reference>(vars);
    }

    std::any StrawberryInterpreter::visitEqAssign(StrawberryParser::EqAssignContext *ctx) {
        auto value = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->value_()));
        for (auto id: ctx->identifyer_())
            std::any_cast<std::shared_ptr<Reference>>(visit(id))->set(value->deref());
        return value;
    }

    std::any StrawberryInterpreter::visitEqAssignArgs(StrawberryParser::EqAssignArgsContext *ctx) {
        auto value = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->args()));
        for (auto id: ctx->identifyer_())
            std::any_cast<std::shared_ptr<Reference>>(visit(id))->set(value->deref());
        return value;
    }

    std::any StrawberryInterpreter::visitSetRefAssign(StrawberryParser::SetRefAssignContext *ctx) {
        auto identifyer = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->identifyer_()));
        auto value = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->value_()));
        if (auto ref = identifyer->deref<Reference>()) {
            ref->set(value->deref());
            return ref;
        }
        throw std::runtime_error("Cannot set value of non-reference value");
    }

    std::any StrawberryInterpreter::visitSetRefAssignArgs(StrawberryParser::SetRefAssignArgsContext *ctx) {
        auto identifyer = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->identifyer_()));
        auto value = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->args()));
        if (auto ref = identifyer->deref<Reference>()) {
            ref->set(value->deref());
            return ref;
        }
        throw std::runtime_error("Cannot set value of non-reference value");
    }

    std::any StrawberryInterpreter::visitDefaultEqAssign(StrawberryParser::DefaultEqAssignContext *ctx) {
        return StrawberryParserBaseVisitor::visitDefaultEqAssign(ctx);
    }

    std::any StrawberryInterpreter::visitPowAssign(StrawberryParser::PowAssignContext *ctx) {
        return do_binary_assign_operation(&Value::pow,ctx->identifyer_(),std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_())));
    }

    std::any StrawberryInterpreter::visitMultAssign(StrawberryParser::MultAssignContext *ctx) {
        return do_binary_assign_operation(&Value::mult,ctx->identifyer_(),std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_())));
    }

    std::any StrawberryInterpreter::visitDivAssign(StrawberryParser::DivAssignContext *ctx) {
        return do_binary_assign_operation(&Value::div,ctx->identifyer_(),std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_())));
    }

    std::any StrawberryInterpreter::visitModAssign(StrawberryParser::ModAssignContext *ctx) {
        return do_binary_assign_operation(&Value::mod,ctx->identifyer_(),std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_())));
    }

    std::any StrawberryInterpreter::visitAddAssign(StrawberryParser::AddAssignContext *ctx) {
        return do_binary_assign_operation(&Value::plus,ctx->identifyer_(),std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_())));
    }

    std::any StrawberryInterpreter::visitMinAssign(StrawberryParser::MinAssignContext *ctx) {
        return do_binary_assign_operation(&Value::min,ctx->identifyer_(),std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_())));
    }

    std::any StrawberryInterpreter::visitIncrem(StrawberryParser::IncremContext *ctx) {
        return do_binary_assign_operation(&Value::plus,ctx->identifyer_(),std::make_shared<Reference>(std::make_shared<Number>(1)));
    }

    std::any StrawberryInterpreter::visitDecrem(StrawberryParser::DecremContext *ctx) {
        return do_binary_assign_operation(&Value::min,ctx->identifyer_(),std::make_shared<Reference>(std::make_shared<Number>(1)));
    }

    std::any StrawberryInterpreter::visitNoInitVarDeclar(StrawberryParser::NoInitVarDeclarContext *ctx) {
        return declare(ctx->Id()->getText(), std::make_shared<Value>());
    }

    std::any StrawberryInterpreter::visitInitVarDeclar(StrawberryParser::InitVarDeclarContext *ctx) {
        auto ref = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->value_()));
        return declare(ctx->Id()->getText(), ref->deref());
    }

    std::any StrawberryInterpreter::visitInitVarDeclarArgs(StrawberryParser::InitVarDeclarArgsContext *ctx) {
        auto ref = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->args()));
        return declare(ctx->Id()->getText(), ref->deref());
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Identifiers / Container Access */
    std::any StrawberryInterpreter::visitDotAccess(StrawberryParser::DotAccessContext *ctx) {
        auto identifyer = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->identifyer_()));
        if (auto hash = identifyer->get_referenced_value()->as<Hash>()) {
            auto key = std::make_shared<String>(ctx->Id()->getText());
            return hash->get(key);
        }
        throw std::runtime_error("Cannot use dot access for " + identifyer->deref()->typeName() + "\n\t--->" + ctx->getText());
    }

    std::any StrawberryInterpreter::visitArrAccess(StrawberryParser::ArrAccessContext *ctx) {
        auto identifyer = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->identifyer_()));
        if (auto container = identifyer->get_referenced_value()->as<Container>()) {
            auto index = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->expression_()));
            return container->get(index->deref());
        }
        throw std::runtime_error("Cannot access for " + identifyer->deref()->typeName() + " type\n\t--->" + ctx->getText());
    }

    std::any StrawberryInterpreter::visitArrAccessArgs(StrawberryParser::ArrAccessArgsContext *ctx) {
        auto identifyer = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->identifyer_()));
        if (auto container = identifyer->get_referenced_value()->as<Container>()) {
            auto index = std::any_cast<std::shared_ptr<Reference>>(visit(ctx->args()));
            return container->get(index->deref());
        }
        throw std::runtime_error("Cannot access for " + identifyer->deref()->typeName() + " type\n\t--->" + ctx->getText());
    }

    std::any StrawberryInterpreter::visitIdAccess(StrawberryParser::IdAccessContext *ctx) {
        return get_from_memory(ctx->Id()->getText());
    }

    std::any StrawberryInterpreter::visitDefaultAccess(StrawberryParser::DefaultAccessContext *ctx) {
        return this->get_default();
    }

    // Reference of reference
    std::any StrawberryInterpreter::visitIdReference(StrawberryParser::IdReferenceContext *ctx) {
        return std::make_shared<Reference>(
                std::any_cast<std::shared_ptr<Reference>>(
                        visit(ctx->identifyer_())));
    }

    std::any StrawberryInterpreter::visitLooseFnCall(StrawberryParser::LooseFnCallContext *ctx) {
        return StrawberryParserBaseVisitor::visitLooseFnCall(ctx);
    }

    /* -------------------------------------------------------------------------------------------------------------- */
        /* Operators */

    // -------------------------------------------------------------------------------------------------------------- //
    // Unary High Priority //
    std::any StrawberryInterpreter::visitNegatePrefix(StrawberryParser::NegatePrefixContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref)->std::shared_ptr<Reference> {
            return std::make_shared<Reference>(std::make_shared<Bool>(!ref->toBool()));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitNegativePrefix(StrawberryParser::NegativePrefixContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref)->std::shared_ptr<Reference> {
            auto neg_one = std::make_shared<Number>(-1);
            auto neg_val = ref->mult(neg_one, ref->deref());
            if (neg_val == nullptr) {
                neg_val = neg_one->mult(neg_one, ref->deref());
            }
            return std::make_shared<Reference>(neg_val);
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitSizePrefix(StrawberryParser::SizePrefixContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref)->std::shared_ptr<Reference> {
            if (auto list = ref->deref<Container>()) {
                return std::make_shared<Reference>(std::make_shared<Number>(list->size()));
            }
            throw std::runtime_error("Cannot get size from type " + ref->deref()->typeName());
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitExcitedSuff(StrawberryParser::ExcitedSuffContext *ctx) {
        return StrawberryParserBaseVisitor::visitExcitedSuff(ctx);
    }

    // -------------------------------------------------------------------------------------------------------------- //
    // Binary //
    // std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
    std::any StrawberryInterpreter::visitPowOp(StrawberryParser::PowOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return do_binary_operation(&Value::pow, ref1, ref2);
        };
        return operation;
    }

    // std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
    std::any StrawberryInterpreter::visitMultOp(StrawberryParser::MultOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return do_binary_operation(&Value::mult, ref1, ref2);
        };
        return operation;
    }

    // std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
    std::any StrawberryInterpreter::visitDivOp(StrawberryParser::DivOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return do_binary_operation(&Value::div, ref1, ref2);
        };
        return operation;
    }

    // std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
    std::any StrawberryInterpreter::visitModOp(StrawberryParser::ModOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return do_binary_operation(&Value::mod, ref1, ref2);
        };
        return operation;
    }

    // std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
    std::any StrawberryInterpreter::visitPlusOp(StrawberryParser::PlusOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return do_binary_operation(&Value::plus, ref1, ref2);
        };
        return operation;
    }

    // std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
    std::any StrawberryInterpreter::visitMinOp(StrawberryParser::MinOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return do_binary_operation(&Value::min, ref1, ref2);
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitDefinedOrOp(StrawberryParser::DefinedOrOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            if (!ref1->isNull()) return ref1;
            return ref2;
        };
        return operation;
    }

    // TODO: Redefine bool equals
    std::any StrawberryInterpreter::visitBoolEqOp(StrawberryParser::BoolEqOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            bool bool_result;
            if (ref1->operatorPriority() > ref2->operatorPriority()) {
                bool_result = ref1->bool_equals(ref1->deref(), ref2->deref());
                return std::make_shared<Reference>(std::make_shared<Bool>(bool_result));
            }
            bool_result = ref2->bool_equals(ref1->deref(), ref2->deref());
            return std::make_shared<Reference>(std::make_shared<Bool>(bool_result));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitBoolDeepEqOp(StrawberryParser::BoolDeepEqOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            if (ref1->get_referenced_value()->typeName() != ref2->get_referenced_value()->typeName())
                return std::make_shared<Reference>(std::make_shared<Bool>(false));
            bool bool_result;
            if (ref1->operatorPriority() > ref2->operatorPriority()) {
                bool_result = ref1->bool_equals(ref1->deref(), ref2->deref());
                return std::make_shared<Reference>(std::make_shared<Bool>(bool_result));
            }
            bool_result = ref2->bool_equals(ref1->deref(), ref2->deref());
            return std::make_shared<Reference>(std::make_shared<Bool>(bool_result));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitBoolNeqOp(StrawberryParser::BoolNeqOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            bool bool_result;
            if (ref1->operatorPriority() > ref2->operatorPriority()) {
                bool_result = !ref1->bool_equals(ref1->deref(), ref2->deref());
                return std::make_shared<Reference>(std::make_shared<Bool>(bool_result));
            }
            bool_result = !ref2->bool_equals(ref1->deref(), ref2->deref());
            return std::make_shared<Reference>(std::make_shared<Bool>(bool_result));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitBoolDeepNeqOp(StrawberryParser::BoolDeepNeqOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            if (ref1->get_referenced_value()->typeName() != ref2->get_referenced_value()->typeName())
                return std::make_shared<Reference>(std::make_shared<Bool>(false));
            bool bool_result;
            if (ref1->operatorPriority() > ref2->operatorPriority()) {
                bool_result = !ref1->bool_equals(ref1->deref(), ref2->deref());
                return std::make_shared<Reference>(std::make_shared<Bool>(bool_result));
            }
            bool_result = !ref2->bool_equals(ref1->deref(), ref2->deref());
            return std::make_shared<Reference>(std::make_shared<Bool>(bool_result));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitBoolGtOp(StrawberryParser::BoolGtOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return std::make_shared<Reference>(std::make_shared<Bool>(ref1->toDouble() > ref2->toDouble()));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitBoolGtEqOp(StrawberryParser::BoolGtEqOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return std::make_shared<Reference>(std::make_shared<Bool>(ref1->toDouble() >= ref2->toDouble()));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitBoolLtOp(StrawberryParser::BoolLtOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return std::make_shared<Reference>(std::make_shared<Bool>(ref1->toDouble() < ref2->toDouble()));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitBoolLtEqOp(StrawberryParser::BoolLtEqOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return std::make_shared<Reference>(std::make_shared<Bool>(ref1->toDouble() <= ref2->toDouble()));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitOrOp(StrawberryParser::OrOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return std::make_shared<Reference>(std::make_shared<Bool>(ref1->toBool() || ref2->toBool()));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitBitOrOp(StrawberryParser::BitOrOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitBitOrOp(ctx);
    }

    std::any StrawberryInterpreter::visitAndOp(StrawberryParser::AndOpContext *ctx) {
        std::function<std::shared_ptr<Reference>(std::shared_ptr<Reference>,std::shared_ptr<Reference>)>
        operation = [](std::shared_ptr<Reference> ref1, std::shared_ptr<Reference> ref2)->std::shared_ptr<Reference> {
            return std::make_shared<Reference>(std::make_shared<Bool>(ref1->toBool() && ref2->toBool()));
        };
        return operation;
    }

    std::any StrawberryInterpreter::visitBitAndOp(StrawberryParser::BitAndOpContext *ctx) {
        return StrawberryParserBaseVisitor::visitBitAndOp(ctx);
    }

    // -------------------------------------------------------------------------------------------------------------- //
    // Unary Suffix //
    std::any StrawberryInterpreter::visitMatchSuff(StrawberryParser::MatchSuffContext *ctx) {
        return StrawberryParserBaseVisitor::visitMatchSuff(ctx);
    }

} // antlrcpptest