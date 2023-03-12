
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  StrawberryLexer : public antlr4::Lexer {
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
