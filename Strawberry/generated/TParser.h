
// Generated from /home/patrick/Documents/Interpreters/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  TParser : public antlr4::Parser {
public:
  enum {
    Id = 1, Number = 2, String = 3, LitString = 4, Digit = 5, Word = 6, 
    UcLetter = 7, LcLetter = 8, Sarrow = 9, Darrpw = 10, LRarrow = 11, RLarrow = 12, 
    Dot2 = 13, Dot3 = 14, As = 15, Nl = 16, Uscore = 17, AndSign = 18, Doll = 19, 
    Hash = 20, At = 21, ExPoint = 22, Qmark = 23, Colon = 24, Semi = 25, 
    Fslash = 26, Bar = 27, Dquote = 28, Squote = 29, Com = 30, Dot = 31, 
    Squig = 32, Btick = 33, Pow = 34, Star = 35, Bslash = 36, Mod = 37, 
    Plus = 38, Min = 39, SEq = 40, DEq = 41, Gt = 42, GtEq = 43, Lt = 44, 
    LtEq = 45, And = 46, Or = 47, PlusEq = 48, MinEq = 49, MultEq = 50, 
    DivEq = 51, ModEq = 52, PowEq = 53, Lbrack = 54, Rbrack = 55, Lbrace = 56, 
    Rbrace = 57, Lpar = 58, Rpar = 59, Ignore = 60
  };

  enum {
    RuleScript = 0, RuleNumberList = 1
  };

  explicit TParser(antlr4::TokenStream *input);

  TParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~TParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ScriptContext;
  class NumberListContext; 

  class  ScriptContext : public antlr4::ParserRuleContext {
  public:
    ScriptContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<NumberListContext *> numberList();
    NumberListContext* numberList(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Nl();
    antlr4::tree::TerminalNode* Nl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScriptContext* script();

  class  NumberListContext : public antlr4::ParserRuleContext {
  public:
    NumberListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Number();
    antlr4::tree::TerminalNode* Number(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Sarrow();
    antlr4::tree::TerminalNode* Sarrow(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberListContext* numberList();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpptest
