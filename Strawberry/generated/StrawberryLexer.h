
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  StrawberryLexer : public antlr4::Lexer {
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
    Rbrace = 82, Lpar = 83, Rpar = 84, WL = 85, WU = 86, Ignore = 87
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
