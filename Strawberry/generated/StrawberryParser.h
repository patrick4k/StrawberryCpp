
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  StrawberryParser : public antlr4::Parser {
public:
  enum {
    Eof = 1, Fn = 2, Decl = 3, If = 4, Unless = 5, Else = 6, While = 7, 
    Until = 8, For = 9, Break = 10, Next = 11, Last = 12, Once = 13, Id = 14, 
    Number = 15, String = 16, LitString = 17, Digit = 18, Word = 19, UcLetter = 20, 
    LcLetter = 21, True = 22, False = 23, Null = 24, Sarrow = 25, Darrpw = 26, 
    LRarrow = 27, RLarrow = 28, Dot2 = 29, Dot3 = 30, As = 31, Nl = 32, 
    Uscore = 33, AndSign = 34, Doll = 35, Hash = 36, At = 37, ExPoint = 38, 
    Qmark = 39, Colon = 40, Semi = 41, Fslash = 42, Bar = 43, Dquote = 44, 
    Squote = 45, Com = 46, Dot = 47, Squig = 48, Btick = 49, Pow = 50, Star = 51, 
    Bslash = 52, Mod = 53, Plus = 54, Min = 55, Eq = 56, BoolEq = 57, Gt = 58, 
    GtEq = 59, Lt = 60, LtEq = 61, And = 62, Or = 63, PlusEq = 64, MinEq = 65, 
    MultEq = 66, DivEq = 67, ModEq = 68, PowEq = 69, Lbrack = 70, Rbrack = 71, 
    Lbrace = 72, Rbrace = 73, Lpar = 74, Rpar = 75, Ignore = 76
  };

  enum {
    RuleScript = 0, RuleStatement = 1, RuleExpression = 2, RuleFnDecl = 3
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
  class StatementContext;
  class ExpressionContext;
  class FnDeclContext; 

  class  ScriptContext : public antlr4::ParserRuleContext {
  public:
    ScriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Eof();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Nl();
    antlr4::tree::TerminalNode* Nl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScriptContext* script();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  FnDeclContext : public antlr4::ParserRuleContext {
  public:
    FnDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Fn();
    antlr4::tree::TerminalNode *Id();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FnDeclContext* fnDecl();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpptest
