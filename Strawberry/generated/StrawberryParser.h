
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  StrawberryParser : public antlr4::Parser {
public:
  enum {
    Fn = 1, Decl = 2, If = 3, Unless = 4, Else = 5, While = 6, Until = 7, 
    For = 8, Return = 9, Break = 10, Next = 11, Last = 12, Once = 13, Id = 14, 
    Number = 15, String = 16, LitString = 17, Digit = 18, Word = 19, UcLetter = 20, 
    LcLetter = 21, True = 22, False = 23, Null = 24, DefOr = 25, Sarrow = 26, 
    Darrpw = 27, LRarrow = 28, RLarrow = 29, Dot2 = 30, Dot3 = 31, As = 32, 
    Uscore = 33, AndSign = 34, Doll = 35, Hash = 36, At = 37, ExPoint = 38, 
    Qmark = 39, Colon = 40, Semi = 41, Fslash = 42, Bar = 43, Dquote = 44, 
    Squote = 45, Com = 46, Dot = 47, Squig = 48, Btick = 49, Pow = 50, Star = 51, 
    Bslash = 52, Mod = 53, Plus = 54, Min = 55, Eq = 56, BoolEq = 57, BoolNeq = 58, 
    Gt = 59, GtEq = 60, Lt = 61, LtEq = 62, And = 63, Or = 64, PlusEq = 65, 
    MinEq = 66, MultEq = 67, DivEq = 68, ModEq = 69, PowEq = 70, Increm = 71, 
    Decrem = 72, Lbrack = 73, Rbrack = 74, Lbrace = 75, Rbrace = 76, Lpar = 77, 
    Rpar = 78, Ignore = 79
  };

  enum {
    RuleScript = 0, RuleDeclaration = 1, RuleAction = 2, RuleScope = 3, 
    RuleStatement = 4, RuleKeywordStatement = 5, RuleBody = 6, RuleFnDeclaration = 7, 
    RuleLambda = 8, RuleParameters = 9, RuleArgs = 10, RuleArgument = 11, 
    RuleControlFlow = 12, RuleLoop = 13, RuleCompoundStatement = 14, RuleCompoundAction = 15, 
    RuleIfStatement = 16, RuleConditionalKeywords = 17, RuleLoopKeywords = 18, 
    RuleValue = 19, RuleExpression = 20, RuleLiteral = 21, RuleAssign = 22, 
    RuleIdentifyer = 23, RuleLooseFnCall = 24, RulePrefix = 25, RuleOp1 = 26, 
    RuleOp2 = 27, RuleOp3 = 28, RuleOp4 = 29, RuleOp5 = 30, RuleOp6 = 31
  };

  explicit StrawberryParser(antlr4::TokenStream *input);

  StrawberryParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~StrawberryParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ScriptContext;
  class DeclarationContext;
  class ActionContext;
  class ScopeContext;
  class StatementContext;
  class KeywordStatementContext;
  class BodyContext;
  class FnDeclarationContext;
  class LambdaContext;
  class ParametersContext;
  class ArgsContext;
  class ArgumentContext;
  class ControlFlowContext;
  class LoopContext;
  class CompoundStatementContext;
  class CompoundActionContext;
  class IfStatementContext;
  class ConditionalKeywordsContext;
  class LoopKeywordsContext;
  class ValueContext;
  class ExpressionContext;
  class LiteralContext;
  class AssignContext;
  class IdentifyerContext;
  class LooseFnCallContext;
  class PrefixContext;
  class Op1Context;
  class Op2Context;
  class Op3Context;
  class Op4Context;
  class Op5Context;
  class Op6Context; 

  class  ScriptContext : public antlr4::ParserRuleContext {
  public:
    ScriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<ActionContext *> action();
    ActionContext* action(size_t i);
    std::vector<ControlFlowContext *> controlFlow();
    ControlFlowContext* controlFlow(size_t i);
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScriptContext* script();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FnDeclarationContext *fnDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  ActionContext : public antlr4::ParserRuleContext {
  public:
    ActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    antlr4::tree::TerminalNode *Semi();
    ScopeContext *scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionContext* action();

  class  ScopeContext : public antlr4::ParserRuleContext {
  public:
    ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lbrace();
    antlr4::tree::TerminalNode *Rbrace();
    std::vector<ActionContext *> action();
    ActionContext* action(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopeContext* scope();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();
    ScopeContext *scope();
    KeywordStatementContext *keywordStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  KeywordStatementContext : public antlr4::ParserRuleContext {
  public:
    KeywordStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    KeywordStatementContext() = default;
    void copyFrom(KeywordStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NextStatContext : public KeywordStatementContext {
  public:
    NextStatContext(KeywordStatementContext *ctx);

    antlr4::tree::TerminalNode *Next();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OnceStatContext : public KeywordStatementContext {
  public:
    OnceStatContext(KeywordStatementContext *ctx);

    antlr4::tree::TerminalNode *Once();
    StatementContext *statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReturnStatContext : public KeywordStatementContext {
  public:
    ReturnStatContext(KeywordStatementContext *ctx);

    antlr4::tree::TerminalNode *Return();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LastStatContext : public KeywordStatementContext {
  public:
    LastStatContext(KeywordStatementContext *ctx);

    antlr4::tree::TerminalNode *Last();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BreakStatContext : public KeywordStatementContext {
  public:
    BreakStatContext(KeywordStatementContext *ctx);

    antlr4::tree::TerminalNode *Break();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  KeywordStatementContext* keywordStatement();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopeContext *scope();
    StatementContext *statement();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BodyContext* body();

  class  FnDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FnDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Fn();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *Lpar();
    ParametersContext *parameters();
    antlr4::tree::TerminalNode *Rpar();
    ScopeContext *scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FnDeclarationContext* fnDeclaration();

  class  LambdaContext : public antlr4::ParserRuleContext {
  public:
    LambdaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lpar();
    ParametersContext *parameters();
    antlr4::tree::TerminalNode *Rpar();
    antlr4::tree::TerminalNode *Darrpw();
    StatementContext *statement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaContext* lambda();

  class  ParametersContext : public antlr4::ParserRuleContext {
  public:
    ParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParametersContext() = default;
    void copyFrom(ParametersContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParamsContext : public ParametersContext {
  public:
    ParamsContext(ParametersContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Com();
    antlr4::tree::TerminalNode* Com(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParamsExpandContext : public ParametersContext {
  public:
    ParamsExpandContext(ParametersContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    antlr4::tree::TerminalNode *Dot3();
    std::vector<antlr4::tree::TerminalNode *> Com();
    antlr4::tree::TerminalNode* Com(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParametersContext* parameters();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Com();
    antlr4::tree::TerminalNode* Com(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ArgumentContext() = default;
    void copyFrom(ArgumentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LooseFnCallArgContext : public ArgumentContext {
  public:
    LooseFnCallArgContext(ArgumentContext *ctx);

    LooseFnCallContext *looseFnCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArgExpandContext : public ArgumentContext {
  public:
    ArgExpandContext(ArgumentContext *ctx);

    antlr4::tree::TerminalNode *Dot3();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArgContext : public ArgumentContext {
  public:
    ArgContext(ArgumentContext *ctx);

    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ArgumentContext* argument();

  class  ControlFlowContext : public antlr4::ParserRuleContext {
  public:
    ControlFlowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Semi();
    LoopContext *loop();
    IfStatementContext *ifStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlFlowContext* controlFlow();

  class  LoopContext : public antlr4::ParserRuleContext {
  public:
    LoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoopKeywordsContext *loopKeywords();
    ExpressionContext *expression();
    ScopeContext *scope();
    antlr4::tree::TerminalNode *Lpar();
    antlr4::tree::TerminalNode *Rpar();
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopContext* loop();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundActionContext *compoundAction();
    std::vector<LoopKeywordsContext *> loopKeywords();
    LoopKeywordsContext* loopKeywords(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Lpar();
    antlr4::tree::TerminalNode* Lpar(size_t i);
    std::vector<ArgsContext *> args();
    ArgsContext* args(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Rpar();
    antlr4::tree::TerminalNode* Rpar(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  CompoundActionContext : public antlr4::ParserRuleContext {
  public:
    CompoundActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    std::vector<CompoundActionContext *> compoundAction();
    CompoundActionContext* compoundAction(size_t i);
    antlr4::tree::TerminalNode *If();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Unless();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundActionContext* compoundAction();
  CompoundActionContext* compoundAction(int precedence);
  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IfStatementContext() = default;
    void copyFrom(IfStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfBodyContext : public IfStatementContext {
  public:
    IfBodyContext(IfStatementContext *ctx);

    ConditionalKeywordsContext *conditionalKeywords();
    antlr4::tree::TerminalNode *Lpar();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Rpar();
    std::vector<BodyContext *> body();
    BodyContext* body(size_t i);
    antlr4::tree::TerminalNode *Else();
    IfStatementContext *ifStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfScopeContext : public IfStatementContext {
  public:
    IfScopeContext(IfStatementContext *ctx);

    ConditionalKeywordsContext *conditionalKeywords();
    ExpressionContext *expression();
    ScopeContext *scope();
    antlr4::tree::TerminalNode *Else();
    BodyContext *body();
    IfStatementContext *ifStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IfStatementContext* ifStatement();

  class  ConditionalKeywordsContext : public antlr4::ParserRuleContext {
  public:
    ConditionalKeywordsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConditionalKeywordsContext() = default;
    void copyFrom(ConditionalKeywordsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnlessKeywordContext : public ConditionalKeywordsContext {
  public:
    UnlessKeywordContext(ConditionalKeywordsContext *ctx);

    antlr4::tree::TerminalNode *Unless();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfKeywordContext : public ConditionalKeywordsContext {
  public:
    IfKeywordContext(ConditionalKeywordsContext *ctx);

    antlr4::tree::TerminalNode *If();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConditionalKeywordsContext* conditionalKeywords();

  class  LoopKeywordsContext : public antlr4::ParserRuleContext {
  public:
    LoopKeywordsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LoopKeywordsContext() = default;
    void copyFrom(LoopKeywordsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhileCompoundContext : public LoopKeywordsContext {
  public:
    WhileCompoundContext(LoopKeywordsContext *ctx);

    antlr4::tree::TerminalNode *While();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForCompoundContext : public LoopKeywordsContext {
  public:
    ForCompoundContext(LoopKeywordsContext *ctx);

    antlr4::tree::TerminalNode *For();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UntilCompoundContext : public LoopKeywordsContext {
  public:
    UntilCompoundContext(LoopKeywordsContext *ctx);

    antlr4::tree::TerminalNode *Until();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LoopKeywordsContext* loopKeywords();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    LambdaContext *lambda();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LooseFnCallExprContext : public ExpressionContext {
  public:
    LooseFnCallExprContext(ExpressionContext *ctx);

    LooseFnCallContext *looseFnCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrefixExprContext : public ExpressionContext {
  public:
    PrefixExprContext(ExpressionContext *ctx);

    PrefixContext *prefix();
    ExpressionContext *expression();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpExprContext : public ExpressionContext {
  public:
    OpExprContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    Op1Context *op1();
    Op2Context *op2();
    Op3Context *op3();
    Op4Context *op4();
    Op5Context *op5();
    Op6Context *op6();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignExprContext : public ExpressionContext {
  public:
    AssignExprContext(ExpressionContext *ctx);

    AssignContext *assign();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LitExprContext : public ExpressionContext {
  public:
    LitExprContext(ExpressionContext *ctx);

    LiteralContext *literal();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExpressionContext {
  public:
    ParenExprContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Lpar();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Rpar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AccessExprContext : public ExpressionContext {
  public:
    AccessExprContext(ExpressionContext *ctx);

    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LiteralContext() = default;
    void copyFrom(LiteralContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArrayLitContext : public LiteralContext {
  public:
    ArrayLitContext(LiteralContext *ctx);

    antlr4::tree::TerminalNode *Lbrack();
    ArgsContext *args();
    antlr4::tree::TerminalNode *Rbrack();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SStringLitContext : public LiteralContext {
  public:
    SStringLitContext(LiteralContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> Squote();
    antlr4::tree::TerminalNode* Squote(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumLitContext : public LiteralContext {
  public:
    NumLitContext(LiteralContext *ctx);

    antlr4::tree::TerminalNode *Number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DStringLitContext : public LiteralContext {
  public:
    DStringLitContext(LiteralContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> Dquote();
    antlr4::tree::TerminalNode* Dquote(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LiteralContext* literal();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignContext() = default;
    void copyFrom(AssignContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MinAssignContext : public AssignContext {
  public:
    MinAssignContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *MinEq();
    ExpressionContext *expression();
    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IncremContext : public AssignContext {
  public:
    IncremContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *Increm();
    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqAssignContext : public AssignContext {
  public:
    EqAssignContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *Eq();
    ValueContext *value();
    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddAssignContext : public AssignContext {
  public:
    AddAssignContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *PlusEq();
    ExpressionContext *expression();
    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclareAssignContext : public AssignContext {
  public:
    DeclareAssignContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *Decl();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *Eq();
    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PowAssignContext : public AssignContext {
  public:
    PowAssignContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *PowEq();
    ExpressionContext *expression();
    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecremContext : public AssignContext {
  public:
    DecremContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *Decrem();
    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivAssignContext : public AssignContext {
  public:
    DivAssignContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *DivEq();
    ExpressionContext *expression();
    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModAssignContext : public AssignContext {
  public:
    ModAssignContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *ModEq();
    ExpressionContext *expression();
    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultAssignContext : public AssignContext {
  public:
    MultAssignContext(AssignContext *ctx);

    antlr4::tree::TerminalNode *MultEq();
    ExpressionContext *expression();
    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignContext* assign();

  class  IdentifyerContext : public antlr4::ParserRuleContext {
  public:
    IdentifyerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IdentifyerContext() = default;
    void copyFrom(IdentifyerContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DotAccessContext : public IdentifyerContext {
  public:
    DotAccessContext(IdentifyerContext *ctx);

    IdentifyerContext *identifyer();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Id();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrAccesssContext : public IdentifyerContext {
  public:
    ArrAccesssContext(IdentifyerContext *ctx);

    IdentifyerContext *identifyer();
    antlr4::tree::TerminalNode *Lbrack();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Rbrack();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdAccessContext : public IdentifyerContext {
  public:
    IdAccessContext(IdentifyerContext *ctx);

    antlr4::tree::TerminalNode *Id();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefaultAccessContext : public IdentifyerContext {
  public:
    DefaultAccessContext(IdentifyerContext *ctx);

    antlr4::tree::TerminalNode *Uscore();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FnAccessContext : public IdentifyerContext {
  public:
    FnAccessContext(IdentifyerContext *ctx);

    IdentifyerContext *identifyer();
    antlr4::tree::TerminalNode *Lpar();
    ArgsContext *args();
    antlr4::tree::TerminalNode *Rpar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IdentifyerContext* identifyer();
  IdentifyerContext* identifyer(int precedence);
  class  LooseFnCallContext : public antlr4::ParserRuleContext {
  public:
    LooseFnCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifyerContext *identifyer();
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Com();
    antlr4::tree::TerminalNode* Com(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LooseFnCallContext* looseFnCall();

  class  PrefixContext : public antlr4::ParserRuleContext {
  public:
    PrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrefixContext() = default;
    void copyFrom(PrefixContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RefPrefixContext : public PrefixContext {
  public:
    RefPrefixContext(PrefixContext *ctx);

    antlr4::tree::TerminalNode *Fslash();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegatePrefixContext : public PrefixContext {
  public:
    NegatePrefixContext(PrefixContext *ctx);

    antlr4::tree::TerminalNode *ExPoint();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegativePrefixContext : public PrefixContext {
  public:
    NegativePrefixContext(PrefixContext *ctx);

    antlr4::tree::TerminalNode *Min();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReversePrefixContext : public PrefixContext {
  public:
    ReversePrefixContext(PrefixContext *ctx);

    antlr4::tree::TerminalNode *Squig();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrefixContext* prefix();

  class  Op1Context : public antlr4::ParserRuleContext {
  public:
    Op1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op1Context() = default;
    void copyFrom(Op1Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PowContext : public Op1Context {
  public:
    PowContext(Op1Context *ctx);

    antlr4::tree::TerminalNode *Pow();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op1Context* op1();

  class  Op2Context : public antlr4::ParserRuleContext {
  public:
    Op2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op2Context() = default;
    void copyFrom(Op2Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DivContext : public Op2Context {
  public:
    DivContext(Op2Context *ctx);

    antlr4::tree::TerminalNode *Bslash();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultContext : public Op2Context {
  public:
    MultContext(Op2Context *ctx);

    antlr4::tree::TerminalNode *Star();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModContext : public Op2Context {
  public:
    ModContext(Op2Context *ctx);

    antlr4::tree::TerminalNode *Mod();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op2Context* op2();

  class  Op3Context : public antlr4::ParserRuleContext {
  public:
    Op3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op3Context() = default;
    void copyFrom(Op3Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MinContext : public Op3Context {
  public:
    MinContext(Op3Context *ctx);

    antlr4::tree::TerminalNode *Min();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusContext : public Op3Context {
  public:
    PlusContext(Op3Context *ctx);

    antlr4::tree::TerminalNode *Plus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op3Context* op3();

  class  Op4Context : public antlr4::ParserRuleContext {
  public:
    Op4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op4Context() = default;
    void copyFrom(Op4Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefinedOrContext : public Op4Context {
  public:
    DefinedOrContext(Op4Context *ctx);

    antlr4::tree::TerminalNode *DefOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RangeOpContext : public Op4Context {
  public:
    RangeOpContext(Op4Context *ctx);

    antlr4::tree::TerminalNode *Dot2();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op4Context* op4();

  class  Op5Context : public antlr4::ParserRuleContext {
  public:
    Op5Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op5Context() = default;
    void copyFrom(Op5Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BoolGtEqContext : public Op5Context {
  public:
    BoolGtEqContext(Op5Context *ctx);

    antlr4::tree::TerminalNode *GtEq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolLtEqContext : public Op5Context {
  public:
    BoolLtEqContext(Op5Context *ctx);

    antlr4::tree::TerminalNode *LtEq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolLtContext : public Op5Context {
  public:
    BoolLtContext(Op5Context *ctx);

    antlr4::tree::TerminalNode *Lt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolNeqContext : public Op5Context {
  public:
    BoolNeqContext(Op5Context *ctx);

    antlr4::tree::TerminalNode *BoolNeq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolGtContext : public Op5Context {
  public:
    BoolGtContext(Op5Context *ctx);

    antlr4::tree::TerminalNode *Gt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolEqContext : public Op5Context {
  public:
    BoolEqContext(Op5Context *ctx);

    antlr4::tree::TerminalNode *BoolEq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op5Context* op5();

  class  Op6Context : public antlr4::ParserRuleContext {
  public:
    Op6Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op6Context() = default;
    void copyFrom(Op6Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OrContext : public Op6Context {
  public:
    OrContext(Op6Context *ctx);

    antlr4::tree::TerminalNode *Or();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndContext : public Op6Context {
  public:
    AndContext(Op6Context *ctx);

    antlr4::tree::TerminalNode *And();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op6Context* op6();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool compoundActionSempred(CompoundActionContext *_localctx, size_t predicateIndex);
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);
  bool identifyerSempred(IdentifyerContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpptest
