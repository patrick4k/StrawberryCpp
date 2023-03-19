
// Generated from /Users/patrickkennedy/Desktop/antlr4/StrawberryCpp/Strawberry/StrawberryParser.g4 by ANTLR 4.12.0


#include "StrawberryParserListener.h"
#include "StrawberryParserVisitor.h"

#include "StrawberryParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;

using namespace antlr4;

namespace {

struct StrawberryParserStaticData final {
  StrawberryParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  StrawberryParserStaticData(const StrawberryParserStaticData&) = delete;
  StrawberryParserStaticData(StrawberryParserStaticData&&) = delete;
  StrawberryParserStaticData& operator=(const StrawberryParserStaticData&) = delete;
  StrawberryParserStaticData& operator=(StrawberryParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag strawberryparserParserOnceFlag;
StrawberryParserStaticData *strawberryparserParserStaticData = nullptr;

void strawberryparserParserInitialize() {
  assert(strawberryparserParserStaticData == nullptr);
  auto staticData = std::make_unique<StrawberryParserStaticData>(
    std::vector<std::string>{
      "script", "declaration", "action", "scope", "statement", "keywordStatement", 
      "body", "controlFlow", "loop", "loopScope", "loopBody", "compoundStatement", 
      "compoundAction", "ifStatement", "ifScope", "ifBody", "conditionalKeywords", 
      "loopKeywords", "fnDeclaration", "lambda", "parameters", "args", "argument", 
      "pattern", "patternContent", "value", "expression", "literal", "stringContent", 
      "assign", "identifyer", "looseFnCall", "op1", "op2", "op3", "op4", 
      "prefix", "op5", "op6", "suffix"
    },
    std::vector<std::string>{
      "", "'fn'", "'let'", "'if'", "'unless'", "'else'", "'while'", "'until'", 
      "'for'", "'return'", "'break'", "'next'", "'last'", "'once'", "'~>'", 
      "'\\w'", "'\\d'", "'\\s'", "'\\n'", "'return all'", "", "", "", "", 
      "", "", "", "'true'", "'false'", "'null'", "'\\\\'", "'->'", "'=>'", 
      "'>>'", "'<<'", "'..'", "'...'", "'as'", "'_'", "'&'", "'$'", "'\\$'", 
      "'#'", "'@'", "'!'", "'\\u003F'", "':'", "';'", "'\\'", "'|'", "'\"'", 
      "'''", "','", "'.'", "'~'", "'`'", "'^'", "'*'", "'/'", "'%'", "'+'", 
      "'-'", "'='", "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", "'&&'", 
      "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'++'", "'--'", 
      "'['", "']'", "'{'", "'}'", "'('", "')'", "'w'", "'W'"
    },
    std::vector<std::string>{
      "", "Fn", "Decl", "If", "Unless", "Else", "While", "Until", "For", 
      "Return", "Break", "Next", "Last", "Once", "MatchArrow", "RegWord", 
      "RegDigit", "RegSpace", "RegNewline", "RegReturnAll", "Id", "Number", 
      "Digit", "Word", "Letter", "UcLetter", "LcLetter", "True", "False", 
      "Null", "DefOr", "Sarrow", "Darrpw", "LRarrow", "RLarrow", "Dot2", 
      "Dot3", "As", "Uscore", "AndSign", "Doll", "DollLit", "Hash", "At", 
      "ExPoint", "Qmark", "Colon", "Semi", "Fslash", "Bar", "Dquote", "Squote", 
      "Com", "Dot", "Squig", "Btick", "Pow", "Star", "Bslash", "Mod", "Plus", 
      "Min", "Eq", "BoolEq", "BoolNeq", "Gt", "GtEq", "Lt", "LtEq", "And", 
      "Or", "PlusEq", "MinEq", "MultEq", "DivEq", "ModEq", "PowEq", "Increm", 
      "Decrem", "Lbrack", "Rbrack", "Lbrace", "Rbrace", "Lpar", "Rpar", 
      "WL", "WU", "Ignore", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,88,565,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,1,0,4,0,82,8,0,11,0,12,0,83,
  	1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,3,2,96,8,2,1,3,1,3,5,3,100,8,
  	3,10,3,12,3,103,9,3,1,3,1,3,1,4,1,4,1,4,3,4,110,8,4,1,5,1,5,3,5,114,8,
  	5,1,5,1,5,1,5,1,5,3,5,120,8,5,1,5,1,5,3,5,124,8,5,1,6,1,6,1,6,1,6,3,6,
  	130,8,6,1,7,1,7,1,7,1,7,1,7,3,7,137,8,7,1,8,1,8,3,8,141,8,8,1,9,1,9,1,
  	9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	3,11,160,8,11,5,11,162,8,11,10,11,12,11,165,9,11,1,12,1,12,1,12,1,12,
  	3,12,171,8,12,1,12,1,12,1,12,1,12,1,12,3,12,178,8,12,1,12,1,12,1,12,1,
  	12,1,12,3,12,185,8,12,5,12,187,8,12,10,12,12,12,190,9,12,1,13,1,13,3,
  	13,194,8,13,1,14,1,14,1,14,1,14,1,14,1,14,3,14,202,8,14,3,14,204,8,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,3,14,212,8,14,3,14,214,8,14,3,14,216,8,
  	14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,226,8,15,3,15,228,8,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,238,8,15,3,15,240,8,15,3,
  	15,242,8,15,1,16,1,16,3,16,246,8,16,1,17,1,17,1,17,3,17,251,8,17,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,
  	5,20,268,8,20,10,20,12,20,271,9,20,1,20,3,20,274,8,20,1,20,1,20,5,20,
  	278,8,20,10,20,12,20,281,9,20,1,20,1,20,3,20,285,8,20,1,21,1,21,1,21,
  	5,21,290,8,21,10,21,12,21,293,9,21,3,21,295,8,21,1,22,1,22,1,22,1,22,
  	3,22,301,8,22,1,23,5,23,304,8,23,10,23,12,23,307,9,23,1,23,1,23,5,23,
  	311,8,23,10,23,12,23,314,9,23,1,23,1,23,1,23,5,23,319,8,23,10,23,12,23,
  	322,9,23,1,23,1,23,5,23,326,8,23,10,23,12,23,329,9,23,1,23,5,23,332,8,
  	23,10,23,12,23,335,9,23,1,23,1,23,5,23,339,8,23,10,23,12,23,342,9,23,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,23,5,23,351,8,23,10,23,12,23,354,9,23,
  	1,23,1,23,5,23,358,8,23,10,23,12,23,361,9,23,3,23,363,8,23,1,24,1,24,
  	1,24,3,24,368,8,24,1,25,1,25,3,25,372,8,25,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,386,8,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,
  	26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,5,26,414,8,26,10,26,12,26,417,9,
  	26,1,27,1,27,5,27,421,8,27,10,27,12,27,424,9,27,1,27,1,27,1,27,5,27,429,
  	8,27,10,27,12,27,432,9,27,1,27,1,27,1,27,1,27,1,27,1,27,3,27,440,8,27,
  	1,28,1,28,1,28,1,28,3,28,446,8,28,1,29,1,29,1,29,1,29,1,29,3,29,453,8,
  	29,1,29,1,29,1,29,3,29,458,8,29,1,29,1,29,1,29,3,29,463,8,29,1,29,1,29,
  	1,29,3,29,468,8,29,1,29,1,29,1,29,3,29,473,8,29,1,29,1,29,1,29,3,29,478,
  	8,29,1,29,1,29,1,29,3,29,483,8,29,1,29,1,29,1,29,3,29,488,8,29,1,29,1,
  	29,3,29,492,8,29,1,29,3,29,495,8,29,1,30,1,30,1,30,3,30,500,8,30,1,30,
  	1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,30,5,30,515,
  	8,30,10,30,12,30,518,9,30,1,31,1,31,1,31,1,31,5,31,524,8,31,10,31,12,
  	31,527,9,31,1,32,1,32,1,33,1,33,1,33,3,33,534,8,33,1,34,1,34,3,34,538,
  	8,34,1,35,1,35,3,35,542,8,35,1,36,1,36,1,36,3,36,547,8,36,1,37,1,37,1,
  	37,1,37,1,37,1,37,3,37,555,8,37,1,38,1,38,3,38,559,8,38,1,39,1,39,3,39,
  	563,8,39,1,39,1,430,3,24,52,60,40,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,66,68,70,72,
  	74,76,78,0,1,1,0,50,50,640,0,81,1,0,0,0,2,87,1,0,0,0,4,95,1,0,0,0,6,97,
  	1,0,0,0,8,109,1,0,0,0,10,123,1,0,0,0,12,129,1,0,0,0,14,136,1,0,0,0,16,
  	140,1,0,0,0,18,142,1,0,0,0,20,146,1,0,0,0,22,152,1,0,0,0,24,170,1,0,0,
  	0,26,193,1,0,0,0,28,215,1,0,0,0,30,241,1,0,0,0,32,245,1,0,0,0,34,250,
  	1,0,0,0,36,252,1,0,0,0,38,259,1,0,0,0,40,284,1,0,0,0,42,294,1,0,0,0,44,
  	300,1,0,0,0,46,362,1,0,0,0,48,367,1,0,0,0,50,371,1,0,0,0,52,385,1,0,0,
  	0,54,439,1,0,0,0,56,445,1,0,0,0,58,494,1,0,0,0,60,499,1,0,0,0,62,519,
  	1,0,0,0,64,528,1,0,0,0,66,533,1,0,0,0,68,537,1,0,0,0,70,541,1,0,0,0,72,
  	546,1,0,0,0,74,554,1,0,0,0,76,558,1,0,0,0,78,562,1,0,0,0,80,82,3,4,2,
  	0,81,80,1,0,0,0,82,83,1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,85,1,0,0,
  	0,85,86,5,0,0,1,86,1,1,0,0,0,87,88,3,36,18,0,88,3,1,0,0,0,89,90,3,8,4,
  	0,90,91,5,47,0,0,91,96,1,0,0,0,92,96,3,6,3,0,93,96,3,14,7,0,94,96,3,2,
  	1,0,95,89,1,0,0,0,95,92,1,0,0,0,95,93,1,0,0,0,95,94,1,0,0,0,96,5,1,0,
  	0,0,97,101,5,81,0,0,98,100,3,4,2,0,99,98,1,0,0,0,100,103,1,0,0,0,101,
  	99,1,0,0,0,101,102,1,0,0,0,102,104,1,0,0,0,103,101,1,0,0,0,104,105,5,
  	82,0,0,105,7,1,0,0,0,106,110,3,50,25,0,107,110,3,6,3,0,108,110,3,10,5,
  	0,109,106,1,0,0,0,109,107,1,0,0,0,109,108,1,0,0,0,110,9,1,0,0,0,111,113,
  	5,9,0,0,112,114,3,50,25,0,113,112,1,0,0,0,113,114,1,0,0,0,114,124,1,0,
  	0,0,115,116,5,13,0,0,116,124,3,8,4,0,117,119,5,11,0,0,118,120,3,52,26,
  	0,119,118,1,0,0,0,119,120,1,0,0,0,120,124,1,0,0,0,121,124,5,12,0,0,122,
  	124,5,10,0,0,123,111,1,0,0,0,123,115,1,0,0,0,123,117,1,0,0,0,123,121,
  	1,0,0,0,123,122,1,0,0,0,124,11,1,0,0,0,125,130,3,6,3,0,126,127,3,8,4,
  	0,127,128,5,47,0,0,128,130,1,0,0,0,129,125,1,0,0,0,129,126,1,0,0,0,130,
  	13,1,0,0,0,131,132,3,22,11,0,132,133,5,47,0,0,133,137,1,0,0,0,134,137,
  	3,16,8,0,135,137,3,26,13,0,136,131,1,0,0,0,136,134,1,0,0,0,136,135,1,
  	0,0,0,137,15,1,0,0,0,138,141,3,18,9,0,139,141,3,20,10,0,140,138,1,0,0,
  	0,140,139,1,0,0,0,141,17,1,0,0,0,142,143,3,34,17,0,143,144,3,52,26,0,
  	144,145,3,6,3,0,145,19,1,0,0,0,146,147,3,34,17,0,147,148,5,83,0,0,148,
  	149,3,52,26,0,149,150,5,84,0,0,150,151,3,12,6,0,151,21,1,0,0,0,152,163,
  	3,24,12,0,153,159,3,34,17,0,154,160,3,52,26,0,155,156,5,83,0,0,156,157,
  	3,42,21,0,157,158,5,84,0,0,158,160,1,0,0,0,159,154,1,0,0,0,159,155,1,
  	0,0,0,160,162,1,0,0,0,161,153,1,0,0,0,162,165,1,0,0,0,163,161,1,0,0,0,
  	163,164,1,0,0,0,164,23,1,0,0,0,165,163,1,0,0,0,166,167,6,12,-1,0,167,
  	171,3,28,14,0,168,171,3,18,9,0,169,171,3,8,4,0,170,166,1,0,0,0,170,168,
  	1,0,0,0,170,169,1,0,0,0,171,188,1,0,0,0,172,173,10,5,0,0,173,174,3,32,
  	16,0,174,177,3,52,26,0,175,176,5,5,0,0,176,178,3,24,12,0,177,175,1,0,
  	0,0,177,178,1,0,0,0,178,187,1,0,0,0,179,180,10,4,0,0,180,181,3,32,16,
  	0,181,184,3,46,23,0,182,183,5,5,0,0,183,185,3,24,12,0,184,182,1,0,0,0,
  	184,185,1,0,0,0,185,187,1,0,0,0,186,172,1,0,0,0,186,179,1,0,0,0,187,190,
  	1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,189,25,1,0,0,0,190,188,1,0,0,
  	0,191,194,3,28,14,0,192,194,3,30,15,0,193,191,1,0,0,0,193,192,1,0,0,0,
  	194,27,1,0,0,0,195,196,3,32,16,0,196,197,3,52,26,0,197,203,3,6,3,0,198,
  	201,5,5,0,0,199,202,3,12,6,0,200,202,3,26,13,0,201,199,1,0,0,0,201,200,
  	1,0,0,0,202,204,1,0,0,0,203,198,1,0,0,0,203,204,1,0,0,0,204,216,1,0,0,
  	0,205,206,3,32,16,0,206,207,3,46,23,0,207,213,3,6,3,0,208,211,5,5,0,0,
  	209,212,3,12,6,0,210,212,3,26,13,0,211,209,1,0,0,0,211,210,1,0,0,0,212,
  	214,1,0,0,0,213,208,1,0,0,0,213,214,1,0,0,0,214,216,1,0,0,0,215,195,1,
  	0,0,0,215,205,1,0,0,0,216,29,1,0,0,0,217,218,3,32,16,0,218,219,5,83,0,
  	0,219,220,3,52,26,0,220,221,5,84,0,0,221,227,3,12,6,0,222,225,5,5,0,0,
  	223,226,3,12,6,0,224,226,3,26,13,0,225,223,1,0,0,0,225,224,1,0,0,0,226,
  	228,1,0,0,0,227,222,1,0,0,0,227,228,1,0,0,0,228,242,1,0,0,0,229,230,3,
  	32,16,0,230,231,5,83,0,0,231,232,3,46,23,0,232,233,5,84,0,0,233,239,3,
  	12,6,0,234,237,5,5,0,0,235,238,3,12,6,0,236,238,3,26,13,0,237,235,1,0,
  	0,0,237,236,1,0,0,0,238,240,1,0,0,0,239,234,1,0,0,0,239,240,1,0,0,0,240,
  	242,1,0,0,0,241,217,1,0,0,0,241,229,1,0,0,0,242,31,1,0,0,0,243,246,5,
  	3,0,0,244,246,5,4,0,0,245,243,1,0,0,0,245,244,1,0,0,0,246,33,1,0,0,0,
  	247,251,5,8,0,0,248,251,5,6,0,0,249,251,5,7,0,0,250,247,1,0,0,0,250,248,
  	1,0,0,0,250,249,1,0,0,0,251,35,1,0,0,0,252,253,5,1,0,0,253,254,5,20,0,
  	0,254,255,5,83,0,0,255,256,3,40,20,0,256,257,5,84,0,0,257,258,3,6,3,0,
  	258,37,1,0,0,0,259,260,5,83,0,0,260,261,3,40,20,0,261,262,5,84,0,0,262,
  	263,5,32,0,0,263,264,3,8,4,0,264,39,1,0,0,0,265,266,5,20,0,0,266,268,
  	5,52,0,0,267,265,1,0,0,0,268,271,1,0,0,0,269,267,1,0,0,0,269,270,1,0,
  	0,0,270,272,1,0,0,0,271,269,1,0,0,0,272,274,5,20,0,0,273,269,1,0,0,0,
  	273,274,1,0,0,0,274,285,1,0,0,0,275,276,5,20,0,0,276,278,5,52,0,0,277,
  	275,1,0,0,0,278,281,1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,282,1,
  	0,0,0,281,279,1,0,0,0,282,283,5,20,0,0,283,285,5,36,0,0,284,273,1,0,0,
  	0,284,279,1,0,0,0,285,41,1,0,0,0,286,291,3,44,22,0,287,288,5,52,0,0,288,
  	290,3,44,22,0,289,287,1,0,0,0,290,293,1,0,0,0,291,289,1,0,0,0,291,292,
  	1,0,0,0,292,295,1,0,0,0,293,291,1,0,0,0,294,286,1,0,0,0,294,295,1,0,0,
  	0,295,43,1,0,0,0,296,301,3,50,25,0,297,298,5,36,0,0,298,301,3,50,25,0,
  	299,301,3,62,31,0,300,296,1,0,0,0,300,297,1,0,0,0,300,299,1,0,0,0,301,
  	45,1,0,0,0,302,304,5,24,0,0,303,302,1,0,0,0,304,307,1,0,0,0,305,303,1,
  	0,0,0,305,306,1,0,0,0,306,308,1,0,0,0,307,305,1,0,0,0,308,312,5,81,0,
  	0,309,311,3,48,24,0,310,309,1,0,0,0,311,314,1,0,0,0,312,310,1,0,0,0,312,
  	313,1,0,0,0,313,315,1,0,0,0,314,312,1,0,0,0,315,363,5,82,0,0,316,320,
  	5,81,0,0,317,319,3,48,24,0,318,317,1,0,0,0,319,322,1,0,0,0,320,318,1,
  	0,0,0,320,321,1,0,0,0,321,323,1,0,0,0,322,320,1,0,0,0,323,327,5,82,0,
  	0,324,326,5,24,0,0,325,324,1,0,0,0,326,329,1,0,0,0,327,325,1,0,0,0,327,
  	328,1,0,0,0,328,363,1,0,0,0,329,327,1,0,0,0,330,332,5,24,0,0,331,330,
  	1,0,0,0,332,335,1,0,0,0,333,331,1,0,0,0,333,334,1,0,0,0,334,336,1,0,0,
  	0,335,333,1,0,0,0,336,340,5,81,0,0,337,339,3,48,24,0,338,337,1,0,0,0,
  	339,342,1,0,0,0,340,338,1,0,0,0,340,341,1,0,0,0,341,343,1,0,0,0,342,340,
  	1,0,0,0,343,344,5,82,0,0,344,345,5,31,0,0,345,363,3,52,26,0,346,347,3,
  	52,26,0,347,348,5,31,0,0,348,352,5,81,0,0,349,351,3,48,24,0,350,349,1,
  	0,0,0,351,354,1,0,0,0,352,350,1,0,0,0,352,353,1,0,0,0,353,355,1,0,0,0,
  	354,352,1,0,0,0,355,359,5,82,0,0,356,358,5,24,0,0,357,356,1,0,0,0,358,
  	361,1,0,0,0,359,357,1,0,0,0,359,360,1,0,0,0,360,363,1,0,0,0,361,359,1,
  	0,0,0,362,305,1,0,0,0,362,316,1,0,0,0,362,333,1,0,0,0,362,346,1,0,0,0,
  	363,47,1,0,0,0,364,368,5,15,0,0,365,368,5,53,0,0,366,368,9,0,0,0,367,
  	364,1,0,0,0,367,365,1,0,0,0,367,366,1,0,0,0,368,49,1,0,0,0,369,372,3,
  	52,26,0,370,372,3,38,19,0,371,369,1,0,0,0,371,370,1,0,0,0,372,51,1,0,
  	0,0,373,374,6,26,-1,0,374,375,5,83,0,0,375,376,3,52,26,0,376,377,5,84,
  	0,0,377,386,1,0,0,0,378,386,3,58,29,0,379,380,3,72,36,0,380,381,3,52,
  	26,7,381,386,1,0,0,0,382,386,3,60,30,0,383,386,3,54,27,0,384,386,3,62,
  	31,0,385,373,1,0,0,0,385,378,1,0,0,0,385,379,1,0,0,0,385,382,1,0,0,0,
  	385,383,1,0,0,0,385,384,1,0,0,0,386,415,1,0,0,0,387,388,10,11,0,0,388,
  	389,3,64,32,0,389,390,3,52,26,12,390,414,1,0,0,0,391,392,10,10,0,0,392,
  	393,3,66,33,0,393,394,3,52,26,11,394,414,1,0,0,0,395,396,10,9,0,0,396,
  	397,3,68,34,0,397,398,3,52,26,10,398,414,1,0,0,0,399,400,10,8,0,0,400,
  	401,3,70,35,0,401,402,3,52,26,9,402,414,1,0,0,0,403,404,10,6,0,0,404,
  	405,3,74,37,0,405,406,3,52,26,7,406,414,1,0,0,0,407,408,10,5,0,0,408,
  	409,3,76,38,0,409,410,3,52,26,6,410,414,1,0,0,0,411,412,10,4,0,0,412,
  	414,3,78,39,0,413,387,1,0,0,0,413,391,1,0,0,0,413,395,1,0,0,0,413,399,
  	1,0,0,0,413,403,1,0,0,0,413,407,1,0,0,0,413,411,1,0,0,0,414,417,1,0,0,
  	0,415,413,1,0,0,0,415,416,1,0,0,0,416,53,1,0,0,0,417,415,1,0,0,0,418,
  	422,5,50,0,0,419,421,3,56,28,0,420,419,1,0,0,0,421,424,1,0,0,0,422,420,
  	1,0,0,0,422,423,1,0,0,0,423,425,1,0,0,0,424,422,1,0,0,0,425,440,5,50,
  	0,0,426,430,5,51,0,0,427,429,9,0,0,0,428,427,1,0,0,0,429,432,1,0,0,0,
  	430,431,1,0,0,0,430,428,1,0,0,0,431,433,1,0,0,0,432,430,1,0,0,0,433,440,
  	5,51,0,0,434,435,5,79,0,0,435,436,3,42,21,0,436,437,5,80,0,0,437,440,
  	1,0,0,0,438,440,5,21,0,0,439,418,1,0,0,0,439,426,1,0,0,0,439,434,1,0,
  	0,0,439,438,1,0,0,0,440,55,1,0,0,0,441,442,5,40,0,0,442,446,3,60,30,0,
  	443,446,5,41,0,0,444,446,8,0,0,0,445,441,1,0,0,0,445,443,1,0,0,0,445,
  	444,1,0,0,0,446,57,1,0,0,0,447,448,5,2,0,0,448,449,5,20,0,0,449,450,5,
  	62,0,0,450,495,3,50,25,0,451,453,3,60,30,0,452,451,1,0,0,0,452,453,1,
  	0,0,0,453,454,1,0,0,0,454,455,5,62,0,0,455,495,3,50,25,0,456,458,3,60,
  	30,0,457,456,1,0,0,0,457,458,1,0,0,0,458,459,1,0,0,0,459,460,5,76,0,0,
  	460,495,3,52,26,0,461,463,3,60,30,0,462,461,1,0,0,0,462,463,1,0,0,0,463,
  	464,1,0,0,0,464,465,5,73,0,0,465,495,3,52,26,0,466,468,3,60,30,0,467,
  	466,1,0,0,0,467,468,1,0,0,0,468,469,1,0,0,0,469,470,5,74,0,0,470,495,
  	3,52,26,0,471,473,3,60,30,0,472,471,1,0,0,0,472,473,1,0,0,0,473,474,1,
  	0,0,0,474,475,5,75,0,0,475,495,3,52,26,0,476,478,3,60,30,0,477,476,1,
  	0,0,0,477,478,1,0,0,0,478,479,1,0,0,0,479,480,5,71,0,0,480,495,3,52,26,
  	0,481,483,3,60,30,0,482,481,1,0,0,0,482,483,1,0,0,0,483,484,1,0,0,0,484,
  	485,5,72,0,0,485,495,3,52,26,0,486,488,3,60,30,0,487,486,1,0,0,0,487,
  	488,1,0,0,0,488,489,1,0,0,0,489,495,5,77,0,0,490,492,3,60,30,0,491,490,
  	1,0,0,0,491,492,1,0,0,0,492,493,1,0,0,0,493,495,5,78,0,0,494,447,1,0,
  	0,0,494,452,1,0,0,0,494,457,1,0,0,0,494,462,1,0,0,0,494,467,1,0,0,0,494,
  	472,1,0,0,0,494,477,1,0,0,0,494,482,1,0,0,0,494,487,1,0,0,0,494,491,1,
  	0,0,0,495,59,1,0,0,0,496,497,6,30,-1,0,497,500,5,20,0,0,498,500,5,38,
  	0,0,499,496,1,0,0,0,499,498,1,0,0,0,500,516,1,0,0,0,501,502,10,5,0,0,
  	502,503,5,53,0,0,503,515,5,20,0,0,504,505,10,4,0,0,505,506,5,79,0,0,506,
  	507,3,52,26,0,507,508,5,80,0,0,508,515,1,0,0,0,509,510,10,3,0,0,510,511,
  	5,83,0,0,511,512,3,42,21,0,512,513,5,84,0,0,513,515,1,0,0,0,514,501,1,
  	0,0,0,514,504,1,0,0,0,514,509,1,0,0,0,515,518,1,0,0,0,516,514,1,0,0,0,
  	516,517,1,0,0,0,517,61,1,0,0,0,518,516,1,0,0,0,519,520,5,20,0,0,520,525,
  	3,44,22,0,521,522,5,52,0,0,522,524,3,44,22,0,523,521,1,0,0,0,524,527,
  	1,0,0,0,525,523,1,0,0,0,525,526,1,0,0,0,526,63,1,0,0,0,527,525,1,0,0,
  	0,528,529,5,56,0,0,529,65,1,0,0,0,530,534,5,57,0,0,531,534,5,58,0,0,532,
  	534,5,59,0,0,533,530,1,0,0,0,533,531,1,0,0,0,533,532,1,0,0,0,534,67,1,
  	0,0,0,535,538,5,60,0,0,536,538,5,61,0,0,537,535,1,0,0,0,537,536,1,0,0,
  	0,538,69,1,0,0,0,539,542,5,30,0,0,540,542,5,35,0,0,541,539,1,0,0,0,541,
  	540,1,0,0,0,542,71,1,0,0,0,543,547,5,44,0,0,544,547,5,48,0,0,545,547,
  	5,61,0,0,546,543,1,0,0,0,546,544,1,0,0,0,546,545,1,0,0,0,547,73,1,0,0,
  	0,548,555,5,63,0,0,549,555,5,64,0,0,550,555,5,65,0,0,551,555,5,66,0,0,
  	552,555,5,67,0,0,553,555,5,68,0,0,554,548,1,0,0,0,554,549,1,0,0,0,554,
  	550,1,0,0,0,554,551,1,0,0,0,554,552,1,0,0,0,554,553,1,0,0,0,555,75,1,
  	0,0,0,556,559,5,70,0,0,557,559,5,69,0,0,558,556,1,0,0,0,558,557,1,0,0,
  	0,559,77,1,0,0,0,560,563,5,30,0,0,561,563,5,44,0,0,562,560,1,0,0,0,562,
  	561,1,0,0,0,563,79,1,0,0,0,76,83,95,101,109,113,119,123,129,136,140,159,
  	163,170,177,184,186,188,193,201,203,211,213,215,225,227,237,239,241,245,
  	250,269,273,279,284,291,294,300,305,312,320,327,333,340,352,359,362,367,
  	371,385,413,415,422,430,439,445,452,457,462,467,472,477,482,487,491,494,
  	499,514,516,525,533,537,541,546,554,558,562
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  strawberryparserParserStaticData = staticData.release();
}

}

StrawberryParser::StrawberryParser(TokenStream *input) : StrawberryParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

StrawberryParser::StrawberryParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  StrawberryParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *strawberryparserParserStaticData->atn, strawberryparserParserStaticData->decisionToDFA, strawberryparserParserStaticData->sharedContextCache, options);
}

StrawberryParser::~StrawberryParser() {
  delete _interpreter;
}

const atn::ATN& StrawberryParser::getATN() const {
  return *strawberryparserParserStaticData->atn;
}

std::string StrawberryParser::getGrammarFileName() const {
  return "StrawberryParser.g4";
}

const std::vector<std::string>& StrawberryParser::getRuleNames() const {
  return strawberryparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& StrawberryParser::getVocabulary() const {
  return strawberryparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView StrawberryParser::getSerializedATN() const {
  return strawberryparserParserStaticData->serializedATN;
}


//----------------- ScriptContext ------------------------------------------------------------------

StrawberryParser::ScriptContext::ScriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StrawberryParser::ScriptContext::EOF() {
  return getToken(StrawberryParser::EOF, 0);
}

std::vector<StrawberryParser::ActionContext *> StrawberryParser::ScriptContext::action() {
  return getRuleContexts<StrawberryParser::ActionContext>();
}

StrawberryParser::ActionContext* StrawberryParser::ScriptContext::action(size_t i) {
  return getRuleContext<StrawberryParser::ActionContext>(i);
}


size_t StrawberryParser::ScriptContext::getRuleIndex() const {
  return StrawberryParser::RuleScript;
}

void StrawberryParser::ScriptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScript(this);
}

void StrawberryParser::ScriptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScript(this);
}


std::any StrawberryParser::ScriptContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitScript(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::ScriptContext* StrawberryParser::script() {
  ScriptContext *_localctx = _tracker.createInstance<ScriptContext>(_ctx, getState());
  enterRule(_localctx, 0, StrawberryParser::RuleScript);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(80);
      action();
      setState(83); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6921206069405433822) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & 5631) != 0));
    setState(85);
    match(StrawberryParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

StrawberryParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::FnDeclarationContext* StrawberryParser::DeclarationContext::fnDeclaration() {
  return getRuleContext<StrawberryParser::FnDeclarationContext>(0);
}


size_t StrawberryParser::DeclarationContext::getRuleIndex() const {
  return StrawberryParser::RuleDeclaration;
}

void StrawberryParser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void StrawberryParser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


std::any StrawberryParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::DeclarationContext* StrawberryParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, StrawberryParser::RuleDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    fnDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionContext ------------------------------------------------------------------

StrawberryParser::ActionContext::ActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::StatementContext* StrawberryParser::ActionContext::statement() {
  return getRuleContext<StrawberryParser::StatementContext>(0);
}

tree::TerminalNode* StrawberryParser::ActionContext::Semi() {
  return getToken(StrawberryParser::Semi, 0);
}

StrawberryParser::ScopeContext* StrawberryParser::ActionContext::scope() {
  return getRuleContext<StrawberryParser::ScopeContext>(0);
}

StrawberryParser::ControlFlowContext* StrawberryParser::ActionContext::controlFlow() {
  return getRuleContext<StrawberryParser::ControlFlowContext>(0);
}

StrawberryParser::DeclarationContext* StrawberryParser::ActionContext::declaration() {
  return getRuleContext<StrawberryParser::DeclarationContext>(0);
}


size_t StrawberryParser::ActionContext::getRuleIndex() const {
  return StrawberryParser::RuleAction;
}

void StrawberryParser::ActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAction(this);
}

void StrawberryParser::ActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAction(this);
}


std::any StrawberryParser::ActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitAction(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::ActionContext* StrawberryParser::action() {
  ActionContext *_localctx = _tracker.createInstance<ActionContext>(_ctx, getState());
  enterRule(_localctx, 4, StrawberryParser::RuleAction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(89);
      statement();
      setState(90);
      match(StrawberryParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(92);
      scope();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(93);
      controlFlow();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(94);
      declaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

StrawberryParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StrawberryParser::ScopeContext::Lbrace() {
  return getToken(StrawberryParser::Lbrace, 0);
}

tree::TerminalNode* StrawberryParser::ScopeContext::Rbrace() {
  return getToken(StrawberryParser::Rbrace, 0);
}

std::vector<StrawberryParser::ActionContext *> StrawberryParser::ScopeContext::action() {
  return getRuleContexts<StrawberryParser::ActionContext>();
}

StrawberryParser::ActionContext* StrawberryParser::ScopeContext::action(size_t i) {
  return getRuleContext<StrawberryParser::ActionContext>(i);
}


size_t StrawberryParser::ScopeContext::getRuleIndex() const {
  return StrawberryParser::RuleScope;
}

void StrawberryParser::ScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope(this);
}

void StrawberryParser::ScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope(this);
}


std::any StrawberryParser::ScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitScope(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::ScopeContext* StrawberryParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 6, StrawberryParser::RuleScope);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(StrawberryParser::Lbrace);
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6921206069405433822) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & 5631) != 0)) {
      setState(98);
      action();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(104);
    match(StrawberryParser::Rbrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

StrawberryParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::ValueContext* StrawberryParser::StatementContext::value() {
  return getRuleContext<StrawberryParser::ValueContext>(0);
}

StrawberryParser::ScopeContext* StrawberryParser::StatementContext::scope() {
  return getRuleContext<StrawberryParser::ScopeContext>(0);
}

StrawberryParser::KeywordStatementContext* StrawberryParser::StatementContext::keywordStatement() {
  return getRuleContext<StrawberryParser::KeywordStatementContext>(0);
}


size_t StrawberryParser::StatementContext::getRuleIndex() const {
  return StrawberryParser::RuleStatement;
}

void StrawberryParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void StrawberryParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any StrawberryParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::StatementContext* StrawberryParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 8, StrawberryParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(109);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Decl:
      case StrawberryParser::Id:
      case StrawberryParser::Number:
      case StrawberryParser::Uscore:
      case StrawberryParser::ExPoint:
      case StrawberryParser::Fslash:
      case StrawberryParser::Dquote:
      case StrawberryParser::Squote:
      case StrawberryParser::Min:
      case StrawberryParser::Eq:
      case StrawberryParser::PlusEq:
      case StrawberryParser::MinEq:
      case StrawberryParser::MultEq:
      case StrawberryParser::DivEq:
      case StrawberryParser::ModEq:
      case StrawberryParser::PowEq:
      case StrawberryParser::Increm:
      case StrawberryParser::Decrem:
      case StrawberryParser::Lbrack:
      case StrawberryParser::Lpar: {
        enterOuterAlt(_localctx, 1);
        setState(106);
        value();
        break;
      }

      case StrawberryParser::Lbrace: {
        enterOuterAlt(_localctx, 2);
        setState(107);
        scope();
        break;
      }

      case StrawberryParser::Return:
      case StrawberryParser::Break:
      case StrawberryParser::Next:
      case StrawberryParser::Last:
      case StrawberryParser::Once: {
        enterOuterAlt(_localctx, 3);
        setState(108);
        keywordStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordStatementContext ------------------------------------------------------------------

StrawberryParser::KeywordStatementContext::KeywordStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::KeywordStatementContext::getRuleIndex() const {
  return StrawberryParser::RuleKeywordStatement;
}

void StrawberryParser::KeywordStatementContext::copyFrom(KeywordStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NextStatContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::NextStatContext::Next() {
  return getToken(StrawberryParser::Next, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::NextStatContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::NextStatContext::NextStatContext(KeywordStatementContext *ctx) { copyFrom(ctx); }

void StrawberryParser::NextStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNextStat(this);
}
void StrawberryParser::NextStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNextStat(this);
}

std::any StrawberryParser::NextStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitNextStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OnceStatContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::OnceStatContext::Once() {
  return getToken(StrawberryParser::Once, 0);
}

StrawberryParser::StatementContext* StrawberryParser::OnceStatContext::statement() {
  return getRuleContext<StrawberryParser::StatementContext>(0);
}

StrawberryParser::OnceStatContext::OnceStatContext(KeywordStatementContext *ctx) { copyFrom(ctx); }

void StrawberryParser::OnceStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOnceStat(this);
}
void StrawberryParser::OnceStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOnceStat(this);
}

std::any StrawberryParser::OnceStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitOnceStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStatContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ReturnStatContext::Return() {
  return getToken(StrawberryParser::Return, 0);
}

StrawberryParser::ValueContext* StrawberryParser::ReturnStatContext::value() {
  return getRuleContext<StrawberryParser::ValueContext>(0);
}

StrawberryParser::ReturnStatContext::ReturnStatContext(KeywordStatementContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ReturnStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStat(this);
}
void StrawberryParser::ReturnStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStat(this);
}

std::any StrawberryParser::ReturnStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitReturnStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LastStatContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::LastStatContext::Last() {
  return getToken(StrawberryParser::Last, 0);
}

StrawberryParser::LastStatContext::LastStatContext(KeywordStatementContext *ctx) { copyFrom(ctx); }

void StrawberryParser::LastStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastStat(this);
}
void StrawberryParser::LastStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastStat(this);
}

std::any StrawberryParser::LastStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitLastStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStatContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BreakStatContext::Break() {
  return getToken(StrawberryParser::Break, 0);
}

StrawberryParser::BreakStatContext::BreakStatContext(KeywordStatementContext *ctx) { copyFrom(ctx); }

void StrawberryParser::BreakStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStat(this);
}
void StrawberryParser::BreakStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStat(this);
}

std::any StrawberryParser::BreakStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBreakStat(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::KeywordStatementContext* StrawberryParser::keywordStatement() {
  KeywordStatementContext *_localctx = _tracker.createInstance<KeywordStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, StrawberryParser::RuleKeywordStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Return: {
        _localctx = _tracker.createInstance<StrawberryParser::ReturnStatContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(111);
        match(StrawberryParser::Return);
        setState(113);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(112);
          value();
          break;
        }

        default:
          break;
        }
        break;
      }

      case StrawberryParser::Once: {
        _localctx = _tracker.createInstance<StrawberryParser::OnceStatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(115);
        match(StrawberryParser::Once);
        setState(116);
        statement();
        break;
      }

      case StrawberryParser::Next: {
        _localctx = _tracker.createInstance<StrawberryParser::NextStatContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(117);
        match(StrawberryParser::Next);
        setState(119);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(118);
          expression(0);
          break;
        }

        default:
          break;
        }
        break;
      }

      case StrawberryParser::Last: {
        _localctx = _tracker.createInstance<StrawberryParser::LastStatContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(121);
        match(StrawberryParser::Last);
        break;
      }

      case StrawberryParser::Break: {
        _localctx = _tracker.createInstance<StrawberryParser::BreakStatContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(122);
        match(StrawberryParser::Break);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

StrawberryParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::ScopeContext* StrawberryParser::BodyContext::scope() {
  return getRuleContext<StrawberryParser::ScopeContext>(0);
}

StrawberryParser::StatementContext* StrawberryParser::BodyContext::statement() {
  return getRuleContext<StrawberryParser::StatementContext>(0);
}

tree::TerminalNode* StrawberryParser::BodyContext::Semi() {
  return getToken(StrawberryParser::Semi, 0);
}


size_t StrawberryParser::BodyContext::getRuleIndex() const {
  return StrawberryParser::RuleBody;
}

void StrawberryParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void StrawberryParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}


std::any StrawberryParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::BodyContext* StrawberryParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 12, StrawberryParser::RuleBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(125);
      scope();
      break;
    }

    case 2: {
      setState(126);
      statement();
      setState(127);
      match(StrawberryParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlFlowContext ------------------------------------------------------------------

StrawberryParser::ControlFlowContext::ControlFlowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::CompoundStatementContext* StrawberryParser::ControlFlowContext::compoundStatement() {
  return getRuleContext<StrawberryParser::CompoundStatementContext>(0);
}

tree::TerminalNode* StrawberryParser::ControlFlowContext::Semi() {
  return getToken(StrawberryParser::Semi, 0);
}

StrawberryParser::LoopContext* StrawberryParser::ControlFlowContext::loop() {
  return getRuleContext<StrawberryParser::LoopContext>(0);
}

StrawberryParser::IfStatementContext* StrawberryParser::ControlFlowContext::ifStatement() {
  return getRuleContext<StrawberryParser::IfStatementContext>(0);
}


size_t StrawberryParser::ControlFlowContext::getRuleIndex() const {
  return StrawberryParser::RuleControlFlow;
}

void StrawberryParser::ControlFlowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlFlow(this);
}

void StrawberryParser::ControlFlowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlFlow(this);
}


std::any StrawberryParser::ControlFlowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitControlFlow(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::ControlFlowContext* StrawberryParser::controlFlow() {
  ControlFlowContext *_localctx = _tracker.createInstance<ControlFlowContext>(_ctx, getState());
  enterRule(_localctx, 14, StrawberryParser::RuleControlFlow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(131);
      compoundStatement();
      setState(132);
      match(StrawberryParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(134);
      loop();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(135);
      ifStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

StrawberryParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::LoopScopeContext* StrawberryParser::LoopContext::loopScope() {
  return getRuleContext<StrawberryParser::LoopScopeContext>(0);
}

StrawberryParser::LoopBodyContext* StrawberryParser::LoopContext::loopBody() {
  return getRuleContext<StrawberryParser::LoopBodyContext>(0);
}


size_t StrawberryParser::LoopContext::getRuleIndex() const {
  return StrawberryParser::RuleLoop;
}

void StrawberryParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void StrawberryParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}


std::any StrawberryParser::LoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitLoop(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::LoopContext* StrawberryParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 16, StrawberryParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(138);
      loopScope();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(139);
      loopBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopScopeContext ------------------------------------------------------------------

StrawberryParser::LoopScopeContext::LoopScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::LoopKeywordsContext* StrawberryParser::LoopScopeContext::loopKeywords() {
  return getRuleContext<StrawberryParser::LoopKeywordsContext>(0);
}

StrawberryParser::ExpressionContext* StrawberryParser::LoopScopeContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::ScopeContext* StrawberryParser::LoopScopeContext::scope() {
  return getRuleContext<StrawberryParser::ScopeContext>(0);
}


size_t StrawberryParser::LoopScopeContext::getRuleIndex() const {
  return StrawberryParser::RuleLoopScope;
}

void StrawberryParser::LoopScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopScope(this);
}

void StrawberryParser::LoopScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopScope(this);
}


std::any StrawberryParser::LoopScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitLoopScope(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::LoopScopeContext* StrawberryParser::loopScope() {
  LoopScopeContext *_localctx = _tracker.createInstance<LoopScopeContext>(_ctx, getState());
  enterRule(_localctx, 18, StrawberryParser::RuleLoopScope);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    loopKeywords();
    setState(143);
    expression(0);
    setState(144);
    scope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopBodyContext ------------------------------------------------------------------

StrawberryParser::LoopBodyContext::LoopBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::LoopKeywordsContext* StrawberryParser::LoopBodyContext::loopKeywords() {
  return getRuleContext<StrawberryParser::LoopKeywordsContext>(0);
}

tree::TerminalNode* StrawberryParser::LoopBodyContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::LoopBodyContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

tree::TerminalNode* StrawberryParser::LoopBodyContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

StrawberryParser::BodyContext* StrawberryParser::LoopBodyContext::body() {
  return getRuleContext<StrawberryParser::BodyContext>(0);
}


size_t StrawberryParser::LoopBodyContext::getRuleIndex() const {
  return StrawberryParser::RuleLoopBody;
}

void StrawberryParser::LoopBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopBody(this);
}

void StrawberryParser::LoopBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopBody(this);
}


std::any StrawberryParser::LoopBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitLoopBody(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::LoopBodyContext* StrawberryParser::loopBody() {
  LoopBodyContext *_localctx = _tracker.createInstance<LoopBodyContext>(_ctx, getState());
  enterRule(_localctx, 20, StrawberryParser::RuleLoopBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    loopKeywords();
    setState(147);
    match(StrawberryParser::Lpar);
    setState(148);
    expression(0);
    setState(149);
    match(StrawberryParser::Rpar);
    setState(150);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

StrawberryParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::CompoundActionContext* StrawberryParser::CompoundStatementContext::compoundAction() {
  return getRuleContext<StrawberryParser::CompoundActionContext>(0);
}

std::vector<StrawberryParser::LoopKeywordsContext *> StrawberryParser::CompoundStatementContext::loopKeywords() {
  return getRuleContexts<StrawberryParser::LoopKeywordsContext>();
}

StrawberryParser::LoopKeywordsContext* StrawberryParser::CompoundStatementContext::loopKeywords(size_t i) {
  return getRuleContext<StrawberryParser::LoopKeywordsContext>(i);
}

std::vector<StrawberryParser::ExpressionContext *> StrawberryParser::CompoundStatementContext::expression() {
  return getRuleContexts<StrawberryParser::ExpressionContext>();
}

StrawberryParser::ExpressionContext* StrawberryParser::CompoundStatementContext::expression(size_t i) {
  return getRuleContext<StrawberryParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> StrawberryParser::CompoundStatementContext::Lpar() {
  return getTokens(StrawberryParser::Lpar);
}

tree::TerminalNode* StrawberryParser::CompoundStatementContext::Lpar(size_t i) {
  return getToken(StrawberryParser::Lpar, i);
}

std::vector<StrawberryParser::ArgsContext *> StrawberryParser::CompoundStatementContext::args() {
  return getRuleContexts<StrawberryParser::ArgsContext>();
}

StrawberryParser::ArgsContext* StrawberryParser::CompoundStatementContext::args(size_t i) {
  return getRuleContext<StrawberryParser::ArgsContext>(i);
}

std::vector<tree::TerminalNode *> StrawberryParser::CompoundStatementContext::Rpar() {
  return getTokens(StrawberryParser::Rpar);
}

tree::TerminalNode* StrawberryParser::CompoundStatementContext::Rpar(size_t i) {
  return getToken(StrawberryParser::Rpar, i);
}


size_t StrawberryParser::CompoundStatementContext::getRuleIndex() const {
  return StrawberryParser::RuleCompoundStatement;
}

void StrawberryParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void StrawberryParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


std::any StrawberryParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::CompoundStatementContext* StrawberryParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, StrawberryParser::RuleCompoundStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    compoundAction(0);
    setState(163);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 448) != 0)) {
      setState(153);
      loopKeywords();
      setState(159);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(154);
        expression(0);
        break;
      }

      case 2: {
        setState(155);
        match(StrawberryParser::Lpar);
        setState(156);
        args();
        setState(157);
        match(StrawberryParser::Rpar);
        break;
      }

      default:
        break;
      }
      setState(165);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundActionContext ------------------------------------------------------------------

StrawberryParser::CompoundActionContext::CompoundActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::CompoundActionContext::getRuleIndex() const {
  return StrawberryParser::RuleCompoundAction;
}

void StrawberryParser::CompoundActionContext::copyFrom(CompoundActionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatementCompoundContext ------------------------------------------------------------------

StrawberryParser::StatementContext* StrawberryParser::StatementCompoundContext::statement() {
  return getRuleContext<StrawberryParser::StatementContext>(0);
}

StrawberryParser::StatementCompoundContext::StatementCompoundContext(CompoundActionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::StatementCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementCompound(this);
}
void StrawberryParser::StatementCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementCompound(this);
}

std::any StrawberryParser::StatementCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitStatementCompound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfScopeCompoundContext ------------------------------------------------------------------

StrawberryParser::IfScopeContext* StrawberryParser::IfScopeCompoundContext::ifScope() {
  return getRuleContext<StrawberryParser::IfScopeContext>(0);
}

StrawberryParser::IfScopeCompoundContext::IfScopeCompoundContext(CompoundActionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::IfScopeCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfScopeCompound(this);
}
void StrawberryParser::IfScopeCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfScopeCompound(this);
}

std::any StrawberryParser::IfScopeCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitIfScopeCompound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopScopeCompoundContext ------------------------------------------------------------------

StrawberryParser::LoopScopeContext* StrawberryParser::LoopScopeCompoundContext::loopScope() {
  return getRuleContext<StrawberryParser::LoopScopeContext>(0);
}

StrawberryParser::LoopScopeCompoundContext::LoopScopeCompoundContext(CompoundActionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::LoopScopeCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopScopeCompound(this);
}
void StrawberryParser::LoopScopeCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopScopeCompound(this);
}

std::any StrawberryParser::LoopScopeCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitLoopScopeCompound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfRegexCompoundContext ------------------------------------------------------------------

std::vector<StrawberryParser::CompoundActionContext *> StrawberryParser::IfRegexCompoundContext::compoundAction() {
  return getRuleContexts<StrawberryParser::CompoundActionContext>();
}

StrawberryParser::CompoundActionContext* StrawberryParser::IfRegexCompoundContext::compoundAction(size_t i) {
  return getRuleContext<StrawberryParser::CompoundActionContext>(i);
}

StrawberryParser::ConditionalKeywordsContext* StrawberryParser::IfRegexCompoundContext::conditionalKeywords() {
  return getRuleContext<StrawberryParser::ConditionalKeywordsContext>(0);
}

StrawberryParser::PatternContext* StrawberryParser::IfRegexCompoundContext::pattern() {
  return getRuleContext<StrawberryParser::PatternContext>(0);
}

tree::TerminalNode* StrawberryParser::IfRegexCompoundContext::Else() {
  return getToken(StrawberryParser::Else, 0);
}

StrawberryParser::IfRegexCompoundContext::IfRegexCompoundContext(CompoundActionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::IfRegexCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfRegexCompound(this);
}
void StrawberryParser::IfRegexCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfRegexCompound(this);
}

std::any StrawberryParser::IfRegexCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitIfRegexCompound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfCompoundContext ------------------------------------------------------------------

std::vector<StrawberryParser::CompoundActionContext *> StrawberryParser::IfCompoundContext::compoundAction() {
  return getRuleContexts<StrawberryParser::CompoundActionContext>();
}

StrawberryParser::CompoundActionContext* StrawberryParser::IfCompoundContext::compoundAction(size_t i) {
  return getRuleContext<StrawberryParser::CompoundActionContext>(i);
}

StrawberryParser::ConditionalKeywordsContext* StrawberryParser::IfCompoundContext::conditionalKeywords() {
  return getRuleContext<StrawberryParser::ConditionalKeywordsContext>(0);
}

StrawberryParser::ExpressionContext* StrawberryParser::IfCompoundContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

tree::TerminalNode* StrawberryParser::IfCompoundContext::Else() {
  return getToken(StrawberryParser::Else, 0);
}

StrawberryParser::IfCompoundContext::IfCompoundContext(CompoundActionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::IfCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfCompound(this);
}
void StrawberryParser::IfCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfCompound(this);
}

std::any StrawberryParser::IfCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitIfCompound(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::CompoundActionContext* StrawberryParser::compoundAction() {
   return compoundAction(0);
}

StrawberryParser::CompoundActionContext* StrawberryParser::compoundAction(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  StrawberryParser::CompoundActionContext *_localctx = _tracker.createInstance<CompoundActionContext>(_ctx, parentState);
  StrawberryParser::CompoundActionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, StrawberryParser::RuleCompoundAction, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(170);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::If:
      case StrawberryParser::Unless: {
        _localctx = _tracker.createInstance<IfScopeCompoundContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(167);
        ifScope();
        break;
      }

      case StrawberryParser::While:
      case StrawberryParser::Until:
      case StrawberryParser::For: {
        _localctx = _tracker.createInstance<LoopScopeCompoundContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(168);
        loopScope();
        break;
      }

      case StrawberryParser::Decl:
      case StrawberryParser::Return:
      case StrawberryParser::Break:
      case StrawberryParser::Next:
      case StrawberryParser::Last:
      case StrawberryParser::Once:
      case StrawberryParser::Id:
      case StrawberryParser::Number:
      case StrawberryParser::Uscore:
      case StrawberryParser::ExPoint:
      case StrawberryParser::Fslash:
      case StrawberryParser::Dquote:
      case StrawberryParser::Squote:
      case StrawberryParser::Min:
      case StrawberryParser::Eq:
      case StrawberryParser::PlusEq:
      case StrawberryParser::MinEq:
      case StrawberryParser::MultEq:
      case StrawberryParser::DivEq:
      case StrawberryParser::ModEq:
      case StrawberryParser::PowEq:
      case StrawberryParser::Increm:
      case StrawberryParser::Decrem:
      case StrawberryParser::Lbrack:
      case StrawberryParser::Lbrace:
      case StrawberryParser::Lpar: {
        _localctx = _tracker.createInstance<StatementCompoundContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(169);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(188);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(186);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<IfCompoundContext>(_tracker.createInstance<CompoundActionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCompoundAction);
          setState(172);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(173);
          conditionalKeywords();
          setState(174);
          expression(0);
          setState(177);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
          case 1: {
            setState(175);
            match(StrawberryParser::Else);
            setState(176);
            compoundAction(0);
            break;
          }

          default:
            break;
          }
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<IfRegexCompoundContext>(_tracker.createInstance<CompoundActionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleCompoundAction);
          setState(179);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(180);
          conditionalKeywords();
          setState(181);
          pattern();
          setState(184);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
          case 1: {
            setState(182);
            match(StrawberryParser::Else);
            setState(183);
            compoundAction(0);
            break;
          }

          default:
            break;
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(190);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

StrawberryParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::IfScopeContext* StrawberryParser::IfStatementContext::ifScope() {
  return getRuleContext<StrawberryParser::IfScopeContext>(0);
}

StrawberryParser::IfBodyContext* StrawberryParser::IfStatementContext::ifBody() {
  return getRuleContext<StrawberryParser::IfBodyContext>(0);
}


size_t StrawberryParser::IfStatementContext::getRuleIndex() const {
  return StrawberryParser::RuleIfStatement;
}

void StrawberryParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void StrawberryParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any StrawberryParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::IfStatementContext* StrawberryParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, StrawberryParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(193);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(191);
      ifScope();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(192);
      ifBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfScopeContext ------------------------------------------------------------------

StrawberryParser::IfScopeContext::IfScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::IfScopeContext::getRuleIndex() const {
  return StrawberryParser::RuleIfScope;
}

void StrawberryParser::IfScopeContext::copyFrom(IfScopeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PatternIfScopeContext ------------------------------------------------------------------

StrawberryParser::ConditionalKeywordsContext* StrawberryParser::PatternIfScopeContext::conditionalKeywords() {
  return getRuleContext<StrawberryParser::ConditionalKeywordsContext>(0);
}

StrawberryParser::PatternContext* StrawberryParser::PatternIfScopeContext::pattern() {
  return getRuleContext<StrawberryParser::PatternContext>(0);
}

StrawberryParser::ScopeContext* StrawberryParser::PatternIfScopeContext::scope() {
  return getRuleContext<StrawberryParser::ScopeContext>(0);
}

tree::TerminalNode* StrawberryParser::PatternIfScopeContext::Else() {
  return getToken(StrawberryParser::Else, 0);
}

StrawberryParser::BodyContext* StrawberryParser::PatternIfScopeContext::body() {
  return getRuleContext<StrawberryParser::BodyContext>(0);
}

StrawberryParser::IfStatementContext* StrawberryParser::PatternIfScopeContext::ifStatement() {
  return getRuleContext<StrawberryParser::IfStatementContext>(0);
}

StrawberryParser::PatternIfScopeContext::PatternIfScopeContext(IfScopeContext *ctx) { copyFrom(ctx); }

void StrawberryParser::PatternIfScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPatternIfScope(this);
}
void StrawberryParser::PatternIfScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPatternIfScope(this);
}

std::any StrawberryParser::PatternIfScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitPatternIfScope(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprIfScopeContext ------------------------------------------------------------------

StrawberryParser::ConditionalKeywordsContext* StrawberryParser::ExprIfScopeContext::conditionalKeywords() {
  return getRuleContext<StrawberryParser::ConditionalKeywordsContext>(0);
}

StrawberryParser::ExpressionContext* StrawberryParser::ExprIfScopeContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::ScopeContext* StrawberryParser::ExprIfScopeContext::scope() {
  return getRuleContext<StrawberryParser::ScopeContext>(0);
}

tree::TerminalNode* StrawberryParser::ExprIfScopeContext::Else() {
  return getToken(StrawberryParser::Else, 0);
}

StrawberryParser::BodyContext* StrawberryParser::ExprIfScopeContext::body() {
  return getRuleContext<StrawberryParser::BodyContext>(0);
}

StrawberryParser::IfStatementContext* StrawberryParser::ExprIfScopeContext::ifStatement() {
  return getRuleContext<StrawberryParser::IfStatementContext>(0);
}

StrawberryParser::ExprIfScopeContext::ExprIfScopeContext(IfScopeContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ExprIfScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprIfScope(this);
}
void StrawberryParser::ExprIfScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprIfScope(this);
}

std::any StrawberryParser::ExprIfScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitExprIfScope(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::IfScopeContext* StrawberryParser::ifScope() {
  IfScopeContext *_localctx = _tracker.createInstance<IfScopeContext>(_ctx, getState());
  enterRule(_localctx, 28, StrawberryParser::RuleIfScope);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::ExprIfScopeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(195);
      conditionalKeywords();
      setState(196);
      expression(0);
      setState(197);
      scope();
      setState(203);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(198);
        match(StrawberryParser::Else);
        setState(201);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case StrawberryParser::Decl:
          case StrawberryParser::Return:
          case StrawberryParser::Break:
          case StrawberryParser::Next:
          case StrawberryParser::Last:
          case StrawberryParser::Once:
          case StrawberryParser::Id:
          case StrawberryParser::Number:
          case StrawberryParser::Uscore:
          case StrawberryParser::ExPoint:
          case StrawberryParser::Fslash:
          case StrawberryParser::Dquote:
          case StrawberryParser::Squote:
          case StrawberryParser::Min:
          case StrawberryParser::Eq:
          case StrawberryParser::PlusEq:
          case StrawberryParser::MinEq:
          case StrawberryParser::MultEq:
          case StrawberryParser::DivEq:
          case StrawberryParser::ModEq:
          case StrawberryParser::PowEq:
          case StrawberryParser::Increm:
          case StrawberryParser::Decrem:
          case StrawberryParser::Lbrack:
          case StrawberryParser::Lbrace:
          case StrawberryParser::Lpar: {
            setState(199);
            body();
            break;
          }

          case StrawberryParser::If:
          case StrawberryParser::Unless: {
            setState(200);
            ifStatement();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::PatternIfScopeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(205);
      conditionalKeywords();
      setState(206);
      pattern();
      setState(207);
      scope();
      setState(213);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(208);
        match(StrawberryParser::Else);
        setState(211);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case StrawberryParser::Decl:
          case StrawberryParser::Return:
          case StrawberryParser::Break:
          case StrawberryParser::Next:
          case StrawberryParser::Last:
          case StrawberryParser::Once:
          case StrawberryParser::Id:
          case StrawberryParser::Number:
          case StrawberryParser::Uscore:
          case StrawberryParser::ExPoint:
          case StrawberryParser::Fslash:
          case StrawberryParser::Dquote:
          case StrawberryParser::Squote:
          case StrawberryParser::Min:
          case StrawberryParser::Eq:
          case StrawberryParser::PlusEq:
          case StrawberryParser::MinEq:
          case StrawberryParser::MultEq:
          case StrawberryParser::DivEq:
          case StrawberryParser::ModEq:
          case StrawberryParser::PowEq:
          case StrawberryParser::Increm:
          case StrawberryParser::Decrem:
          case StrawberryParser::Lbrack:
          case StrawberryParser::Lbrace:
          case StrawberryParser::Lpar: {
            setState(209);
            body();
            break;
          }

          case StrawberryParser::If:
          case StrawberryParser::Unless: {
            setState(210);
            ifStatement();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfBodyContext ------------------------------------------------------------------

StrawberryParser::IfBodyContext::IfBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::IfBodyContext::getRuleIndex() const {
  return StrawberryParser::RuleIfBody;
}

void StrawberryParser::IfBodyContext::copyFrom(IfBodyContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprIfBodyContext ------------------------------------------------------------------

StrawberryParser::ConditionalKeywordsContext* StrawberryParser::ExprIfBodyContext::conditionalKeywords() {
  return getRuleContext<StrawberryParser::ConditionalKeywordsContext>(0);
}

tree::TerminalNode* StrawberryParser::ExprIfBodyContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::ExprIfBodyContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

tree::TerminalNode* StrawberryParser::ExprIfBodyContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

std::vector<StrawberryParser::BodyContext *> StrawberryParser::ExprIfBodyContext::body() {
  return getRuleContexts<StrawberryParser::BodyContext>();
}

StrawberryParser::BodyContext* StrawberryParser::ExprIfBodyContext::body(size_t i) {
  return getRuleContext<StrawberryParser::BodyContext>(i);
}

tree::TerminalNode* StrawberryParser::ExprIfBodyContext::Else() {
  return getToken(StrawberryParser::Else, 0);
}

StrawberryParser::IfStatementContext* StrawberryParser::ExprIfBodyContext::ifStatement() {
  return getRuleContext<StrawberryParser::IfStatementContext>(0);
}

StrawberryParser::ExprIfBodyContext::ExprIfBodyContext(IfBodyContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ExprIfBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprIfBody(this);
}
void StrawberryParser::ExprIfBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprIfBody(this);
}

std::any StrawberryParser::ExprIfBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitExprIfBody(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PatternIfBodyContext ------------------------------------------------------------------

StrawberryParser::ConditionalKeywordsContext* StrawberryParser::PatternIfBodyContext::conditionalKeywords() {
  return getRuleContext<StrawberryParser::ConditionalKeywordsContext>(0);
}

tree::TerminalNode* StrawberryParser::PatternIfBodyContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

StrawberryParser::PatternContext* StrawberryParser::PatternIfBodyContext::pattern() {
  return getRuleContext<StrawberryParser::PatternContext>(0);
}

tree::TerminalNode* StrawberryParser::PatternIfBodyContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

std::vector<StrawberryParser::BodyContext *> StrawberryParser::PatternIfBodyContext::body() {
  return getRuleContexts<StrawberryParser::BodyContext>();
}

StrawberryParser::BodyContext* StrawberryParser::PatternIfBodyContext::body(size_t i) {
  return getRuleContext<StrawberryParser::BodyContext>(i);
}

tree::TerminalNode* StrawberryParser::PatternIfBodyContext::Else() {
  return getToken(StrawberryParser::Else, 0);
}

StrawberryParser::IfStatementContext* StrawberryParser::PatternIfBodyContext::ifStatement() {
  return getRuleContext<StrawberryParser::IfStatementContext>(0);
}

StrawberryParser::PatternIfBodyContext::PatternIfBodyContext(IfBodyContext *ctx) { copyFrom(ctx); }

void StrawberryParser::PatternIfBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPatternIfBody(this);
}
void StrawberryParser::PatternIfBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPatternIfBody(this);
}

std::any StrawberryParser::PatternIfBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitPatternIfBody(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::IfBodyContext* StrawberryParser::ifBody() {
  IfBodyContext *_localctx = _tracker.createInstance<IfBodyContext>(_ctx, getState());
  enterRule(_localctx, 30, StrawberryParser::RuleIfBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(241);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::ExprIfBodyContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(217);
      conditionalKeywords();
      setState(218);
      match(StrawberryParser::Lpar);
      setState(219);
      expression(0);
      setState(220);
      match(StrawberryParser::Rpar);
      setState(221);
      body();
      setState(227);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
      case 1: {
        setState(222);
        match(StrawberryParser::Else);
        setState(225);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case StrawberryParser::Decl:
          case StrawberryParser::Return:
          case StrawberryParser::Break:
          case StrawberryParser::Next:
          case StrawberryParser::Last:
          case StrawberryParser::Once:
          case StrawberryParser::Id:
          case StrawberryParser::Number:
          case StrawberryParser::Uscore:
          case StrawberryParser::ExPoint:
          case StrawberryParser::Fslash:
          case StrawberryParser::Dquote:
          case StrawberryParser::Squote:
          case StrawberryParser::Min:
          case StrawberryParser::Eq:
          case StrawberryParser::PlusEq:
          case StrawberryParser::MinEq:
          case StrawberryParser::MultEq:
          case StrawberryParser::DivEq:
          case StrawberryParser::ModEq:
          case StrawberryParser::PowEq:
          case StrawberryParser::Increm:
          case StrawberryParser::Decrem:
          case StrawberryParser::Lbrack:
          case StrawberryParser::Lbrace:
          case StrawberryParser::Lpar: {
            setState(223);
            body();
            break;
          }

          case StrawberryParser::If:
          case StrawberryParser::Unless: {
            setState(224);
            ifStatement();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::PatternIfBodyContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(229);
      conditionalKeywords();
      setState(230);
      match(StrawberryParser::Lpar);
      setState(231);
      pattern();
      setState(232);
      match(StrawberryParser::Rpar);
      setState(233);
      body();
      setState(239);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(234);
        match(StrawberryParser::Else);
        setState(237);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case StrawberryParser::Decl:
          case StrawberryParser::Return:
          case StrawberryParser::Break:
          case StrawberryParser::Next:
          case StrawberryParser::Last:
          case StrawberryParser::Once:
          case StrawberryParser::Id:
          case StrawberryParser::Number:
          case StrawberryParser::Uscore:
          case StrawberryParser::ExPoint:
          case StrawberryParser::Fslash:
          case StrawberryParser::Dquote:
          case StrawberryParser::Squote:
          case StrawberryParser::Min:
          case StrawberryParser::Eq:
          case StrawberryParser::PlusEq:
          case StrawberryParser::MinEq:
          case StrawberryParser::MultEq:
          case StrawberryParser::DivEq:
          case StrawberryParser::ModEq:
          case StrawberryParser::PowEq:
          case StrawberryParser::Increm:
          case StrawberryParser::Decrem:
          case StrawberryParser::Lbrack:
          case StrawberryParser::Lbrace:
          case StrawberryParser::Lpar: {
            setState(235);
            body();
            break;
          }

          case StrawberryParser::If:
          case StrawberryParser::Unless: {
            setState(236);
            ifStatement();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalKeywordsContext ------------------------------------------------------------------

StrawberryParser::ConditionalKeywordsContext::ConditionalKeywordsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::ConditionalKeywordsContext::getRuleIndex() const {
  return StrawberryParser::RuleConditionalKeywords;
}

void StrawberryParser::ConditionalKeywordsContext::copyFrom(ConditionalKeywordsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnlessKeywordContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::UnlessKeywordContext::Unless() {
  return getToken(StrawberryParser::Unless, 0);
}

StrawberryParser::UnlessKeywordContext::UnlessKeywordContext(ConditionalKeywordsContext *ctx) { copyFrom(ctx); }

void StrawberryParser::UnlessKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnlessKeyword(this);
}
void StrawberryParser::UnlessKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnlessKeyword(this);
}

std::any StrawberryParser::UnlessKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitUnlessKeyword(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfKeywordContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::IfKeywordContext::If() {
  return getToken(StrawberryParser::If, 0);
}

StrawberryParser::IfKeywordContext::IfKeywordContext(ConditionalKeywordsContext *ctx) { copyFrom(ctx); }

void StrawberryParser::IfKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfKeyword(this);
}
void StrawberryParser::IfKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfKeyword(this);
}

std::any StrawberryParser::IfKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitIfKeyword(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::ConditionalKeywordsContext* StrawberryParser::conditionalKeywords() {
  ConditionalKeywordsContext *_localctx = _tracker.createInstance<ConditionalKeywordsContext>(_ctx, getState());
  enterRule(_localctx, 32, StrawberryParser::RuleConditionalKeywords);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(245);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::If: {
        _localctx = _tracker.createInstance<StrawberryParser::IfKeywordContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(243);
        match(StrawberryParser::If);
        break;
      }

      case StrawberryParser::Unless: {
        _localctx = _tracker.createInstance<StrawberryParser::UnlessKeywordContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(244);
        match(StrawberryParser::Unless);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopKeywordsContext ------------------------------------------------------------------

StrawberryParser::LoopKeywordsContext::LoopKeywordsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::LoopKeywordsContext::getRuleIndex() const {
  return StrawberryParser::RuleLoopKeywords;
}

void StrawberryParser::LoopKeywordsContext::copyFrom(LoopKeywordsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileLoopContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::WhileLoopContext::While() {
  return getToken(StrawberryParser::While, 0);
}

StrawberryParser::WhileLoopContext::WhileLoopContext(LoopKeywordsContext *ctx) { copyFrom(ctx); }

void StrawberryParser::WhileLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileLoop(this);
}
void StrawberryParser::WhileLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileLoop(this);
}

std::any StrawberryParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForLoopContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ForLoopContext::For() {
  return getToken(StrawberryParser::For, 0);
}

StrawberryParser::ForLoopContext::ForLoopContext(LoopKeywordsContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ForLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForLoop(this);
}
void StrawberryParser::ForLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForLoop(this);
}

std::any StrawberryParser::ForLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitForLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UntilLoopContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::UntilLoopContext::Until() {
  return getToken(StrawberryParser::Until, 0);
}

StrawberryParser::UntilLoopContext::UntilLoopContext(LoopKeywordsContext *ctx) { copyFrom(ctx); }

void StrawberryParser::UntilLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUntilLoop(this);
}
void StrawberryParser::UntilLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUntilLoop(this);
}

std::any StrawberryParser::UntilLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitUntilLoop(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::LoopKeywordsContext* StrawberryParser::loopKeywords() {
  LoopKeywordsContext *_localctx = _tracker.createInstance<LoopKeywordsContext>(_ctx, getState());
  enterRule(_localctx, 34, StrawberryParser::RuleLoopKeywords);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(250);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::For: {
        _localctx = _tracker.createInstance<StrawberryParser::ForLoopContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(247);
        match(StrawberryParser::For);
        break;
      }

      case StrawberryParser::While: {
        _localctx = _tracker.createInstance<StrawberryParser::WhileLoopContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(248);
        match(StrawberryParser::While);
        break;
      }

      case StrawberryParser::Until: {
        _localctx = _tracker.createInstance<StrawberryParser::UntilLoopContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(249);
        match(StrawberryParser::Until);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FnDeclarationContext ------------------------------------------------------------------

StrawberryParser::FnDeclarationContext::FnDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StrawberryParser::FnDeclarationContext::Fn() {
  return getToken(StrawberryParser::Fn, 0);
}

tree::TerminalNode* StrawberryParser::FnDeclarationContext::Id() {
  return getToken(StrawberryParser::Id, 0);
}

tree::TerminalNode* StrawberryParser::FnDeclarationContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

StrawberryParser::ParametersContext* StrawberryParser::FnDeclarationContext::parameters() {
  return getRuleContext<StrawberryParser::ParametersContext>(0);
}

tree::TerminalNode* StrawberryParser::FnDeclarationContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

StrawberryParser::ScopeContext* StrawberryParser::FnDeclarationContext::scope() {
  return getRuleContext<StrawberryParser::ScopeContext>(0);
}


size_t StrawberryParser::FnDeclarationContext::getRuleIndex() const {
  return StrawberryParser::RuleFnDeclaration;
}

void StrawberryParser::FnDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFnDeclaration(this);
}

void StrawberryParser::FnDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFnDeclaration(this);
}


std::any StrawberryParser::FnDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitFnDeclaration(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::FnDeclarationContext* StrawberryParser::fnDeclaration() {
  FnDeclarationContext *_localctx = _tracker.createInstance<FnDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 36, StrawberryParser::RuleFnDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(StrawberryParser::Fn);
    setState(253);
    match(StrawberryParser::Id);
    setState(254);
    match(StrawberryParser::Lpar);
    setState(255);
    parameters();
    setState(256);
    match(StrawberryParser::Rpar);
    setState(257);
    scope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaContext ------------------------------------------------------------------

StrawberryParser::LambdaContext::LambdaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StrawberryParser::LambdaContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

StrawberryParser::ParametersContext* StrawberryParser::LambdaContext::parameters() {
  return getRuleContext<StrawberryParser::ParametersContext>(0);
}

tree::TerminalNode* StrawberryParser::LambdaContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

tree::TerminalNode* StrawberryParser::LambdaContext::Darrpw() {
  return getToken(StrawberryParser::Darrpw, 0);
}

StrawberryParser::StatementContext* StrawberryParser::LambdaContext::statement() {
  return getRuleContext<StrawberryParser::StatementContext>(0);
}


size_t StrawberryParser::LambdaContext::getRuleIndex() const {
  return StrawberryParser::RuleLambda;
}

void StrawberryParser::LambdaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambda(this);
}

void StrawberryParser::LambdaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambda(this);
}


std::any StrawberryParser::LambdaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitLambda(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::LambdaContext* StrawberryParser::lambda() {
  LambdaContext *_localctx = _tracker.createInstance<LambdaContext>(_ctx, getState());
  enterRule(_localctx, 38, StrawberryParser::RuleLambda);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    match(StrawberryParser::Lpar);
    setState(260);
    parameters();
    setState(261);
    match(StrawberryParser::Rpar);
    setState(262);
    match(StrawberryParser::Darrpw);
    setState(263);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

StrawberryParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::ParametersContext::getRuleIndex() const {
  return StrawberryParser::RuleParameters;
}

void StrawberryParser::ParametersContext::copyFrom(ParametersContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParamsContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> StrawberryParser::ParamsContext::Id() {
  return getTokens(StrawberryParser::Id);
}

tree::TerminalNode* StrawberryParser::ParamsContext::Id(size_t i) {
  return getToken(StrawberryParser::Id, i);
}

std::vector<tree::TerminalNode *> StrawberryParser::ParamsContext::Com() {
  return getTokens(StrawberryParser::Com);
}

tree::TerminalNode* StrawberryParser::ParamsContext::Com(size_t i) {
  return getToken(StrawberryParser::Com, i);
}

StrawberryParser::ParamsContext::ParamsContext(ParametersContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}
void StrawberryParser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}

std::any StrawberryParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParamsExpandContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> StrawberryParser::ParamsExpandContext::Id() {
  return getTokens(StrawberryParser::Id);
}

tree::TerminalNode* StrawberryParser::ParamsExpandContext::Id(size_t i) {
  return getToken(StrawberryParser::Id, i);
}

tree::TerminalNode* StrawberryParser::ParamsExpandContext::Dot3() {
  return getToken(StrawberryParser::Dot3, 0);
}

std::vector<tree::TerminalNode *> StrawberryParser::ParamsExpandContext::Com() {
  return getTokens(StrawberryParser::Com);
}

tree::TerminalNode* StrawberryParser::ParamsExpandContext::Com(size_t i) {
  return getToken(StrawberryParser::Com, i);
}

StrawberryParser::ParamsExpandContext::ParamsExpandContext(ParametersContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ParamsExpandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamsExpand(this);
}
void StrawberryParser::ParamsExpandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamsExpand(this);
}

std::any StrawberryParser::ParamsExpandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitParamsExpand(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::ParametersContext* StrawberryParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 40, StrawberryParser::RuleParameters);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(284);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::ParamsContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(273);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id) {
        setState(269);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(265);
            match(StrawberryParser::Id);
            setState(266);
            match(StrawberryParser::Com); 
          }
          setState(271);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
        }
        setState(272);
        match(StrawberryParser::Id);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::ParamsExpandContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(279);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(275);
          match(StrawberryParser::Id);
          setState(276);
          match(StrawberryParser::Com); 
        }
        setState(281);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
      }
      setState(282);
      match(StrawberryParser::Id);
      setState(283);
      match(StrawberryParser::Dot3);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

StrawberryParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<StrawberryParser::ArgumentContext *> StrawberryParser::ArgsContext::argument() {
  return getRuleContexts<StrawberryParser::ArgumentContext>();
}

StrawberryParser::ArgumentContext* StrawberryParser::ArgsContext::argument(size_t i) {
  return getRuleContext<StrawberryParser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> StrawberryParser::ArgsContext::Com() {
  return getTokens(StrawberryParser::Com);
}

tree::TerminalNode* StrawberryParser::ArgsContext::Com(size_t i) {
  return getToken(StrawberryParser::Com, i);
}


size_t StrawberryParser::ArgsContext::getRuleIndex() const {
  return StrawberryParser::RuleArgs;
}

void StrawberryParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void StrawberryParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}


std::any StrawberryParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::ArgsContext* StrawberryParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 42, StrawberryParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6921206138124894212) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & 4607) != 0)) {
      setState(286);
      argument();
      setState(291);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == StrawberryParser::Com) {
        setState(287);
        match(StrawberryParser::Com);
        setState(288);
        argument();
        setState(293);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

StrawberryParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::ArgumentContext::getRuleIndex() const {
  return StrawberryParser::RuleArgument;
}

void StrawberryParser::ArgumentContext::copyFrom(ArgumentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LooseFnCallArgContext ------------------------------------------------------------------

StrawberryParser::LooseFnCallContext* StrawberryParser::LooseFnCallArgContext::looseFnCall() {
  return getRuleContext<StrawberryParser::LooseFnCallContext>(0);
}

StrawberryParser::LooseFnCallArgContext::LooseFnCallArgContext(ArgumentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::LooseFnCallArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLooseFnCallArg(this);
}
void StrawberryParser::LooseFnCallArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLooseFnCallArg(this);
}

std::any StrawberryParser::LooseFnCallArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitLooseFnCallArg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgExpandContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ArgExpandContext::Dot3() {
  return getToken(StrawberryParser::Dot3, 0);
}

StrawberryParser::ValueContext* StrawberryParser::ArgExpandContext::value() {
  return getRuleContext<StrawberryParser::ValueContext>(0);
}

StrawberryParser::ArgExpandContext::ArgExpandContext(ArgumentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ArgExpandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgExpand(this);
}
void StrawberryParser::ArgExpandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgExpand(this);
}

std::any StrawberryParser::ArgExpandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitArgExpand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgContext ------------------------------------------------------------------

StrawberryParser::ValueContext* StrawberryParser::ArgContext::value() {
  return getRuleContext<StrawberryParser::ValueContext>(0);
}

StrawberryParser::ArgContext::ArgContext(ArgumentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg(this);
}
void StrawberryParser::ArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg(this);
}

