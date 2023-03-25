
// Generated from C:/Users/Patrick/Documents/Code/StrawberryParent/Strawberry/StrawberryLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  StrawberryLexer : public antlr4::Lexer {
public:
  enum {
    Fn = 1, Decl = 2, If = 3, Unless = 4, Else = 5, While = 6, Until = 7, 
    For = 8, Return = 9, Break = 10, Next = 11, Last = 12, Once = 13, MatchArrow = 14, 
    RegWord = 15, RegDigit = 16, RegSpace = 17, RegNewline = 18, RegFSlash = 19, 
    RegReturnAll = 20, Id = 21, DefId = 22, Number = 23, String = 24, StringLit = 25, 
    Digit = 26, Word = 27, Letter = 28, UcLetter = 29, LcLetter = 30, True = 31, 
    False = 32, Null = 33, DefOr = 34, Sarrow = 35, Darrow = 36, LRarrow = 37, 
    RLarrow = 38, Dot2 = 39, Dot3 = 40, As = 41, PlusEq = 42, MinEq = 43, 
    MultEq = 44, DivEq = 45, ModEq = 46, PowEq = 47, Increm = 48, Decrem = 49, 
    Lbrack = 50, Rbrack = 51, Lbrace = 52, Rbrace = 53, Lpar = 54, Rpar = 55, 
    Pow = 56, Star = 57, Bslash = 58, Mod = 59, Plus = 60, Min = 61, Eq = 62, 
    BoolEq = 63, BoolNeq = 64, Gt = 65, GtEq = 66, Lt = 67, LtEq = 68, And = 69, 
    Or = 70, Uscore = 71, AndSign = 72, Doll = 73, DollLit = 74, Hash = 75, 
    At = 76, ExPoint = 77, Qmark = 78, Colon = 79, Semi = 80, Fslash = 81, 
    Bar = 82, Dquote = 83, Squote = 84, Com = 85, Dot = 86, Squig = 87, 
    Btick = 88, Ignore = 89, WS = 90, RETURN = 91
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
