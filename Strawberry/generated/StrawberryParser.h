
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  StrawberryParser : public antlr4::Parser {
public:
  enum {
    Fn = 1, Decl = 2, If = 3, Unless = 4, Else = 5, While = 6, Until = 7, 
    For = 8, Return = 9, Break = 10, Next = 11, Last = 12, Once = 13, MatchArrow = 14, 
    RegWord = 15, RegDigit = 16, RegSpace = 17, RegNewline = 18, RegReturnAll = 19, 
    Id = 20, Number = 21, Digit = 22, Word = 23, Letter = 24, UcLetter = 25, 
    LcLetter = 26, True = 27, False = 28, Null = 29, DefOr = 30, Sarrow = 31, 
    Darrpw = 32, LRarrow = 33, RLarrow = 34, Dot2 = 35, Dot3 = 36, As = 37, 
    Uscore = 38, AndSign = 39, Doll = 40, DollLit = 41, Hash = 42, At = 43, 
    ExPoint = 44, Qmark = 45, Colon = 46, Semi = 47, Fslash = 48, Bar = 49, 
    Dquote = 50, Squote = 51, Com = 52, Dot = 53, Squig = 54, Btick = 55, 
    Pow = 56, Star = 57, Bslash = 58, Mod = 59, Plus = 60, Min = 61, Eq = 62, 
    BoolEq = 63, BoolNeq = 64, Gt = 65, GtEq = 66, Lt = 67, LtEq = 68, And = 69, 
    Or = 70, PlusEq = 71, MinEq = 72, MultEq = 73, DivEq = 74, ModEq = 75, 
    PowEq = 76, Increm = 77, Decrem = 78, Lbrack = 79, Rbrack = 80, Lbrace = 81, 
    Rbrace = 82, Lpar = 83, Rpar = 84, WL = 85, WU = 86, Ignore = 87, WS = 88
  };

  enum {
    RuleScript = 0, RuleDeclaration = 1, RuleAction = 2, RuleScope = 3, 
    RuleStatement = 4, RuleKeywordStatement = 5, RuleBody = 6, RuleControlFlow = 7, 
    RuleLoop = 8, RuleLoopScope = 9, RuleLoopBody = 10, RuleCompoundStatement = 11, 
    RuleCompoundAction = 12, RuleIfStatement = 13, RuleIfScope = 14, RuleIfBody = 15, 
    RuleConditionalKeywords = 16, RuleLoopKeywords = 17, RuleFnDeclaration = 18, 
    RuleLambda = 19, RuleParameters = 20, RuleArgs = 21, RuleArgument = 22, 
    RulePattern = 23, RulePatternContent = 24, RuleValue = 25, RuleExpression = 26, 
    RuleLiteral = 27, RuleStringContent = 28, RuleAssign = 29, RuleIdentifyer = 30, 
    RuleLooseFnCall = 31, RuleOp1 = 32, RuleOp2 = 33, RuleOp3 = 34, RuleOp4 = 35, 
    RulePrefix = 36, RuleOp5 = 37, RuleOp6 = 38, RuleSuffix = 39
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
  class ControlFlowContext;
  class LoopContext;
  class LoopScopeContext;
  class LoopBodyContext;
  class CompoundStatementContext;
  class CompoundActionContext;
  class IfStatementContext;
  class IfScopeContext;
  class IfBodyContext;
  class ConditionalKeywordsContext;
  class LoopKeywordsContext;
  class FnDeclarationContext;
  class LambdaContext;
  class ParametersContext;
  class ArgsContext;
  class ArgumentContext;
  class PatternContext;
  class PatternContentContext;
  class ValueContext;
  class ExpressionContext;
  class LiteralContext;
  class StringContentContext;
  class AssignContext;
  class IdentifyerContext;
  class LooseFnCallContext;
  class Op1Context;
  class Op2Context;
  class Op3Context;
  class Op4Context;
  class PrefixContext;
  class Op5Context;
  class Op6Context;
  class SuffixContext; 

  class  ScriptContext : public antlr4::ParserRuleContext {
  public:
    ScriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<ActionContext *> action();
    ActionContext* action(size_t i);

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
    ControlFlowContext *controlFlow();
    DeclarationContext *declaration();

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
    LoopScopeContext *loopScope();
    LoopBodyContext *loopBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopContext* loop();

  class  LoopScopeContext : public antlr4::ParserRuleContext {
  public:
    LoopScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoopKeywordsContext *loopKeywords();
    ExpressionContext *expression();
    ScopeContext *scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopScopeContext* loopScope();

  class  LoopBodyContext : public antlr4::ParserRuleContext {
  public:
    LoopBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoopKeywordsContext *loopKeywords();
    antlr4::tree::TerminalNode *Lpar();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Rpar();
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoopBodyContext* loopBody();

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
   
    CompoundActionContext() = default;
    void copyFrom(CompoundActionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StatementCompoundContext : public CompoundActionContext {
  public:
    StatementCompoundContext(CompoundActionContext *ctx);

    StatementContext *statement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfScopeCompoundContext : public CompoundActionContext {
  public:
    IfScopeCompoundContext(CompoundActionContext *ctx);

    IfScopeContext *ifScope();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoopScopeCompoundContext : public CompoundActionContext {
  public:
    LoopScopeCompoundContext(CompoundActionContext *ctx);

    LoopScopeContext *loopScope();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfRegexCompoundContext : public CompoundActionContext {
  public:
    IfRegexCompoundContext(CompoundActionContext *ctx);

    std::vector<CompoundActionContext *> compoundAction();
    CompoundActionContext* compoundAction(size_t i);
    ConditionalKeywordsContext *conditionalKeywords();
    PatternContext *pattern();
    antlr4::tree::TerminalNode *Else();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfCompoundContext : public CompoundActionContext {
  public:
    IfCompoundContext(CompoundActionContext *ctx);

    std::vector<CompoundActionContext *> compoundAction();
    CompoundActionContext* compoundAction(size_t i);
    ConditionalKeywordsContext *conditionalKeywords();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Else();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CompoundActionContext* compoundAction();
  CompoundActionContext* compoundAction(int precedence);
  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfScopeContext *ifScope();
    IfBodyContext *ifBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  IfScopeContext : public antlr4::ParserRuleContext {
  public:
    IfScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IfScopeContext() = default;
    void copyFrom(IfScopeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PatternIfScopeContext : public IfScopeContext {
  public:
    PatternIfScopeContext(IfScopeContext *ctx);

    ConditionalKeywordsContext *conditionalKeywords();
    PatternContext *pattern();
    ScopeContext *scope();
    antlr4::tree::TerminalNode *Else();
    BodyContext *body();
    IfStatementContext *ifStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprIfScopeContext : public IfScopeContext {
  public:
    ExprIfScopeContext(IfScopeContext *ctx);

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

  IfScopeContext* ifScope();

  class  IfBodyContext : public antlr4::ParserRuleContext {
  public:
    IfBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IfBodyContext() = default;
    void copyFrom(IfBodyContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprIfBodyContext : public IfBodyContext {
  public:
    ExprIfBodyContext(IfBodyContext *ctx);

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

  class  PatternIfBodyContext : public IfBodyContext {
  public:
    PatternIfBodyContext(IfBodyContext *ctx);

    ConditionalKeywordsContext *conditionalKeywords();
    antlr4::tree::TerminalNode *Lpar();
    PatternContext *pattern();
    antlr4::tree::TerminalNode *Rpar();
    std::vector<BodyContext *> body();
    BodyContext* body(size_t i);
    antlr4::tree::TerminalNode *Else();
    IfStatementContext *ifStatement();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IfBodyContext* ifBody();

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

  class  WhileLoopContext : public LoopKeywordsContext {
  public:
    WhileLoopContext(LoopKeywordsContext *ctx);

    antlr4::tree::TerminalNode *While();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForLoopContext : public LoopKeywordsContext {
  public:
    ForLoopContext(LoopKeywordsContext *ctx);

    antlr4::tree::TerminalNode *For();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UntilLoopContext : public LoopKeywordsContext {
  public:
    UntilLoopContext(LoopKeywordsContext *ctx);

    antlr4::tree::TerminalNode *Until();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LoopKeywordsContext* loopKeywords();

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

  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PatternContext() = default;
    void copyFrom(PatternContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefaultPatternContext : public PatternContext {
  public:
    DefaultPatternContext(PatternContext *ctx);

    antlr4::tree::TerminalNode *Lbrace();
    antlr4::tree::TerminalNode *Rbrace();
    std::vector<antlr4::tree::TerminalNode *> Letter();
    antlr4::tree::TerminalNode* Letter(size_t i);
    std::vector<PatternContentContext *> patternContent();
    PatternContentContext* patternContent(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprPatternContext : public PatternContext {
  public:
    ExprPatternContext(PatternContext *ctx);

    antlr4::tree::TerminalNode *Lbrace();
    antlr4::tree::TerminalNode *Rbrace();
    antlr4::tree::TerminalNode *Sarrow();
    ExpressionContext *expression();
    std::vector<antlr4::tree::TerminalNode *> Letter();
    antlr4::tree::TerminalNode* Letter(size_t i);
    std::vector<PatternContentContext *> patternContent();
    PatternContentContext* patternContent(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PatternContext* pattern();

  class  PatternContentContext : public antlr4::ParserRuleContext {
  public:
    PatternContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PatternContentContext() = default;
    void copyFrom(PatternContentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OtherContext : public PatternContentContext {
  public:
    OtherContext(PatternContentContext *ctx);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WildCardContext : public PatternContentContext {
  public:
    WildCardContext(PatternContentContext *ctx);

    antlr4::tree::TerminalNode *Dot();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WordContext : public PatternContentContext {
  public:
    WordContext(PatternContentContext *ctx);

    antlr4::tree::TerminalNode *RegWord();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PatternContentContext* patternContent();

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

  class  SuffixExprContext : public ExpressionContext {
  public:
    SuffixExprContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    SuffixContext *suffix();
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
    std::vector<StringContentContext *> stringContent();
    StringContentContext* stringContent(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LiteralContext* literal();

  class  StringContentContext : public antlr4::ParserRuleContext {
  public:
    StringContentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StringContentContext() = default;
    void copyFrom(StringContentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdentityStringContext : public StringContentContext {
  public:
    IdentityStringContext(StringContentContext *ctx);

    antlr4::tree::TerminalNode *Doll();
    IdentifyerContext *identifyer();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DollarSignStringContext : public StringContentContext {
  public:
    DollarSignStringContext(StringContentContext *ctx);

    antlr4::tree::TerminalNode *DollLit();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OtherStringContext : public StringContentContext {
  public:
    OtherStringContext(StringContentContext *ctx);

    antlr4::tree::TerminalNode *Dquote();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StringContentContext* stringContent();

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
    antlr4::tree::TerminalNode *Id();
    std::vector<ArgumentContext *> argument();
    ArgumentContext* argument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Com();
    antlr4::tree::TerminalNode* Com(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LooseFnCallContext* looseFnCall();

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

  PrefixContext* prefix();

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

  class  SuffixContext : public antlr4::ParserRuleContext {
  public:
    SuffixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SuffixContext() = default;
    void copyFrom(SuffixContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OrDefaultContext : public SuffixContext {
  public:
    OrDefaultContext(SuffixContext *ctx);

    antlr4::tree::TerminalNode *DefOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExcitedSuffContext : public SuffixContext {
  public:
    ExcitedSuffContext(SuffixContext *ctx);

    antlr4::tree::TerminalNode *ExPoint();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SuffixContext* suffix();


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