std::any StrawberryParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::ArgumentContext* StrawberryParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 44, StrawberryParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::ArgContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(296);
      value();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::ArgExpandContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(297);
      match(StrawberryParser::Dot3);
      setState(298);
      value();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::LooseFnCallArgContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(299);
      looseFnCall();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PatternContext ------------------------------------------------------------------

StrawberryParser::PatternContext::PatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::PatternContext::getRuleIndex() const {
  return StrawberryParser::RulePattern;
}

void StrawberryParser::PatternContext::copyFrom(PatternContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefaultPatternContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::DefaultPatternContext::Lbrace() {
  return getToken(StrawberryParser::Lbrace, 0);
}

tree::TerminalNode* StrawberryParser::DefaultPatternContext::Rbrace() {
  return getToken(StrawberryParser::Rbrace, 0);
}

std::vector<tree::TerminalNode *> StrawberryParser::DefaultPatternContext::Letter() {
  return getTokens(StrawberryParser::Letter);
}

tree::TerminalNode* StrawberryParser::DefaultPatternContext::Letter(size_t i) {
  return getToken(StrawberryParser::Letter, i);
}

std::vector<StrawberryParser::PatternContentContext *> StrawberryParser::DefaultPatternContext::patternContent() {
  return getRuleContexts<StrawberryParser::PatternContentContext>();
}

StrawberryParser::PatternContentContext* StrawberryParser::DefaultPatternContext::patternContent(size_t i) {
  return getRuleContext<StrawberryParser::PatternContentContext>(i);
}

StrawberryParser::DefaultPatternContext::DefaultPatternContext(PatternContext *ctx) { copyFrom(ctx); }

void StrawberryParser::DefaultPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultPattern(this);
}
void StrawberryParser::DefaultPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultPattern(this);
}

std::any StrawberryParser::DefaultPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDefaultPattern(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprPatternContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ExprPatternContext::Lbrace() {
  return getToken(StrawberryParser::Lbrace, 0);
}

tree::TerminalNode* StrawberryParser::ExprPatternContext::Rbrace() {
  return getToken(StrawberryParser::Rbrace, 0);
}

tree::TerminalNode* StrawberryParser::ExprPatternContext::Sarrow() {
  return getToken(StrawberryParser::Sarrow, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::ExprPatternContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> StrawberryParser::ExprPatternContext::Letter() {
  return getTokens(StrawberryParser::Letter);
}

tree::TerminalNode* StrawberryParser::ExprPatternContext::Letter(size_t i) {
  return getToken(StrawberryParser::Letter, i);
}

std::vector<StrawberryParser::PatternContentContext *> StrawberryParser::ExprPatternContext::patternContent() {
  return getRuleContexts<StrawberryParser::PatternContentContext>();
}

StrawberryParser::PatternContentContext* StrawberryParser::ExprPatternContext::patternContent(size_t i) {
  return getRuleContext<StrawberryParser::PatternContentContext>(i);
}

StrawberryParser::ExprPatternContext::ExprPatternContext(PatternContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ExprPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprPattern(this);
}
void StrawberryParser::ExprPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprPattern(this);
}

std::any StrawberryParser::ExprPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitExprPattern(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::PatternContext* StrawberryParser::pattern() {
  PatternContext *_localctx = _tracker.createInstance<PatternContext>(_ctx, getState());
  enterRule(_localctx, 46, StrawberryParser::RulePattern);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(362);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::DefaultPatternContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(305);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == StrawberryParser::Letter) {
        setState(302);
        match(StrawberryParser::Letter);
        setState(307);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(308);
      match(StrawberryParser::Lbrace);
      setState(312);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(309);
          patternContent(); 
        }
        setState(314);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
      }
      setState(315);
      match(StrawberryParser::Rbrace);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::DefaultPatternContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(316);
      match(StrawberryParser::Lbrace);
      setState(320);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(317);
          patternContent(); 
        }
        setState(322);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
      }
      setState(323);
      match(StrawberryParser::Rbrace);
      setState(327);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(324);
          match(StrawberryParser::Letter); 
        }
        setState(329);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::ExprPatternContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(333);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == StrawberryParser::Letter) {
        setState(330);
        match(StrawberryParser::Letter);
        setState(335);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(336);
      match(StrawberryParser::Lbrace);
      setState(340);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(337);
          patternContent(); 
        }
        setState(342);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
      }
      setState(343);
      match(StrawberryParser::Rbrace);
      setState(344);
      match(StrawberryParser::Sarrow);
      setState(345);
      expression(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StrawberryParser::ExprPatternContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(346);
      expression(0);
      setState(347);
      match(StrawberryParser::Sarrow);
      setState(348);
      match(StrawberryParser::Lbrace);
      setState(352);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(349);
          patternContent(); 
        }
        setState(354);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
      }
      setState(355);
      match(StrawberryParser::Rbrace);
      setState(359);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(356);
          match(StrawberryParser::Letter); 
        }
        setState(361);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PatternContentContext ------------------------------------------------------------------

StrawberryParser::PatternContentContext::PatternContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::PatternContentContext::getRuleIndex() const {
  return StrawberryParser::RulePatternContent;
}

void StrawberryParser::PatternContentContext::copyFrom(PatternContentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OtherContext ------------------------------------------------------------------

StrawberryParser::OtherContext::OtherContext(PatternContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::OtherContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOther(this);
}
void StrawberryParser::OtherContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOther(this);
}

std::any StrawberryParser::OtherContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitOther(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WildCardContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::WildCardContext::Dot() {
  return getToken(StrawberryParser::Dot, 0);
}

StrawberryParser::WildCardContext::WildCardContext(PatternContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::WildCardContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWildCard(this);
}
void StrawberryParser::WildCardContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWildCard(this);
}

std::any StrawberryParser::WildCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitWildCard(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WordContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::WordContext::RegWord() {
  return getToken(StrawberryParser::RegWord, 0);
}

StrawberryParser::WordContext::WordContext(PatternContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::WordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWord(this);
}
void StrawberryParser::WordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWord(this);
}

std::any StrawberryParser::WordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitWord(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::PatternContentContext* StrawberryParser::patternContent() {
  PatternContentContext *_localctx = _tracker.createInstance<PatternContentContext>(_ctx, getState());
  enterRule(_localctx, 48, StrawberryParser::RulePatternContent);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(367);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::WordContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(364);
      match(StrawberryParser::RegWord);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::WildCardContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(365);
      match(StrawberryParser::Dot);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::OtherContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(366);
      matchWildcard();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

StrawberryParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::ExpressionContext* StrawberryParser::ValueContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::LambdaContext* StrawberryParser::ValueContext::lambda() {
  return getRuleContext<StrawberryParser::LambdaContext>(0);
}


size_t StrawberryParser::ValueContext::getRuleIndex() const {
  return StrawberryParser::RuleValue;
}

void StrawberryParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void StrawberryParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


std::any StrawberryParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::ValueContext* StrawberryParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 50, StrawberryParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(371);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(369);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(370);
      lambda();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

StrawberryParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::ExpressionContext::getRuleIndex() const {
  return StrawberryParser::RuleExpression;
}

void StrawberryParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LooseFnCallExprContext ------------------------------------------------------------------

StrawberryParser::LooseFnCallContext* StrawberryParser::LooseFnCallExprContext::looseFnCall() {
  return getRuleContext<StrawberryParser::LooseFnCallContext>(0);
}

StrawberryParser::LooseFnCallExprContext::LooseFnCallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::LooseFnCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLooseFnCallExpr(this);
}
void StrawberryParser::LooseFnCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLooseFnCallExpr(this);
}

std::any StrawberryParser::LooseFnCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitLooseFnCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrefixExprContext ------------------------------------------------------------------

StrawberryParser::PrefixContext* StrawberryParser::PrefixExprContext::prefix() {
  return getRuleContext<StrawberryParser::PrefixContext>(0);
}

StrawberryParser::ExpressionContext* StrawberryParser::PrefixExprContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::PrefixExprContext::PrefixExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::PrefixExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixExpr(this);
}
void StrawberryParser::PrefixExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixExpr(this);
}

std::any StrawberryParser::PrefixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitPrefixExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpExprContext ------------------------------------------------------------------

std::vector<StrawberryParser::ExpressionContext *> StrawberryParser::OpExprContext::expression() {
  return getRuleContexts<StrawberryParser::ExpressionContext>();
}

StrawberryParser::ExpressionContext* StrawberryParser::OpExprContext::expression(size_t i) {
  return getRuleContext<StrawberryParser::ExpressionContext>(i);
}

StrawberryParser::Op1Context* StrawberryParser::OpExprContext::op1() {
  return getRuleContext<StrawberryParser::Op1Context>(0);
}

StrawberryParser::Op2Context* StrawberryParser::OpExprContext::op2() {
  return getRuleContext<StrawberryParser::Op2Context>(0);
}

StrawberryParser::Op3Context* StrawberryParser::OpExprContext::op3() {
  return getRuleContext<StrawberryParser::Op3Context>(0);
}

StrawberryParser::Op4Context* StrawberryParser::OpExprContext::op4() {
  return getRuleContext<StrawberryParser::Op4Context>(0);
}

StrawberryParser::Op5Context* StrawberryParser::OpExprContext::op5() {
  return getRuleContext<StrawberryParser::Op5Context>(0);
}

StrawberryParser::Op6Context* StrawberryParser::OpExprContext::op6() {
  return getRuleContext<StrawberryParser::Op6Context>(0);
}

StrawberryParser::OpExprContext::OpExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::OpExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpExpr(this);
}
void StrawberryParser::OpExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpExpr(this);
}

std::any StrawberryParser::OpExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitOpExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SuffixExprContext ------------------------------------------------------------------

StrawberryParser::ExpressionContext* StrawberryParser::SuffixExprContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::SuffixContext* StrawberryParser::SuffixExprContext::suffix() {
  return getRuleContext<StrawberryParser::SuffixContext>(0);
}

StrawberryParser::SuffixExprContext::SuffixExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::SuffixExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuffixExpr(this);
}
void StrawberryParser::SuffixExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuffixExpr(this);
}

std::any StrawberryParser::SuffixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitSuffixExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignExprContext ------------------------------------------------------------------

StrawberryParser::AssignContext* StrawberryParser::AssignExprContext::assign() {
  return getRuleContext<StrawberryParser::AssignContext>(0);
}

StrawberryParser::AssignExprContext::AssignExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::AssignExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignExpr(this);
}
void StrawberryParser::AssignExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignExpr(this);
}

std::any StrawberryParser::AssignExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitAssignExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LitExprContext ------------------------------------------------------------------

StrawberryParser::LiteralContext* StrawberryParser::LitExprContext::literal() {
  return getRuleContext<StrawberryParser::LiteralContext>(0);
}

StrawberryParser::LitExprContext::LitExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::LitExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLitExpr(this);
}
void StrawberryParser::LitExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLitExpr(this);
}

std::any StrawberryParser::LitExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitLitExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ParenExprContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::ParenExprContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

tree::TerminalNode* StrawberryParser::ParenExprContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

StrawberryParser::ParenExprContext::ParenExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void StrawberryParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

std::any StrawberryParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AccessExprContext ------------------------------------------------------------------

StrawberryParser::IdentifyerContext* StrawberryParser::AccessExprContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::AccessExprContext::AccessExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::AccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessExpr(this);
}
void StrawberryParser::AccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessExpr(this);
}

std::any StrawberryParser::AccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitAccessExpr(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::ExpressionContext* StrawberryParser::expression() {
   return expression(0);
}

StrawberryParser::ExpressionContext* StrawberryParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  StrawberryParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  StrawberryParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, StrawberryParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(385);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(374);
      match(StrawberryParser::Lpar);
      setState(375);
      expression(0);
      setState(376);
      match(StrawberryParser::Rpar);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<AssignExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(378);
      assign();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PrefixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(379);
      prefix();
      setState(380);
      expression(7);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<AccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(382);
      identifyer(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LitExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(383);
      literal();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LooseFnCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(384);
      looseFnCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(415);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(413);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(387);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(388);
          op1();
          setState(389);
          expression(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(391);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(392);
          op2();
          setState(393);
          expression(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(395);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(396);
          op3();
          setState(397);
          expression(10);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(399);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(400);
          op4();
          setState(401);
          expression(9);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(403);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(404);
          op5();
          setState(405);
          expression(7);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(407);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(408);
          op6();
          setState(409);
          expression(6);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<SuffixExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(411);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(412);
          suffix();
          break;
        }

        default:
          break;
        } 
      }
      setState(417);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

StrawberryParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::LiteralContext::getRuleIndex() const {
  return StrawberryParser::RuleLiteral;
}

void StrawberryParser::LiteralContext::copyFrom(LiteralContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArrayLitContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ArrayLitContext::Lbrack() {
  return getToken(StrawberryParser::Lbrack, 0);
}

StrawberryParser::ArgsContext* StrawberryParser::ArrayLitContext::args() {
  return getRuleContext<StrawberryParser::ArgsContext>(0);
}

tree::TerminalNode* StrawberryParser::ArrayLitContext::Rbrack() {
  return getToken(StrawberryParser::Rbrack, 0);
}

StrawberryParser::ArrayLitContext::ArrayLitContext(LiteralContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ArrayLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayLit(this);
}
void StrawberryParser::ArrayLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayLit(this);
}

std::any StrawberryParser::ArrayLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitArrayLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SStringLitContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> StrawberryParser::SStringLitContext::Squote() {
  return getTokens(StrawberryParser::Squote);
}

tree::TerminalNode* StrawberryParser::SStringLitContext::Squote(size_t i) {
  return getToken(StrawberryParser::Squote, i);
}

StrawberryParser::SStringLitContext::SStringLitContext(LiteralContext *ctx) { copyFrom(ctx); }

void StrawberryParser::SStringLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSStringLit(this);
}
void StrawberryParser::SStringLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSStringLit(this);
}

std::any StrawberryParser::SStringLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitSStringLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumLitContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::NumLitContext::Number() {
  return getToken(StrawberryParser::Number, 0);
}

StrawberryParser::NumLitContext::NumLitContext(LiteralContext *ctx) { copyFrom(ctx); }

void StrawberryParser::NumLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumLit(this);
}
void StrawberryParser::NumLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumLit(this);
}

std::any StrawberryParser::NumLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitNumLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DStringLitContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> StrawberryParser::DStringLitContext::Dquote() {
  return getTokens(StrawberryParser::Dquote);
}

tree::TerminalNode* StrawberryParser::DStringLitContext::Dquote(size_t i) {
  return getToken(StrawberryParser::Dquote, i);
}

std::vector<StrawberryParser::StringContentContext *> StrawberryParser::DStringLitContext::stringContent() {
  return getRuleContexts<StrawberryParser::StringContentContext>();
}

StrawberryParser::StringContentContext* StrawberryParser::DStringLitContext::stringContent(size_t i) {
  return getRuleContext<StrawberryParser::StringContentContext>(i);
}

StrawberryParser::DStringLitContext::DStringLitContext(LiteralContext *ctx) { copyFrom(ctx); }

void StrawberryParser::DStringLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDStringLit(this);
}
void StrawberryParser::DStringLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDStringLit(this);
}

std::any StrawberryParser::DStringLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDStringLit(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::LiteralContext* StrawberryParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 54, StrawberryParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(439);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Dquote: {
        _localctx = _tracker.createInstance<StrawberryParser::DStringLitContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(418);
        match(StrawberryParser::Dquote);
        setState(422);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -1125899906842626) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & 33554431) != 0)) {
          setState(419);
          stringContent();
          setState(424);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(425);
        match(StrawberryParser::Dquote);
        break;
      }

      case StrawberryParser::Squote: {
        _localctx = _tracker.createInstance<StrawberryParser::SStringLitContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(426);
        match(StrawberryParser::Squote);
        setState(430);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
        while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1 + 1) {
            setState(427);
            matchWildcard(); 
          }
          setState(432);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
        }
        setState(433);
        match(StrawberryParser::Squote);
        break;
      }

      case StrawberryParser::Lbrack: {
        _localctx = _tracker.createInstance<StrawberryParser::ArrayLitContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(434);
        match(StrawberryParser::Lbrack);
        setState(435);
        args();
        setState(436);
        match(StrawberryParser::Rbrack);
        break;
      }

      case StrawberryParser::Number: {
        _localctx = _tracker.createInstance<StrawberryParser::NumLitContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(438);
        match(StrawberryParser::Number);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContentContext ------------------------------------------------------------------

StrawberryParser::StringContentContext::StringContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::StringContentContext::getRuleIndex() const {
  return StrawberryParser::RuleStringContent;
}

void StrawberryParser::StringContentContext::copyFrom(StringContentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentityStringContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::IdentityStringContext::Doll() {
  return getToken(StrawberryParser::Doll, 0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::IdentityStringContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::IdentityStringContext::IdentityStringContext(StringContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::IdentityStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentityString(this);
}
void StrawberryParser::IdentityStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentityString(this);
}

std::any StrawberryParser::IdentityStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitIdentityString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DollarSignStringContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::DollarSignStringContext::DollLit() {
  return getToken(StrawberryParser::DollLit, 0);
}

StrawberryParser::DollarSignStringContext::DollarSignStringContext(StringContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::DollarSignStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDollarSignString(this);
}
void StrawberryParser::DollarSignStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDollarSignString(this);
}

std::any StrawberryParser::DollarSignStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDollarSignString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OtherStringContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::OtherStringContext::Dquote() {
  return getToken(StrawberryParser::Dquote, 0);
}

StrawberryParser::OtherStringContext::OtherStringContext(StringContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::OtherStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOtherString(this);
}
void StrawberryParser::OtherStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOtherString(this);
}

std::any StrawberryParser::OtherStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitOtherString(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::StringContentContext* StrawberryParser::stringContent() {
  StringContentContext *_localctx = _tracker.createInstance<StringContentContext>(_ctx, getState());
  enterRule(_localctx, 56, StrawberryParser::RuleStringContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(445);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::IdentityStringContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(441);
      match(StrawberryParser::Doll);
      setState(442);
      identifyer(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::DollarSignStringContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(443);
      match(StrawberryParser::DollLit);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::OtherStringContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(444);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == StrawberryParser::Dquote)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

StrawberryParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::AssignContext::getRuleIndex() const {
  return StrawberryParser::RuleAssign;
}

void StrawberryParser::AssignContext::copyFrom(AssignContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MinAssignContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::MinAssignContext::MinEq() {
  return getToken(StrawberryParser::MinEq, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::MinAssignContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::MinAssignContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::MinAssignContext::MinAssignContext(AssignContext *ctx) { copyFrom(ctx); }

void StrawberryParser::MinAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinAssign(this);
}
void StrawberryParser::MinAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinAssign(this);
}

std::any StrawberryParser::MinAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitMinAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncremContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::IncremContext::Increm() {
  return getToken(StrawberryParser::Increm, 0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::IncremContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::IncremContext::IncremContext(AssignContext *ctx) { copyFrom(ctx); }

void StrawberryParser::IncremContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrem(this);
}
void StrawberryParser::IncremContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrem(this);
}

std::any StrawberryParser::IncremContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitIncrem(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqAssignContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::EqAssignContext::Eq() {
  return getToken(StrawberryParser::Eq, 0);
}

StrawberryParser::ValueContext* StrawberryParser::EqAssignContext::value() {
  return getRuleContext<StrawberryParser::ValueContext>(0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::EqAssignContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::EqAssignContext::EqAssignContext(AssignContext *ctx) { copyFrom(ctx); }

void StrawberryParser::EqAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqAssign(this);
}
void StrawberryParser::EqAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqAssign(this);
}

std::any StrawberryParser::EqAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitEqAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddAssignContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::AddAssignContext::PlusEq() {
  return getToken(StrawberryParser::PlusEq, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::AddAssignContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::AddAssignContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::AddAssignContext::AddAssignContext(AssignContext *ctx) { copyFrom(ctx); }

void StrawberryParser::AddAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAssign(this);
}
void StrawberryParser::AddAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAssign(this);
}

std::any StrawberryParser::AddAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitAddAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclareAssignContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::DeclareAssignContext::Decl() {
  return getToken(StrawberryParser::Decl, 0);
}

tree::TerminalNode* StrawberryParser::DeclareAssignContext::Id() {
  return getToken(StrawberryParser::Id, 0);
}

tree::TerminalNode* StrawberryParser::DeclareAssignContext::Eq() {
  return getToken(StrawberryParser::Eq, 0);
}

StrawberryParser::ValueContext* StrawberryParser::DeclareAssignContext::value() {
  return getRuleContext<StrawberryParser::ValueContext>(0);
}

StrawberryParser::DeclareAssignContext::DeclareAssignContext(AssignContext *ctx) { copyFrom(ctx); }

void StrawberryParser::DeclareAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclareAssign(this);
}
void StrawberryParser::DeclareAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclareAssign(this);
}

std::any StrawberryParser::DeclareAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDeclareAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowAssignContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::PowAssignContext::PowEq() {
  return getToken(StrawberryParser::PowEq, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::PowAssignContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::PowAssignContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::PowAssignContext::PowAssignContext(AssignContext *ctx) { copyFrom(ctx); }

void StrawberryParser::PowAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowAssign(this);
}
void StrawberryParser::PowAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowAssign(this);
}

std::any StrawberryParser::PowAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitPowAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecremContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::DecremContext::Decrem() {
  return getToken(StrawberryParser::Decrem, 0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::DecremContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::DecremContext::DecremContext(AssignContext *ctx) { copyFrom(ctx); }

void StrawberryParser::DecremContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrem(this);
}
void StrawberryParser::DecremContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrem(this);
}

std::any StrawberryParser::DecremContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDecrem(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivAssignContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::DivAssignContext::DivEq() {
  return getToken(StrawberryParser::DivEq, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::DivAssignContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::DivAssignContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::DivAssignContext::DivAssignContext(AssignContext *ctx) { copyFrom(ctx); }

void StrawberryParser::DivAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivAssign(this);
}
void StrawberryParser::DivAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivAssign(this);
}

std::any StrawberryParser::DivAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDivAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModAssignContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ModAssignContext::ModEq() {
  return getToken(StrawberryParser::ModEq, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::ModAssignContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::ModAssignContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::ModAssignContext::ModAssignContext(AssignContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ModAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModAssign(this);
}
void StrawberryParser::ModAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModAssign(this);
}

std::any StrawberryParser::ModAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitModAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultAssignContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::MultAssignContext::MultEq() {
  return getToken(StrawberryParser::MultEq, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::MultAssignContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::MultAssignContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

StrawberryParser::MultAssignContext::MultAssignContext(AssignContext *ctx) { copyFrom(ctx); }

void StrawberryParser::MultAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultAssign(this);
}
void StrawberryParser::MultAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultAssign(this);
}

std::any StrawberryParser::MultAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitMultAssign(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::AssignContext* StrawberryParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 58, StrawberryParser::RuleAssign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(494);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::DeclareAssignContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(447);
      match(StrawberryParser::Decl);
      setState(448);
      match(StrawberryParser::Id);
      setState(449);
      match(StrawberryParser::Eq);
      setState(450);
      value();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::EqAssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(452);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(451);
        identifyer(0);
      }
      setState(454);
      match(StrawberryParser::Eq);
      setState(455);
      value();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::PowAssignContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(457);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(456);
        identifyer(0);
      }
      setState(459);
      match(StrawberryParser::PowEq);
      setState(460);
      expression(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StrawberryParser::MultAssignContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(462);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(461);
        identifyer(0);
      }
      setState(464);
      match(StrawberryParser::MultEq);
      setState(465);
      expression(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StrawberryParser::DivAssignContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(467);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(466);
        identifyer(0);
      }
      setState(469);
      match(StrawberryParser::DivEq);
      setState(470);
      expression(0);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<StrawberryParser::ModAssignContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(472);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(471);
        identifyer(0);
      }
      setState(474);
      match(StrawberryParser::ModEq);
      setState(475);
      expression(0);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<StrawberryParser::AddAssignContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(477);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(476);
        identifyer(0);
      }
      setState(479);
      match(StrawberryParser::PlusEq);
      setState(480);
      expression(0);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<StrawberryParser::MinAssignContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(482);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(481);
        identifyer(0);
      }
      setState(484);
      match(StrawberryParser::MinEq);
      setState(485);
      expression(0);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<StrawberryParser::IncremContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(487);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(486);
        identifyer(0);
      }
      setState(489);
      match(StrawberryParser::Increm);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<StrawberryParser::DecremContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(491);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(490);
        identifyer(0);
      }
      setState(493);
      match(StrawberryParser::Decrem);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifyerContext ------------------------------------------------------------------

StrawberryParser::IdentifyerContext::IdentifyerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::IdentifyerContext::getRuleIndex() const {
  return StrawberryParser::RuleIdentifyer;
}

void StrawberryParser::IdentifyerContext::copyFrom(IdentifyerContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DotAccessContext ------------------------------------------------------------------

StrawberryParser::IdentifyerContext* StrawberryParser::DotAccessContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

tree::TerminalNode* StrawberryParser::DotAccessContext::Dot() {
  return getToken(StrawberryParser::Dot, 0);
}

tree::TerminalNode* StrawberryParser::DotAccessContext::Id() {
  return getToken(StrawberryParser::Id, 0);
}

StrawberryParser::DotAccessContext::DotAccessContext(IdentifyerContext *ctx) { copyFrom(ctx); }

void StrawberryParser::DotAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDotAccess(this);
}
void StrawberryParser::DotAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDotAccess(this);
}

std::any StrawberryParser::DotAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDotAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrAccesssContext ------------------------------------------------------------------

StrawberryParser::IdentifyerContext* StrawberryParser::ArrAccesssContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

tree::TerminalNode* StrawberryParser::ArrAccesssContext::Lbrack() {
  return getToken(StrawberryParser::Lbrack, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::ArrAccesssContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

tree::TerminalNode* StrawberryParser::ArrAccesssContext::Rbrack() {
  return getToken(StrawberryParser::Rbrack, 0);
}

StrawberryParser::ArrAccesssContext::ArrAccesssContext(IdentifyerContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ArrAccesssContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrAccesss(this);
}
void StrawberryParser::ArrAccesssContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrAccesss(this);
}

std::any StrawberryParser::ArrAccesssContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitArrAccesss(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdAccessContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::IdAccessContext::Id() {
  return getToken(StrawberryParser::Id, 0);
}

StrawberryParser::IdAccessContext::IdAccessContext(IdentifyerContext *ctx) { copyFrom(ctx); }

void StrawberryParser::IdAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdAccess(this);
}
void StrawberryParser::IdAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdAccess(this);
}

std::any StrawberryParser::IdAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitIdAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefaultAccessContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::DefaultAccessContext::Uscore() {
  return getToken(StrawberryParser::Uscore, 0);
}

StrawberryParser::DefaultAccessContext::DefaultAccessContext(IdentifyerContext *ctx) { copyFrom(ctx); }

void StrawberryParser::DefaultAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultAccess(this);
}
void StrawberryParser::DefaultAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultAccess(this);
}

std::any StrawberryParser::DefaultAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDefaultAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FnAccessContext ------------------------------------------------------------------

StrawberryParser::IdentifyerContext* StrawberryParser::FnAccessContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
}

tree::TerminalNode* StrawberryParser::FnAccessContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

StrawberryParser::ArgsContext* StrawberryParser::FnAccessContext::args() {
  return getRuleContext<StrawberryParser::ArgsContext>(0);
}

tree::TerminalNode* StrawberryParser::FnAccessContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

StrawberryParser::FnAccessContext::FnAccessContext(IdentifyerContext *ctx) { copyFrom(ctx); }

void StrawberryParser::FnAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFnAccess(this);
}
void StrawberryParser::FnAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFnAccess(this);
}

std::any StrawberryParser::FnAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitFnAccess(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::IdentifyerContext* StrawberryParser::identifyer() {
   return identifyer(0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::identifyer(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  StrawberryParser::IdentifyerContext *_localctx = _tracker.createInstance<IdentifyerContext>(_ctx, parentState);
  StrawberryParser::IdentifyerContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, StrawberryParser::RuleIdentifyer, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(499);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Id: {
        _localctx = _tracker.createInstance<IdAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(497);
        match(StrawberryParser::Id);
        break;
      }

      case StrawberryParser::Uscore: {
        _localctx = _tracker.createInstance<DefaultAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(498);
        match(StrawberryParser::Uscore);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(516);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(514);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<DotAccessContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(501);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(502);
          match(StrawberryParser::Dot);
          setState(503);
          match(StrawberryParser::Id);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArrAccesssContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(504);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(505);
          match(StrawberryParser::Lbrack);
          setState(506);
          expression(0);
          setState(507);
          match(StrawberryParser::Rbrack);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<FnAccessContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(509);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(510);
          match(StrawberryParser::Lpar);
          setState(511);
          args();
          setState(512);
          match(StrawberryParser::Rpar);
          break;
        }

        default:
          break;
        } 
      }
      setState(518);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LooseFnCallContext ------------------------------------------------------------------

StrawberryParser::LooseFnCallContext::LooseFnCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StrawberryParser::LooseFnCallContext::Id() {
  return getToken(StrawberryParser::Id, 0);
}

std::vector<StrawberryParser::ArgumentContext *> StrawberryParser::LooseFnCallContext::argument() {
  return getRuleContexts<StrawberryParser::ArgumentContext>();
}

StrawberryParser::ArgumentContext* StrawberryParser::LooseFnCallContext::argument(size_t i) {
  return getRuleContext<StrawberryParser::ArgumentContext>(i);
}

std::vector<tree::TerminalNode *> StrawberryParser::LooseFnCallContext::Com() {
  return getTokens(StrawberryParser::Com);
}

tree::TerminalNode* StrawberryParser::LooseFnCallContext::Com(size_t i) {
  return getToken(StrawberryParser::Com, i);
}


size_t StrawberryParser::LooseFnCallContext::getRuleIndex() const {
  return StrawberryParser::RuleLooseFnCall;
}

void StrawberryParser::LooseFnCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLooseFnCall(this);
}

void StrawberryParser::LooseFnCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLooseFnCall(this);
}


