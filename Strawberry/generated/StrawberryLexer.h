
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  StrawberryLexer : public antlr4::Lexer {
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

  explicit StrawberryLexer(antlr4::CharStream *input);

  ~StrawberryLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace antlrcpptest
