
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  StrawberryLexer : public antlr4::Lexer {
public:
  enum {
    Fn = 1, Decl = 2, If = 3, Unless = 4, Else = 5, While = 6, Until = 7, 
    For = 8, Return = 9, Break = 10, Next = 11, Last = 12, Once = 13, MatchArrow = 14, 
    RegWord = 15, RegDigit = 16, RegSpace = 17, RegNewline = 18, RegFSlash = 19, 
    RegReturnAll = 20, Id = 21, DefId = 22, Number = 23, Digit = 24, Word = 25, 
    Letter = 26, UcLetter = 27, LcLetter = 28, True = 29, False = 30, Null = 31, 
    DefOr = 32, Sarrow = 33, Darrow = 34, LRarrow = 35, RLarrow = 36, Dot2 = 37, 
    Dot3 = 38, As = 39, PlusEq = 40, MinEq = 41, MultEq = 42, DivEq = 43, 
    ModEq = 44, PowEq = 45, Increm = 46, Decrem = 47, Lbrack = 48, Rbrack = 49, 
    Lbrace = 50, Rbrace = 51, Lpar = 52, Rpar = 53, Pow = 54, Star = 55, 
    Bslash = 56, Mod = 57, Plus = 58, Min = 59, Eq = 60, BoolEq = 61, BoolNeq = 62, 
    Gt = 63, GtEq = 64, Lt = 65, LtEq = 66, And = 67, Or = 68, Uscore = 69, 
    AndSign = 70, Doll = 71, DollLit = 72, Hash = 73, At = 74, ExPoint = 75, 
    Qmark = 76, Colon = 77, Semi = 78, Fslash = 79, Bar = 80, Dquote = 81, 
    Squote = 82, Com = 83, Dot = 84, Squig = 85, Btick = 86, Ignore = 87, 
    WS = 88
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