std::any StrawberryParser::LooseFnCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitLooseFnCall(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::LooseFnCallContext* StrawberryParser::looseFnCall() {
  LooseFnCallContext *_localctx = _tracker.createInstance<LooseFnCallContext>(_ctx, getState());
  enterRule(_localctx, 62, StrawberryParser::RuleLooseFnCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(519);
    match(StrawberryParser::Id);
    setState(520);
    argument();
    setState(525);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(521);
        match(StrawberryParser::Com);
        setState(522);
        argument(); 
      }
      setState(527);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op1Context ------------------------------------------------------------------

StrawberryParser::Op1Context::Op1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::Op1Context::getRuleIndex() const {
  return StrawberryParser::RuleOp1;
}

void StrawberryParser::Op1Context::copyFrom(Op1Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PowContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::PowContext::Pow() {
  return getToken(StrawberryParser::Pow, 0);
}

StrawberryParser::PowContext::PowContext(Op1Context *ctx) { copyFrom(ctx); }

void StrawberryParser::PowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPow(this);
}
void StrawberryParser::PowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPow(this);
}

std::any StrawberryParser::PowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitPow(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op1Context* StrawberryParser::op1() {
  Op1Context *_localctx = _tracker.createInstance<Op1Context>(_ctx, getState());
  enterRule(_localctx, 64, StrawberryParser::RuleOp1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<StrawberryParser::PowContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(528);
    match(StrawberryParser::Pow);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op2Context ------------------------------------------------------------------

StrawberryParser::Op2Context::Op2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::Op2Context::getRuleIndex() const {
  return StrawberryParser::RuleOp2;
}

void StrawberryParser::Op2Context::copyFrom(Op2Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DivContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::DivContext::Bslash() {
  return getToken(StrawberryParser::Bslash, 0);
}

StrawberryParser::DivContext::DivContext(Op2Context *ctx) { copyFrom(ctx); }

void StrawberryParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}
void StrawberryParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}

std::any StrawberryParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::MultContext::Star() {
  return getToken(StrawberryParser::Star, 0);
}

StrawberryParser::MultContext::MultContext(Op2Context *ctx) { copyFrom(ctx); }

void StrawberryParser::MultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMult(this);
}
void StrawberryParser::MultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMult(this);
}

std::any StrawberryParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ModContext::Mod() {
  return getToken(StrawberryParser::Mod, 0);
}

StrawberryParser::ModContext::ModContext(Op2Context *ctx) { copyFrom(ctx); }

void StrawberryParser::ModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMod(this);
}
void StrawberryParser::ModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMod(this);
}

std::any StrawberryParser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op2Context* StrawberryParser::op2() {
  Op2Context *_localctx = _tracker.createInstance<Op2Context>(_ctx, getState());
  enterRule(_localctx, 66, StrawberryParser::RuleOp2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(533);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Star: {
        _localctx = _tracker.createInstance<StrawberryParser::MultContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(530);
        match(StrawberryParser::Star);
        break;
      }

      case StrawberryParser::Bslash: {
        _localctx = _tracker.createInstance<StrawberryParser::DivContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(531);
        match(StrawberryParser::Bslash);
        break;
      }

      case StrawberryParser::Mod: {
        _localctx = _tracker.createInstance<StrawberryParser::ModContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(532);
        match(StrawberryParser::Mod);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op3Context ------------------------------------------------------------------

StrawberryParser::Op3Context::Op3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::Op3Context::getRuleIndex() const {
  return StrawberryParser::RuleOp3;
}

void StrawberryParser::Op3Context::copyFrom(Op3Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MinContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::MinContext::Min() {
  return getToken(StrawberryParser::Min, 0);
}

StrawberryParser::MinContext::MinContext(Op3Context *ctx) { copyFrom(ctx); }

void StrawberryParser::MinContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMin(this);
}
void StrawberryParser::MinContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMin(this);
}

std::any StrawberryParser::MinContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitMin(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::PlusContext::Plus() {
  return getToken(StrawberryParser::Plus, 0);
}

StrawberryParser::PlusContext::PlusContext(Op3Context *ctx) { copyFrom(ctx); }

void StrawberryParser::PlusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlus(this);
}
void StrawberryParser::PlusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlus(this);
}

std::any StrawberryParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op3Context* StrawberryParser::op3() {
  Op3Context *_localctx = _tracker.createInstance<Op3Context>(_ctx, getState());
  enterRule(_localctx, 68, StrawberryParser::RuleOp3);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(537);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Plus: {
        _localctx = _tracker.createInstance<StrawberryParser::PlusContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(535);
        match(StrawberryParser::Plus);
        break;
      }

      case StrawberryParser::Min: {
        _localctx = _tracker.createInstance<StrawberryParser::MinContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(536);
        match(StrawberryParser::Min);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op4Context ------------------------------------------------------------------

StrawberryParser::Op4Context::Op4Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::Op4Context::getRuleIndex() const {
  return StrawberryParser::RuleOp4;
}

void StrawberryParser::Op4Context::copyFrom(Op4Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefinedOrContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::DefinedOrContext::DefOr() {
  return getToken(StrawberryParser::DefOr, 0);
}

StrawberryParser::DefinedOrContext::DefinedOrContext(Op4Context *ctx) { copyFrom(ctx); }

void StrawberryParser::DefinedOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinedOr(this);
}
void StrawberryParser::DefinedOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinedOr(this);
}

std::any StrawberryParser::DefinedOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDefinedOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RangeOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::RangeOpContext::Dot2() {
  return getToken(StrawberryParser::Dot2, 0);
}

StrawberryParser::RangeOpContext::RangeOpContext(Op4Context *ctx) { copyFrom(ctx); }

void StrawberryParser::RangeOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeOp(this);
}
void StrawberryParser::RangeOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeOp(this);
}

std::any StrawberryParser::RangeOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitRangeOp(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op4Context* StrawberryParser::op4() {
  Op4Context *_localctx = _tracker.createInstance<Op4Context>(_ctx, getState());
  enterRule(_localctx, 70, StrawberryParser::RuleOp4);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(541);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::DefOr: {
        _localctx = _tracker.createInstance<StrawberryParser::DefinedOrContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(539);
        match(StrawberryParser::DefOr);
        break;
      }

      case StrawberryParser::Dot2: {
        _localctx = _tracker.createInstance<StrawberryParser::RangeOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(540);
        match(StrawberryParser::Dot2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixContext ------------------------------------------------------------------

StrawberryParser::PrefixContext::PrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::PrefixContext::getRuleIndex() const {
  return StrawberryParser::RulePrefix;
}

void StrawberryParser::PrefixContext::copyFrom(PrefixContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RefPrefixContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::RefPrefixContext::Fslash() {
  return getToken(StrawberryParser::Fslash, 0);
}

StrawberryParser::RefPrefixContext::RefPrefixContext(PrefixContext *ctx) { copyFrom(ctx); }

void StrawberryParser::RefPrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRefPrefix(this);
}
void StrawberryParser::RefPrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRefPrefix(this);
}

std::any StrawberryParser::RefPrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitRefPrefix(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegatePrefixContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::NegatePrefixContext::ExPoint() {
  return getToken(StrawberryParser::ExPoint, 0);
}

StrawberryParser::NegatePrefixContext::NegatePrefixContext(PrefixContext *ctx) { copyFrom(ctx); }

void StrawberryParser::NegatePrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegatePrefix(this);
}
void StrawberryParser::NegatePrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegatePrefix(this);
}

std::any StrawberryParser::NegatePrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitNegatePrefix(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegativePrefixContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::NegativePrefixContext::Min() {
  return getToken(StrawberryParser::Min, 0);
}

StrawberryParser::NegativePrefixContext::NegativePrefixContext(PrefixContext *ctx) { copyFrom(ctx); }

void StrawberryParser::NegativePrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegativePrefix(this);
}
void StrawberryParser::NegativePrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegativePrefix(this);
}

std::any StrawberryParser::NegativePrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitNegativePrefix(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::PrefixContext* StrawberryParser::prefix() {
  PrefixContext *_localctx = _tracker.createInstance<PrefixContext>(_ctx, getState());
  enterRule(_localctx, 72, StrawberryParser::RulePrefix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(546);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::ExPoint: {
        _localctx = _tracker.createInstance<StrawberryParser::NegatePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(543);
        match(StrawberryParser::ExPoint);
        break;
      }

      case StrawberryParser::Fslash: {
        _localctx = _tracker.createInstance<StrawberryParser::RefPrefixContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(544);
        match(StrawberryParser::Fslash);
        break;
      }

      case StrawberryParser::Min: {
        _localctx = _tracker.createInstance<StrawberryParser::NegativePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(545);
        match(StrawberryParser::Min);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op5Context ------------------------------------------------------------------

StrawberryParser::Op5Context::Op5Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::Op5Context::getRuleIndex() const {
  return StrawberryParser::RuleOp5;
}

void StrawberryParser::Op5Context::copyFrom(Op5Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BoolGtEqContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolGtEqContext::GtEq() {
  return getToken(StrawberryParser::GtEq, 0);
}

StrawberryParser::BoolGtEqContext::BoolGtEqContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolGtEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolGtEq(this);
}
void StrawberryParser::BoolGtEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolGtEq(this);
}

std::any StrawberryParser::BoolGtEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolGtEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolLtEqContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolLtEqContext::LtEq() {
  return getToken(StrawberryParser::LtEq, 0);
}

StrawberryParser::BoolLtEqContext::BoolLtEqContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolLtEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLtEq(this);
}
void StrawberryParser::BoolLtEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLtEq(this);
}

std::any StrawberryParser::BoolLtEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolLtEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolLtContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolLtContext::Lt() {
  return getToken(StrawberryParser::Lt, 0);
}

StrawberryParser::BoolLtContext::BoolLtContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolLtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLt(this);
}
void StrawberryParser::BoolLtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLt(this);
}

std::any StrawberryParser::BoolLtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolLt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolNeqContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolNeqContext::BoolNeq() {
  return getToken(StrawberryParser::BoolNeq, 0);
}

StrawberryParser::BoolNeqContext::BoolNeqContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolNeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolNeq(this);
}
void StrawberryParser::BoolNeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolNeq(this);
}

std::any StrawberryParser::BoolNeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolNeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolGtContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolGtContext::Gt() {
  return getToken(StrawberryParser::Gt, 0);
}

StrawberryParser::BoolGtContext::BoolGtContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolGtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolGt(this);
}
void StrawberryParser::BoolGtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolGt(this);
}

std::any StrawberryParser::BoolGtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolGt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolEqContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolEqContext::BoolEq() {
  return getToken(StrawberryParser::BoolEq, 0);
}

StrawberryParser::BoolEqContext::BoolEqContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolEqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolEq(this);
}
void StrawberryParser::BoolEqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolEq(this);
}

std::any StrawberryParser::BoolEqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolEq(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op5Context* StrawberryParser::op5() {
  Op5Context *_localctx = _tracker.createInstance<Op5Context>(_ctx, getState());
  enterRule(_localctx, 74, StrawberryParser::RuleOp5);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(554);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::BoolEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolEqContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(548);
        match(StrawberryParser::BoolEq);
        break;
      }

      case StrawberryParser::BoolNeq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolNeqContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(549);
        match(StrawberryParser::BoolNeq);
        break;
      }

      case StrawberryParser::Gt: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolGtContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(550);
        match(StrawberryParser::Gt);
        break;
      }

      case StrawberryParser::GtEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolGtEqContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(551);
        match(StrawberryParser::GtEq);
        break;
      }

      case StrawberryParser::Lt: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolLtContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(552);
        match(StrawberryParser::Lt);
        break;
      }

      case StrawberryParser::LtEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolLtEqContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(553);
        match(StrawberryParser::LtEq);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op6Context ------------------------------------------------------------------

StrawberryParser::Op6Context::Op6Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::Op6Context::getRuleIndex() const {
  return StrawberryParser::RuleOp6;
}

void StrawberryParser::Op6Context::copyFrom(Op6Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OrContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::OrContext::Or() {
  return getToken(StrawberryParser::Or, 0);
}

StrawberryParser::OrContext::OrContext(Op6Context *ctx) { copyFrom(ctx); }

void StrawberryParser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}
void StrawberryParser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}

std::any StrawberryParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::AndContext::And() {
  return getToken(StrawberryParser::And, 0);
}

StrawberryParser::AndContext::AndContext(Op6Context *ctx) { copyFrom(ctx); }

void StrawberryParser::AndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd(this);
}
void StrawberryParser::AndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd(this);
}

std::any StrawberryParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op6Context* StrawberryParser::op6() {
  Op6Context *_localctx = _tracker.createInstance<Op6Context>(_ctx, getState());
  enterRule(_localctx, 76, StrawberryParser::RuleOp6);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(558);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Or: {
        _localctx = _tracker.createInstance<StrawberryParser::OrContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(556);
        match(StrawberryParser::Or);
        break;
      }

      case StrawberryParser::And: {
        _localctx = _tracker.createInstance<StrawberryParser::AndContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(557);
        match(StrawberryParser::And);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SuffixContext ------------------------------------------------------------------

StrawberryParser::SuffixContext::SuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::SuffixContext::getRuleIndex() const {
  return StrawberryParser::RuleSuffix;
}

void StrawberryParser::SuffixContext::copyFrom(SuffixContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OrDefaultContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::OrDefaultContext::DefOr() {
  return getToken(StrawberryParser::DefOr, 0);
}

StrawberryParser::OrDefaultContext::OrDefaultContext(SuffixContext *ctx) { copyFrom(ctx); }

void StrawberryParser::OrDefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrDefault(this);
}
void StrawberryParser::OrDefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrDefault(this);
}

std::any StrawberryParser::OrDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitOrDefault(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExcitedSuffContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ExcitedSuffContext::ExPoint() {
  return getToken(StrawberryParser::ExPoint, 0);
}

StrawberryParser::ExcitedSuffContext::ExcitedSuffContext(SuffixContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ExcitedSuffContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExcitedSuff(this);
}
void StrawberryParser::ExcitedSuffContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExcitedSuff(this);
}

std::any StrawberryParser::ExcitedSuffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitExcitedSuff(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::SuffixContext* StrawberryParser::suffix() {
  SuffixContext *_localctx = _tracker.createInstance<SuffixContext>(_ctx, getState());
  enterRule(_localctx, 78, StrawberryParser::RuleSuffix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(562);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::DefOr: {
        _localctx = _tracker.createInstance<StrawberryParser::OrDefaultContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(560);
        match(StrawberryParser::DefOr);
        break;
      }

      case StrawberryParser::ExPoint: {
        _localctx = _tracker.createInstance<StrawberryParser::ExcitedSuffContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(561);
        match(StrawberryParser::ExPoint);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool StrawberryParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return compoundActionSempred(antlrcpp::downCast<CompoundActionContext *>(context), predicateIndex);
    case 26: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);
    case 30: return identifyerSempred(antlrcpp::downCast<IdentifyerContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool StrawberryParser::compoundActionSempred(CompoundActionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool StrawberryParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 11);
    case 3: return precpred(_ctx, 10);
    case 4: return precpred(_ctx, 9);
    case 5: return precpred(_ctx, 8);
    case 6: return precpred(_ctx, 6);
    case 7: return precpred(_ctx, 5);
    case 8: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool StrawberryParser::identifyerSempred(IdentifyerContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 5);
    case 10: return precpred(_ctx, 4);
    case 11: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void StrawberryParser::initialize() {
  ::antlr4::internal::call_once(strawberryparserParserOnceFlag, strawberryparserParserInitialize);
}
