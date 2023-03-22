
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
      "matchRegex", "matchOptions", "matchContent", "matchChars", "value", 
      "expression", "literal", "stringContent", "assign", "identifyer", 
      "looseFnCall", "prefix", "highPrioritySuffix", "op1", "op2", "op3", 
      "op4", "op5", "op6", "lowPrioritySuffix"
    },
    std::vector<std::string>{
      "", "'fn'", "'let'", "'if'", "'unless'", "'else'", "'while'", "'until'", 
      "'for'", "'return'", "'break'", "'next'", "'last'", "'once'", "'~>'", 
      "'\\w'", "'\\d'", "'\\s'", "'\\n'", "'\\/'", "'return all'", "", "", 
      "", "", "", "", "", "", "", "", "'true'", "'false'", "'null'", "'\\\\'", 
      "'->'", "'=>'", "'>>'", "'<<'", "'..'", "'...'", "'as'", "'+='", "'-='", 
      "'*='", "'/='", "'%='", "'^='", "'++'", "'--'", "'['", "']'", "'{'", 
      "'}'", "'('", "')'", "'^'", "'*'", "'/'", "'%'", "'+'", "'-'", "'='", 
      "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", "'&&'", "'||'", "'_'", 
      "'&'", "'$'", "'\\$'", "'#'", "'@'", "'!'", "'\\u003F'", "':'", "';'", 
      "'\\'", "'|'", "'\"'", "'''", "','", "'.'", "'~'", "'`'"
    },
    std::vector<std::string>{
      "", "Fn", "Decl", "If", "Unless", "Else", "While", "Until", "For", 
      "Return", "Break", "Next", "Last", "Once", "MatchArrow", "RegWord", 
      "RegDigit", "RegSpace", "RegNewline", "RegFSlash", "RegReturnAll", 
      "Id", "DefId", "Number", "String", "StringLit", "Digit", "Word", "Letter", 
      "UcLetter", "LcLetter", "True", "False", "Null", "DefOr", "Sarrow", 
      "Darrow", "LRarrow", "RLarrow", "Dot2", "Dot3", "As", "PlusEq", "MinEq", 
      "MultEq", "DivEq", "ModEq", "PowEq", "Increm", "Decrem", "Lbrack", 
      "Rbrack", "Lbrace", "Rbrace", "Lpar", "Rpar", "Pow", "Star", "Bslash", 
      "Mod", "Plus", "Min", "Eq", "BoolEq", "BoolNeq", "Gt", "GtEq", "Lt", 
      "LtEq", "And", "Or", "Uscore", "AndSign", "Doll", "DollLit", "Hash", 
      "At", "ExPoint", "Qmark", "Colon", "Semi", "Fslash", "Bar", "Dquote", 
      "Squote", "Com", "Dot", "Squig", "Btick", "Ignore", "WS", "RETURN"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,91,538,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,1,0,4,0,88,8,0,11,0,12,0,89,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,
  	2,3,2,102,8,2,1,3,1,3,5,3,106,8,3,10,3,12,3,109,9,3,1,3,1,3,1,4,1,4,1,
  	4,3,4,116,8,4,1,5,1,5,3,5,120,8,5,1,5,1,5,1,5,1,5,3,5,126,8,5,1,5,1,5,
  	3,5,130,8,5,1,6,1,6,1,6,1,6,3,6,136,8,6,1,7,1,7,1,7,1,7,1,7,3,7,143,8,
  	7,1,8,1,8,3,8,147,8,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,166,8,11,5,11,168,8,11,10,11,12,
  	11,171,9,11,1,12,1,12,1,12,1,12,3,12,177,8,12,1,12,1,12,1,12,1,12,1,12,
  	3,12,184,8,12,5,12,186,8,12,10,12,12,12,189,9,12,1,13,1,13,3,13,193,8,
  	13,1,14,1,14,1,14,1,14,1,14,1,14,3,14,201,8,14,3,14,203,8,14,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,3,15,213,8,15,3,15,215,8,15,1,16,1,16,3,
  	16,219,8,16,1,17,1,17,1,17,3,17,224,8,17,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,5,20,241,8,20,10,20,12,20,
  	244,9,20,1,20,3,20,247,8,20,1,20,1,20,5,20,251,8,20,10,20,12,20,254,9,
  	20,1,20,1,20,3,20,258,8,20,1,21,1,21,1,21,5,21,263,8,21,10,21,12,21,266,
  	9,21,3,21,268,8,21,1,22,1,22,1,22,1,22,3,22,274,8,22,1,23,1,23,1,23,5,
  	23,279,8,23,10,23,12,23,282,9,23,1,23,3,23,285,8,23,1,23,1,23,4,23,289,
  	8,23,11,23,12,23,290,1,23,1,23,1,24,1,24,1,25,1,25,1,25,1,25,1,25,5,25,
  	302,8,25,10,25,12,25,305,9,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,4,25,
  	314,8,25,11,25,12,25,315,3,25,318,8,25,1,25,1,25,1,25,1,25,1,25,1,25,
  	5,25,326,8,25,10,25,12,25,329,9,25,1,26,1,26,1,26,1,26,1,26,3,26,336,
  	8,26,1,27,1,27,3,27,340,8,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,361,8,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	5,28,391,8,28,10,28,12,28,394,9,28,1,29,1,29,5,29,398,8,29,10,29,12,29,
  	401,9,29,1,29,1,29,1,29,5,29,406,8,29,10,29,12,29,409,9,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,3,29,417,8,29,1,30,1,30,1,30,1,30,1,30,3,30,424,8,
  	30,1,31,1,31,1,31,1,31,1,31,3,31,431,8,31,1,31,1,31,1,31,3,31,436,8,31,
  	1,31,1,31,1,31,3,31,441,8,31,1,31,1,31,1,31,3,31,446,8,31,1,31,1,31,1,
  	31,3,31,451,8,31,1,31,1,31,1,31,3,31,456,8,31,1,31,1,31,1,31,3,31,461,
  	8,31,1,31,1,31,1,31,3,31,466,8,31,1,31,1,31,3,31,470,8,31,1,31,3,31,473,
  	8,31,1,32,1,32,1,32,3,32,478,8,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,
  	1,32,5,32,488,8,32,10,32,12,32,491,9,32,1,33,1,33,1,33,1,33,5,33,497,
  	8,33,10,33,12,33,500,9,33,1,34,1,34,1,34,3,34,505,8,34,1,35,1,35,1,36,
  	1,36,1,37,1,37,1,37,3,37,514,8,37,1,38,1,38,3,38,518,8,38,1,39,1,39,3,
  	39,522,8,39,1,40,1,40,1,40,1,40,1,40,1,40,3,40,530,8,40,1,41,1,41,3,41,
  	534,8,41,1,42,1,42,1,42,1,407,4,24,50,56,64,43,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,
  	64,66,68,70,72,74,76,78,80,82,84,0,2,3,0,50,51,54,55,82,82,1,0,83,83,
  	606,0,87,1,0,0,0,2,93,1,0,0,0,4,101,1,0,0,0,6,103,1,0,0,0,8,115,1,0,0,
  	0,10,129,1,0,0,0,12,135,1,0,0,0,14,142,1,0,0,0,16,146,1,0,0,0,18,148,
  	1,0,0,0,20,152,1,0,0,0,22,158,1,0,0,0,24,176,1,0,0,0,26,192,1,0,0,0,28,
  	194,1,0,0,0,30,204,1,0,0,0,32,218,1,0,0,0,34,223,1,0,0,0,36,225,1,0,0,
  	0,38,232,1,0,0,0,40,257,1,0,0,0,42,267,1,0,0,0,44,273,1,0,0,0,46,275,
  	1,0,0,0,48,294,1,0,0,0,50,317,1,0,0,0,52,335,1,0,0,0,54,339,1,0,0,0,56,
  	360,1,0,0,0,58,416,1,0,0,0,60,423,1,0,0,0,62,472,1,0,0,0,64,477,1,0,0,
  	0,66,492,1,0,0,0,68,504,1,0,0,0,70,506,1,0,0,0,72,508,1,0,0,0,74,513,
  	1,0,0,0,76,517,1,0,0,0,78,521,1,0,0,0,80,529,1,0,0,0,82,533,1,0,0,0,84,
  	535,1,0,0,0,86,88,3,4,2,0,87,86,1,0,0,0,88,89,1,0,0,0,89,87,1,0,0,0,89,
  	90,1,0,0,0,90,91,1,0,0,0,91,92,5,0,0,1,92,1,1,0,0,0,93,94,3,36,18,0,94,
  	3,1,0,0,0,95,96,3,8,4,0,96,97,5,80,0,0,97,102,1,0,0,0,98,102,3,6,3,0,
  	99,102,3,14,7,0,100,102,3,2,1,0,101,95,1,0,0,0,101,98,1,0,0,0,101,99,
  	1,0,0,0,101,100,1,0,0,0,102,5,1,0,0,0,103,107,5,52,0,0,104,106,3,4,2,
  	0,105,104,1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,
  	110,1,0,0,0,109,107,1,0,0,0,110,111,5,53,0,0,111,7,1,0,0,0,112,116,3,
  	54,27,0,113,116,3,6,3,0,114,116,3,10,5,0,115,112,1,0,0,0,115,113,1,0,
  	0,0,115,114,1,0,0,0,116,9,1,0,0,0,117,119,5,9,0,0,118,120,3,54,27,0,119,
  	118,1,0,0,0,119,120,1,0,0,0,120,130,1,0,0,0,121,122,5,13,0,0,122,130,
  	3,8,4,0,123,125,5,11,0,0,124,126,3,56,28,0,125,124,1,0,0,0,125,126,1,
  	0,0,0,126,130,1,0,0,0,127,130,5,12,0,0,128,130,5,10,0,0,129,117,1,0,0,
  	0,129,121,1,0,0,0,129,123,1,0,0,0,129,127,1,0,0,0,129,128,1,0,0,0,130,
  	11,1,0,0,0,131,136,3,6,3,0,132,133,3,8,4,0,133,134,5,80,0,0,134,136,1,
  	0,0,0,135,131,1,0,0,0,135,132,1,0,0,0,136,13,1,0,0,0,137,138,3,22,11,
  	0,138,139,5,80,0,0,139,143,1,0,0,0,140,143,3,16,8,0,141,143,3,26,13,0,
  	142,137,1,0,0,0,142,140,1,0,0,0,142,141,1,0,0,0,143,15,1,0,0,0,144,147,
  	3,18,9,0,145,147,3,20,10,0,146,144,1,0,0,0,146,145,1,0,0,0,147,17,1,0,
  	0,0,148,149,3,34,17,0,149,150,3,56,28,0,150,151,3,6,3,0,151,19,1,0,0,
  	0,152,153,3,34,17,0,153,154,5,54,0,0,154,155,3,56,28,0,155,156,5,55,0,
  	0,156,157,3,12,6,0,157,21,1,0,0,0,158,169,3,24,12,0,159,165,3,34,17,0,
  	160,166,3,56,28,0,161,162,5,54,0,0,162,163,3,42,21,0,163,164,5,55,0,0,
  	164,166,1,0,0,0,165,160,1,0,0,0,165,161,1,0,0,0,166,168,1,0,0,0,167,159,
  	1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,23,1,0,0,
  	0,171,169,1,0,0,0,172,173,6,12,-1,0,173,177,3,28,14,0,174,177,3,18,9,
  	0,175,177,3,8,4,0,176,172,1,0,0,0,176,174,1,0,0,0,176,175,1,0,0,0,177,
  	187,1,0,0,0,178,179,10,4,0,0,179,180,3,32,16,0,180,183,3,56,28,0,181,
  	182,5,5,0,0,182,184,3,24,12,0,183,181,1,0,0,0,183,184,1,0,0,0,184,186,
  	1,0,0,0,185,178,1,0,0,0,186,189,1,0,0,0,187,185,1,0,0,0,187,188,1,0,0,
  	0,188,25,1,0,0,0,189,187,1,0,0,0,190,193,3,28,14,0,191,193,3,30,15,0,
  	192,190,1,0,0,0,192,191,1,0,0,0,193,27,1,0,0,0,194,195,3,32,16,0,195,
  	196,3,56,28,0,196,202,3,6,3,0,197,200,5,5,0,0,198,201,3,12,6,0,199,201,
  	3,26,13,0,200,198,1,0,0,0,200,199,1,0,0,0,201,203,1,0,0,0,202,197,1,0,
  	0,0,202,203,1,0,0,0,203,29,1,0,0,0,204,205,3,32,16,0,205,206,5,54,0,0,
  	206,207,3,56,28,0,207,208,5,55,0,0,208,214,3,12,6,0,209,212,5,5,0,0,210,
  	213,3,12,6,0,211,213,3,26,13,0,212,210,1,0,0,0,212,211,1,0,0,0,213,215,
  	1,0,0,0,214,209,1,0,0,0,214,215,1,0,0,0,215,31,1,0,0,0,216,219,5,3,0,
  	0,217,219,5,4,0,0,218,216,1,0,0,0,218,217,1,0,0,0,219,33,1,0,0,0,220,
  	224,5,8,0,0,221,224,5,6,0,0,222,224,5,7,0,0,223,220,1,0,0,0,223,221,1,
  	0,0,0,223,222,1,0,0,0,224,35,1,0,0,0,225,226,5,1,0,0,226,227,5,21,0,0,
  	227,228,5,54,0,0,228,229,3,40,20,0,229,230,5,55,0,0,230,231,3,6,3,0,231,
  	37,1,0,0,0,232,233,5,54,0,0,233,234,3,40,20,0,234,235,5,55,0,0,235,236,
  	5,36,0,0,236,237,3,8,4,0,237,39,1,0,0,0,238,239,5,21,0,0,239,241,5,85,
  	0,0,240,238,1,0,0,0,241,244,1,0,0,0,242,240,1,0,0,0,242,243,1,0,0,0,243,
  	245,1,0,0,0,244,242,1,0,0,0,245,247,5,21,0,0,246,242,1,0,0,0,246,247,
  	1,0,0,0,247,258,1,0,0,0,248,249,5,21,0,0,249,251,5,85,0,0,250,248,1,0,
  	0,0,251,254,1,0,0,0,252,250,1,0,0,0,252,253,1,0,0,0,253,255,1,0,0,0,254,
  	252,1,0,0,0,255,256,5,21,0,0,256,258,5,40,0,0,257,246,1,0,0,0,257,252,
  	1,0,0,0,258,41,1,0,0,0,259,264,3,44,22,0,260,261,5,85,0,0,261,263,3,44,
  	22,0,262,260,1,0,0,0,263,266,1,0,0,0,264,262,1,0,0,0,264,265,1,0,0,0,
  	265,268,1,0,0,0,266,264,1,0,0,0,267,259,1,0,0,0,267,268,1,0,0,0,268,43,
  	1,0,0,0,269,274,3,54,27,0,270,271,5,40,0,0,271,274,3,54,27,0,272,274,
  	3,66,33,0,273,269,1,0,0,0,273,270,1,0,0,0,273,272,1,0,0,0,274,45,1,0,
  	0,0,275,284,5,87,0,0,276,280,5,52,0,0,277,279,3,48,24,0,278,277,1,0,0,
  	0,279,282,1,0,0,0,280,278,1,0,0,0,280,281,1,0,0,0,281,283,1,0,0,0,282,
  	280,1,0,0,0,283,285,5,53,0,0,284,276,1,0,0,0,284,285,1,0,0,0,285,286,
  	1,0,0,0,286,288,5,58,0,0,287,289,3,50,25,0,288,287,1,0,0,0,289,290,1,
  	0,0,0,290,288,1,0,0,0,290,291,1,0,0,0,291,292,1,0,0,0,292,293,5,58,0,
  	0,293,47,1,0,0,0,294,295,5,20,0,0,295,49,1,0,0,0,296,297,6,25,-1,0,297,
  	298,5,50,0,0,298,303,3,50,25,0,299,300,5,82,0,0,300,302,3,50,25,0,301,
  	299,1,0,0,0,302,305,1,0,0,0,303,301,1,0,0,0,303,304,1,0,0,0,304,306,1,
  	0,0,0,305,303,1,0,0,0,306,307,5,51,0,0,307,318,1,0,0,0,308,309,5,54,0,
  	0,309,310,3,50,25,0,310,311,5,55,0,0,311,318,1,0,0,0,312,314,3,52,26,
  	0,313,312,1,0,0,0,314,315,1,0,0,0,315,313,1,0,0,0,315,316,1,0,0,0,316,
  	318,1,0,0,0,317,296,1,0,0,0,317,308,1,0,0,0,317,313,1,0,0,0,318,327,1,
  	0,0,0,319,320,10,6,0,0,320,326,5,60,0,0,321,322,10,5,0,0,322,326,5,57,
  	0,0,323,324,10,4,0,0,324,326,5,78,0,0,325,319,1,0,0,0,325,321,1,0,0,0,
  	325,323,1,0,0,0,326,329,1,0,0,0,327,325,1,0,0,0,327,328,1,0,0,0,328,51,
  	1,0,0,0,329,327,1,0,0,0,330,336,5,15,0,0,331,336,5,18,0,0,332,336,5,34,
  	0,0,333,336,5,86,0,0,334,336,8,0,0,0,335,330,1,0,0,0,335,331,1,0,0,0,
  	335,332,1,0,0,0,335,333,1,0,0,0,335,334,1,0,0,0,336,53,1,0,0,0,337,340,
  	3,56,28,0,338,340,3,38,19,0,339,337,1,0,0,0,339,338,1,0,0,0,340,55,1,
  	0,0,0,341,342,6,28,-1,0,342,343,5,54,0,0,343,344,3,56,28,0,344,345,5,
  	55,0,0,345,361,1,0,0,0,346,361,3,62,31,0,347,348,3,68,34,0,348,349,3,
  	56,28,15,349,361,1,0,0,0,350,361,3,70,35,0,351,361,3,84,42,0,352,361,
  	3,64,32,0,353,354,3,64,32,0,354,355,5,54,0,0,355,356,3,42,21,0,356,357,
  	5,55,0,0,357,361,1,0,0,0,358,361,3,58,29,0,359,361,3,66,33,0,360,341,
  	1,0,0,0,360,346,1,0,0,0,360,347,1,0,0,0,360,350,1,0,0,0,360,351,1,0,0,
  	0,360,352,1,0,0,0,360,353,1,0,0,0,360,358,1,0,0,0,360,359,1,0,0,0,361,
  	392,1,0,0,0,362,363,10,12,0,0,363,364,3,72,36,0,364,365,3,56,28,13,365,
  	391,1,0,0,0,366,367,10,11,0,0,367,368,3,74,37,0,368,369,3,56,28,12,369,
  	391,1,0,0,0,370,371,10,10,0,0,371,372,3,76,38,0,372,373,3,56,28,11,373,
  	391,1,0,0,0,374,375,10,9,0,0,375,376,3,78,39,0,376,377,3,56,28,10,377,
  	391,1,0,0,0,378,379,10,8,0,0,379,380,3,80,40,0,380,381,3,56,28,9,381,
  	391,1,0,0,0,382,383,10,7,0,0,383,384,3,82,41,0,384,385,3,56,28,8,385,
  	391,1,0,0,0,386,387,10,13,0,0,387,391,3,70,35,0,388,389,10,5,0,0,389,
  	391,3,84,42,0,390,362,1,0,0,0,390,366,1,0,0,0,390,370,1,0,0,0,390,374,
  	1,0,0,0,390,378,1,0,0,0,390,382,1,0,0,0,390,386,1,0,0,0,390,388,1,0,0,
  	0,391,394,1,0,0,0,392,390,1,0,0,0,392,393,1,0,0,0,393,57,1,0,0,0,394,
  	392,1,0,0,0,395,399,5,83,0,0,396,398,3,60,30,0,397,396,1,0,0,0,398,401,
  	1,0,0,0,399,397,1,0,0,0,399,400,1,0,0,0,400,402,1,0,0,0,401,399,1,0,0,
  	0,402,417,5,83,0,0,403,407,5,84,0,0,404,406,9,0,0,0,405,404,1,0,0,0,406,
  	409,1,0,0,0,407,408,1,0,0,0,407,405,1,0,0,0,408,410,1,0,0,0,409,407,1,
  	0,0,0,410,417,5,84,0,0,411,412,5,50,0,0,412,413,3,42,21,0,413,414,5,51,
  	0,0,414,417,1,0,0,0,415,417,5,23,0,0,416,395,1,0,0,0,416,403,1,0,0,0,
  	416,411,1,0,0,0,416,415,1,0,0,0,417,59,1,0,0,0,418,419,5,73,0,0,419,424,
  	3,64,32,0,420,424,5,74,0,0,421,424,5,90,0,0,422,424,8,1,0,0,423,418,1,
  	0,0,0,423,420,1,0,0,0,423,421,1,0,0,0,423,422,1,0,0,0,424,61,1,0,0,0,
  	425,426,5,2,0,0,426,427,5,21,0,0,427,428,5,62,0,0,428,473,3,54,27,0,429,
  	431,3,64,32,0,430,429,1,0,0,0,430,431,1,0,0,0,431,432,1,0,0,0,432,433,
  	5,62,0,0,433,473,3,54,27,0,434,436,3,64,32,0,435,434,1,0,0,0,435,436,
  	1,0,0,0,436,437,1,0,0,0,437,438,5,47,0,0,438,473,3,56,28,0,439,441,3,
  	64,32,0,440,439,1,0,0,0,440,441,1,0,0,0,441,442,1,0,0,0,442,443,5,44,
  	0,0,443,473,3,56,28,0,444,446,3,64,32,0,445,444,1,0,0,0,445,446,1,0,0,
  	0,446,447,1,0,0,0,447,448,5,45,0,0,448,473,3,56,28,0,449,451,3,64,32,
  	0,450,449,1,0,0,0,450,451,1,0,0,0,451,452,1,0,0,0,452,453,5,46,0,0,453,
  	473,3,56,28,0,454,456,3,64,32,0,455,454,1,0,0,0,455,456,1,0,0,0,456,457,
  	1,0,0,0,457,458,5,42,0,0,458,473,3,56,28,0,459,461,3,64,32,0,460,459,
  	1,0,0,0,460,461,1,0,0,0,461,462,1,0,0,0,462,463,5,43,0,0,463,473,3,56,
  	28,0,464,466,3,64,32,0,465,464,1,0,0,0,465,466,1,0,0,0,466,467,1,0,0,
  	0,467,473,5,48,0,0,468,470,3,64,32,0,469,468,1,0,0,0,469,470,1,0,0,0,
  	470,471,1,0,0,0,471,473,5,49,0,0,472,425,1,0,0,0,472,430,1,0,0,0,472,
  	435,1,0,0,0,472,440,1,0,0,0,472,445,1,0,0,0,472,450,1,0,0,0,472,455,1,
  	0,0,0,472,460,1,0,0,0,472,465,1,0,0,0,472,469,1,0,0,0,473,63,1,0,0,0,
  	474,475,6,32,-1,0,475,478,5,21,0,0,476,478,5,22,0,0,477,474,1,0,0,0,477,
  	476,1,0,0,0,478,489,1,0,0,0,479,480,10,4,0,0,480,481,5,86,0,0,481,488,
  	5,21,0,0,482,483,10,3,0,0,483,484,5,50,0,0,484,485,3,56,28,0,485,486,
  	5,51,0,0,486,488,1,0,0,0,487,479,1,0,0,0,487,482,1,0,0,0,488,491,1,0,
  	0,0,489,487,1,0,0,0,489,490,1,0,0,0,490,65,1,0,0,0,491,489,1,0,0,0,492,
  	493,5,21,0,0,493,498,3,44,22,0,494,495,5,85,0,0,495,497,3,44,22,0,496,
  	494,1,0,0,0,497,500,1,0,0,0,498,496,1,0,0,0,498,499,1,0,0,0,499,67,1,
  	0,0,0,500,498,1,0,0,0,501,505,5,77,0,0,502,505,5,81,0,0,503,505,5,61,
  	0,0,504,501,1,0,0,0,504,502,1,0,0,0,504,503,1,0,0,0,505,69,1,0,0,0,506,
  	507,5,77,0,0,507,71,1,0,0,0,508,509,5,56,0,0,509,73,1,0,0,0,510,514,5,
  	57,0,0,511,514,5,58,0,0,512,514,5,59,0,0,513,510,1,0,0,0,513,511,1,0,
  	0,0,513,512,1,0,0,0,514,75,1,0,0,0,515,518,5,60,0,0,516,518,5,61,0,0,
  	517,515,1,0,0,0,517,516,1,0,0,0,518,77,1,0,0,0,519,522,5,34,0,0,520,522,
  	5,39,0,0,521,519,1,0,0,0,521,520,1,0,0,0,522,79,1,0,0,0,523,530,5,63,
  	0,0,524,530,5,64,0,0,525,530,5,65,0,0,526,530,5,66,0,0,527,530,5,67,0,
  	0,528,530,5,68,0,0,529,523,1,0,0,0,529,524,1,0,0,0,529,525,1,0,0,0,529,
  	526,1,0,0,0,529,527,1,0,0,0,529,528,1,0,0,0,530,81,1,0,0,0,531,534,5,
  	70,0,0,532,534,5,69,0,0,533,531,1,0,0,0,533,532,1,0,0,0,534,83,1,0,0,
  	0,535,536,3,46,23,0,536,85,1,0,0,0,66,89,101,107,115,119,125,129,135,
  	142,146,165,169,176,183,187,192,200,202,212,214,218,223,242,246,252,257,
  	264,267,273,280,284,290,303,315,317,325,327,335,339,360,390,392,399,407,
  	416,423,430,435,440,445,450,455,460,465,469,472,477,487,489,498,504,513,
  	517,521,529,533
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
    setState(87); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(86);
      action();
      setState(89); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6942294427559804894) != 0) || ((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & 1233) != 0));
    setState(91);
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
    setState(93);
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
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(95);
      statement();
      setState(96);
      match(StrawberryParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(98);
      scope();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(99);
      controlFlow();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(100);
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
    setState(103);
    match(StrawberryParser::Lbrace);
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6942294427559804894) != 0) || ((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & 1233) != 0)) {
      setState(104);
      action();
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
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
    setState(115);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Decl:
      case StrawberryParser::Id:
      case StrawberryParser::DefId:
      case StrawberryParser::Number:
      case StrawberryParser::PlusEq:
      case StrawberryParser::MinEq:
      case StrawberryParser::MultEq:
      case StrawberryParser::DivEq:
      case StrawberryParser::ModEq:
      case StrawberryParser::PowEq:
      case StrawberryParser::Increm:
      case StrawberryParser::Decrem:
      case StrawberryParser::Lbrack:
      case StrawberryParser::Lpar:
      case StrawberryParser::Min:
      case StrawberryParser::Eq:
      case StrawberryParser::ExPoint:
      case StrawberryParser::Fslash:
      case StrawberryParser::Dquote:
      case StrawberryParser::Squote:
      case StrawberryParser::Squig: {
        enterOuterAlt(_localctx, 1);
        setState(112);
        value();
        break;
      }

      case StrawberryParser::Lbrace: {
        enterOuterAlt(_localctx, 2);
        setState(113);
        scope();
        break;
      }

      case StrawberryParser::Return:
      case StrawberryParser::Break:
      case StrawberryParser::Next:
      case StrawberryParser::Last:
      case StrawberryParser::Once: {
        enterOuterAlt(_localctx, 3);
        setState(114);
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
    setState(129);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Return: {
        _localctx = _tracker.createInstance<StrawberryParser::ReturnStatContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(117);
        match(StrawberryParser::Return);
        setState(119);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(118);
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
        setState(121);
        match(StrawberryParser::Once);
        setState(122);
        statement();
        break;
      }

      case StrawberryParser::Next: {
        _localctx = _tracker.createInstance<StrawberryParser::NextStatContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(123);
        match(StrawberryParser::Next);
        setState(125);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(124);
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
        setState(127);
        match(StrawberryParser::Last);
        break;
      }

      case StrawberryParser::Break: {
        _localctx = _tracker.createInstance<StrawberryParser::BreakStatContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(128);
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
    setState(135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(131);
      scope();
      break;
    }

    case 2: {
      setState(132);
      statement();
      setState(133);
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
    setState(142);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(137);
      compoundStatement();
      setState(138);
      match(StrawberryParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(140);
      loop();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(141);
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
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(144);
      loopScope();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(145);
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
    setState(148);
    loopKeywords();
    setState(149);
    expression(0);
    setState(150);
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
    setState(152);
    loopKeywords();
    setState(153);
    match(StrawberryParser::Lpar);
    setState(154);
    expression(0);
    setState(155);
    match(StrawberryParser::Rpar);
    setState(156);
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
    setState(158);
    compoundAction(0);
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 448) != 0)) {
      setState(159);
      loopKeywords();
      setState(165);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(160);
        expression(0);
        break;
      }

      case 2: {
        setState(161);
        match(StrawberryParser::Lpar);
        setState(162);
        args();
        setState(163);
        match(StrawberryParser::Rpar);
        break;
      }

      default:
        break;
      }
      setState(171);
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
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::If:
      case StrawberryParser::Unless: {
        _localctx = _tracker.createInstance<IfScopeCompoundContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(173);
        ifScope();
        break;
      }

      case StrawberryParser::While:
      case StrawberryParser::Until:
      case StrawberryParser::For: {
        _localctx = _tracker.createInstance<LoopScopeCompoundContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(174);
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
      case StrawberryParser::DefId:
      case StrawberryParser::Number:
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
      case StrawberryParser::Lpar:
      case StrawberryParser::Min:
      case StrawberryParser::Eq:
      case StrawberryParser::ExPoint:
      case StrawberryParser::Fslash:
      case StrawberryParser::Dquote:
      case StrawberryParser::Squote:
      case StrawberryParser::Squig: {
        _localctx = _tracker.createInstance<StatementCompoundContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(175);
        statement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(187);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<IfCompoundContext>(_tracker.createInstance<CompoundActionContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleCompoundAction);
        setState(178);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(179);
        conditionalKeywords();
        setState(180);
        expression(0);
        setState(183);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          setState(181);
          match(StrawberryParser::Else);
          setState(182);
          compoundAction(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(189);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
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
    setState(192);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(190);
      ifScope();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(191);
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
    _localctx = _tracker.createInstance<StrawberryParser::ExprIfScopeContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(194);
    conditionalKeywords();
    setState(195);
    expression(0);
    setState(196);
    scope();
    setState(202);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(197);
      match(StrawberryParser::Else);
      setState(200);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case StrawberryParser::Decl:
        case StrawberryParser::Return:
        case StrawberryParser::Break:
        case StrawberryParser::Next:
        case StrawberryParser::Last:
        case StrawberryParser::Once:
        case StrawberryParser::Id:
        case StrawberryParser::DefId:
        case StrawberryParser::Number:
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
        case StrawberryParser::Lpar:
        case StrawberryParser::Min:
        case StrawberryParser::Eq:
        case StrawberryParser::ExPoint:
        case StrawberryParser::Fslash:
        case StrawberryParser::Dquote:
        case StrawberryParser::Squote:
        case StrawberryParser::Squig: {
          setState(198);
          body();
          break;
        }

        case StrawberryParser::If:
        case StrawberryParser::Unless: {
          setState(199);
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
    _localctx = _tracker.createInstance<StrawberryParser::ExprIfBodyContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(204);
    conditionalKeywords();
    setState(205);
    match(StrawberryParser::Lpar);
    setState(206);
    expression(0);
    setState(207);
    match(StrawberryParser::Rpar);
    setState(208);
    body();
    setState(214);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(209);
      match(StrawberryParser::Else);
      setState(212);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case StrawberryParser::Decl:
        case StrawberryParser::Return:
        case StrawberryParser::Break:
        case StrawberryParser::Next:
        case StrawberryParser::Last:
        case StrawberryParser::Once:
        case StrawberryParser::Id:
        case StrawberryParser::DefId:
        case StrawberryParser::Number:
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
        case StrawberryParser::Lpar:
        case StrawberryParser::Min:
        case StrawberryParser::Eq:
        case StrawberryParser::ExPoint:
        case StrawberryParser::Fslash:
        case StrawberryParser::Dquote:
        case StrawberryParser::Squote:
        case StrawberryParser::Squig: {
          setState(210);
          body();
          break;
        }

        case StrawberryParser::If:
        case StrawberryParser::Unless: {
          setState(211);
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
    setState(218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::If: {
        _localctx = _tracker.createInstance<StrawberryParser::IfKeywordContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(216);
        match(StrawberryParser::If);
        break;
      }

      case StrawberryParser::Unless: {
        _localctx = _tracker.createInstance<StrawberryParser::UnlessKeywordContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(217);
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
    setState(223);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::For: {
        _localctx = _tracker.createInstance<StrawberryParser::ForLoopContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(220);
        match(StrawberryParser::For);
        break;
      }

      case StrawberryParser::While: {
        _localctx = _tracker.createInstance<StrawberryParser::WhileLoopContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(221);
        match(StrawberryParser::While);
        break;
      }

      case StrawberryParser::Until: {
        _localctx = _tracker.createInstance<StrawberryParser::UntilLoopContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(222);
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
    setState(225);
    match(StrawberryParser::Fn);
    setState(226);
    match(StrawberryParser::Id);
    setState(227);
    match(StrawberryParser::Lpar);
    setState(228);
    parameters();
    setState(229);
    match(StrawberryParser::Rpar);
    setState(230);
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

tree::TerminalNode* StrawberryParser::LambdaContext::Darrow() {
  return getToken(StrawberryParser::Darrow, 0);
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
    setState(232);
    match(StrawberryParser::Lpar);
    setState(233);
    parameters();
    setState(234);
    match(StrawberryParser::Rpar);
    setState(235);
    match(StrawberryParser::Darrow);
    setState(236);
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
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::ParamsContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(246);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id) {
        setState(242);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(238);
            match(StrawberryParser::Id);
            setState(239);
            match(StrawberryParser::Com); 
          }
          setState(244);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
        }
        setState(245);
        match(StrawberryParser::Id);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::ParamsExpandContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(252);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(248);
          match(StrawberryParser::Id);
          setState(249);
          match(StrawberryParser::Com); 
        }
        setState(254);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
      }
      setState(255);
      match(StrawberryParser::Id);
      setState(256);
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
    setState(267);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6937791927444045828) != 0) || ((((_la - 77) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 77)) & 1233) != 0)) {
      setState(259);
      argument();
      setState(264);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == StrawberryParser::Com) {
        setState(260);
        match(StrawberryParser::Com);
        setState(261);
        argument();
        setState(266);
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
    setState(273);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::ArgContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(269);
      value();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::ArgExpandContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(270);
      match(StrawberryParser::Dot3);
      setState(271);
      value();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::LooseFnCallArgContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(272);
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

//----------------- MatchRegexContext ------------------------------------------------------------------

StrawberryParser::MatchRegexContext::MatchRegexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StrawberryParser::MatchRegexContext::Squig() {
  return getToken(StrawberryParser::Squig, 0);
}

std::vector<tree::TerminalNode *> StrawberryParser::MatchRegexContext::Bslash() {
  return getTokens(StrawberryParser::Bslash);
}

tree::TerminalNode* StrawberryParser::MatchRegexContext::Bslash(size_t i) {
  return getToken(StrawberryParser::Bslash, i);
}

tree::TerminalNode* StrawberryParser::MatchRegexContext::Lbrace() {
  return getToken(StrawberryParser::Lbrace, 0);
}

tree::TerminalNode* StrawberryParser::MatchRegexContext::Rbrace() {
  return getToken(StrawberryParser::Rbrace, 0);
}

std::vector<StrawberryParser::MatchContentContext *> StrawberryParser::MatchRegexContext::matchContent() {
  return getRuleContexts<StrawberryParser::MatchContentContext>();
}

StrawberryParser::MatchContentContext* StrawberryParser::MatchRegexContext::matchContent(size_t i) {
  return getRuleContext<StrawberryParser::MatchContentContext>(i);
}

std::vector<StrawberryParser::MatchOptionsContext *> StrawberryParser::MatchRegexContext::matchOptions() {
  return getRuleContexts<StrawberryParser::MatchOptionsContext>();
}

StrawberryParser::MatchOptionsContext* StrawberryParser::MatchRegexContext::matchOptions(size_t i) {
  return getRuleContext<StrawberryParser::MatchOptionsContext>(i);
}


size_t StrawberryParser::MatchRegexContext::getRuleIndex() const {
  return StrawberryParser::RuleMatchRegex;
}

void StrawberryParser::MatchRegexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchRegex(this);
}

void StrawberryParser::MatchRegexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchRegex(this);
}


std::any StrawberryParser::MatchRegexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitMatchRegex(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::MatchRegexContext* StrawberryParser::matchRegex() {
  MatchRegexContext *_localctx = _tracker.createInstance<MatchRegexContext>(_ctx, getState());
  enterRule(_localctx, 46, StrawberryParser::RuleMatchRegex);
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
    enterOuterAlt(_localctx, 1);
    setState(275);
    match(StrawberryParser::Squig);
    setState(284);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == StrawberryParser::Lbrace) {
      setState(276);
      match(StrawberryParser::Lbrace);
      setState(280);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == StrawberryParser::RegReturnAll) {
        setState(277);
        matchOptions();
        setState(282);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(283);
      match(StrawberryParser::Rbrace);
    }
    setState(286);
    match(StrawberryParser::Bslash);
    setState(288); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(287);
              matchContent(0);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(290); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(292);
    match(StrawberryParser::Bslash);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchOptionsContext ------------------------------------------------------------------

StrawberryParser::MatchOptionsContext::MatchOptionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StrawberryParser::MatchOptionsContext::RegReturnAll() {
  return getToken(StrawberryParser::RegReturnAll, 0);
}


size_t StrawberryParser::MatchOptionsContext::getRuleIndex() const {
  return StrawberryParser::RuleMatchOptions;
}

void StrawberryParser::MatchOptionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchOptions(this);
}

void StrawberryParser::MatchOptionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchOptions(this);
}


std::any StrawberryParser::MatchOptionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitMatchOptions(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::MatchOptionsContext* StrawberryParser::matchOptions() {
  MatchOptionsContext *_localctx = _tracker.createInstance<MatchOptionsContext>(_ctx, getState());
  enterRule(_localctx, 48, StrawberryParser::RuleMatchOptions);

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
    match(StrawberryParser::RegReturnAll);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchContentContext ------------------------------------------------------------------

StrawberryParser::MatchContentContext::MatchContentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::MatchContentContext::getRuleIndex() const {
  return StrawberryParser::RuleMatchContent;
}

void StrawberryParser::MatchContentContext::copyFrom(MatchContentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ZeroOrMoreContext ------------------------------------------------------------------

StrawberryParser::MatchContentContext* StrawberryParser::ZeroOrMoreContext::matchContent() {
  return getRuleContext<StrawberryParser::MatchContentContext>(0);
}

tree::TerminalNode* StrawberryParser::ZeroOrMoreContext::Star() {
  return getToken(StrawberryParser::Star, 0);
}

StrawberryParser::ZeroOrMoreContext::ZeroOrMoreContext(MatchContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ZeroOrMoreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterZeroOrMore(this);
}
void StrawberryParser::ZeroOrMoreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitZeroOrMore(this);
}

std::any StrawberryParser::ZeroOrMoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitZeroOrMore(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrMatchContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::OrMatchContext::Lbrack() {
  return getToken(StrawberryParser::Lbrack, 0);
}

std::vector<StrawberryParser::MatchContentContext *> StrawberryParser::OrMatchContext::matchContent() {
  return getRuleContexts<StrawberryParser::MatchContentContext>();
}

StrawberryParser::MatchContentContext* StrawberryParser::OrMatchContext::matchContent(size_t i) {
  return getRuleContext<StrawberryParser::MatchContentContext>(i);
}

tree::TerminalNode* StrawberryParser::OrMatchContext::Rbrack() {
  return getToken(StrawberryParser::Rbrack, 0);
}

std::vector<tree::TerminalNode *> StrawberryParser::OrMatchContext::Bar() {
  return getTokens(StrawberryParser::Bar);
}

tree::TerminalNode* StrawberryParser::OrMatchContext::Bar(size_t i) {
  return getToken(StrawberryParser::Bar, i);
}

StrawberryParser::OrMatchContext::OrMatchContext(MatchContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::OrMatchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrMatch(this);
}
void StrawberryParser::OrMatchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrMatch(this);
}

std::any StrawberryParser::OrMatchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitOrMatch(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CollectMatchContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::CollectMatchContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

StrawberryParser::MatchContentContext* StrawberryParser::CollectMatchContext::matchContent() {
  return getRuleContext<StrawberryParser::MatchContentContext>(0);
}

tree::TerminalNode* StrawberryParser::CollectMatchContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

StrawberryParser::CollectMatchContext::CollectMatchContext(MatchContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::CollectMatchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectMatch(this);
}
void StrawberryParser::CollectMatchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectMatch(this);
}

std::any StrawberryParser::CollectMatchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitCollectMatch(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ZeroOrOneContext ------------------------------------------------------------------

StrawberryParser::MatchContentContext* StrawberryParser::ZeroOrOneContext::matchContent() {
  return getRuleContext<StrawberryParser::MatchContentContext>(0);
}

tree::TerminalNode* StrawberryParser::ZeroOrOneContext::Qmark() {
  return getToken(StrawberryParser::Qmark, 0);
}

StrawberryParser::ZeroOrOneContext::ZeroOrOneContext(MatchContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ZeroOrOneContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterZeroOrOne(this);
}
void StrawberryParser::ZeroOrOneContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitZeroOrOne(this);
}

std::any StrawberryParser::ZeroOrOneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitZeroOrOne(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharsContext ------------------------------------------------------------------

std::vector<StrawberryParser::MatchCharsContext *> StrawberryParser::CharsContext::matchChars() {
  return getRuleContexts<StrawberryParser::MatchCharsContext>();
}

StrawberryParser::MatchCharsContext* StrawberryParser::CharsContext::matchChars(size_t i) {
  return getRuleContext<StrawberryParser::MatchCharsContext>(i);
}

StrawberryParser::CharsContext::CharsContext(MatchContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::CharsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChars(this);
}
void StrawberryParser::CharsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChars(this);
}

std::any StrawberryParser::CharsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitChars(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OnOrMoreContext ------------------------------------------------------------------

StrawberryParser::MatchContentContext* StrawberryParser::OnOrMoreContext::matchContent() {
  return getRuleContext<StrawberryParser::MatchContentContext>(0);
}

tree::TerminalNode* StrawberryParser::OnOrMoreContext::Plus() {
  return getToken(StrawberryParser::Plus, 0);
}

StrawberryParser::OnOrMoreContext::OnOrMoreContext(MatchContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::OnOrMoreContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOnOrMore(this);
}
void StrawberryParser::OnOrMoreContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOnOrMore(this);
}

std::any StrawberryParser::OnOrMoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitOnOrMore(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::MatchContentContext* StrawberryParser::matchContent() {
   return matchContent(0);
}

StrawberryParser::MatchContentContext* StrawberryParser::matchContent(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  StrawberryParser::MatchContentContext *_localctx = _tracker.createInstance<MatchContentContext>(_ctx, parentState);
  StrawberryParser::MatchContentContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, StrawberryParser::RuleMatchContent, precedence);

    size_t _la = 0;

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
    setState(317);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Lbrack: {
        _localctx = _tracker.createInstance<OrMatchContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(297);
        match(StrawberryParser::Lbrack);
        setState(298);
        matchContent(0);
        setState(303);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == StrawberryParser::Bar) {
          setState(299);
          match(StrawberryParser::Bar);
          setState(300);
          matchContent(0);
          setState(305);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(306);
        match(StrawberryParser::Rbrack);
        break;
      }

      case StrawberryParser::Lpar: {
        _localctx = _tracker.createInstance<CollectMatchContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(308);
        match(StrawberryParser::Lpar);
        setState(309);
        matchContent(0);
        setState(310);
        match(StrawberryParser::Rpar);
        break;
      }

      case StrawberryParser::Fn:
      case StrawberryParser::Decl:
      case StrawberryParser::If:
      case StrawberryParser::Unless:
      case StrawberryParser::Else:
      case StrawberryParser::While:
      case StrawberryParser::Until:
      case StrawberryParser::For:
      case StrawberryParser::Return:
      case StrawberryParser::Break:
      case StrawberryParser::Next:
      case StrawberryParser::Last:
      case StrawberryParser::Once:
      case StrawberryParser::MatchArrow:
      case StrawberryParser::RegWord:
      case StrawberryParser::RegDigit:
      case StrawberryParser::RegSpace:
      case StrawberryParser::RegNewline:
      case StrawberryParser::RegFSlash:
      case StrawberryParser::RegReturnAll:
      case StrawberryParser::Id:
      case StrawberryParser::DefId:
      case StrawberryParser::Number:
      case StrawberryParser::String:
      case StrawberryParser::StringLit:
      case StrawberryParser::Digit:
      case StrawberryParser::Word:
      case StrawberryParser::Letter:
      case StrawberryParser::UcLetter:
      case StrawberryParser::LcLetter:
      case StrawberryParser::True:
      case StrawberryParser::False:
      case StrawberryParser::Null:
      case StrawberryParser::DefOr:
      case StrawberryParser::Sarrow:
      case StrawberryParser::Darrow:
      case StrawberryParser::LRarrow:
      case StrawberryParser::RLarrow:
      case StrawberryParser::Dot2:
      case StrawberryParser::Dot3:
      case StrawberryParser::As:
      case StrawberryParser::PlusEq:
      case StrawberryParser::MinEq:
      case StrawberryParser::MultEq:
      case StrawberryParser::DivEq:
      case StrawberryParser::ModEq:
      case StrawberryParser::PowEq:
      case StrawberryParser::Increm:
      case StrawberryParser::Decrem:
      case StrawberryParser::Lbrace:
      case StrawberryParser::Rbrace:
      case StrawberryParser::Pow:
      case StrawberryParser::Star:
      case StrawberryParser::Bslash:
      case StrawberryParser::Mod:
      case StrawberryParser::Plus:
      case StrawberryParser::Min:
      case StrawberryParser::Eq:
      case StrawberryParser::BoolEq:
      case StrawberryParser::BoolNeq:
      case StrawberryParser::Gt:
      case StrawberryParser::GtEq:
      case StrawberryParser::Lt:
      case StrawberryParser::LtEq:
      case StrawberryParser::And:
      case StrawberryParser::Or:
      case StrawberryParser::Uscore:
      case StrawberryParser::AndSign:
      case StrawberryParser::Doll:
      case StrawberryParser::DollLit:
      case StrawberryParser::Hash:
      case StrawberryParser::At:
      case StrawberryParser::ExPoint:
      case StrawberryParser::Qmark:
      case StrawberryParser::Colon:
      case StrawberryParser::Semi:
      case StrawberryParser::Fslash:
      case StrawberryParser::Dquote:
      case StrawberryParser::Squote:
      case StrawberryParser::Com:
      case StrawberryParser::Dot:
      case StrawberryParser::Squig:
      case StrawberryParser::Btick:
      case StrawberryParser::Ignore:
      case StrawberryParser::WS:
      case StrawberryParser::RETURN: {
        _localctx = _tracker.createInstance<CharsContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(313); 
        _errHandler->sync(this);
        alt = 1;
        do {
          switch (alt) {
            case 1: {
                  setState(312);
                  matchChars();
                  break;
                }

          default:
            throw NoViableAltException(this);
          }
          setState(315); 
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
        } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(327);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(325);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OnOrMoreContext>(_tracker.createInstance<MatchContentContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMatchContent);
          setState(319);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(320);
          match(StrawberryParser::Plus);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ZeroOrMoreContext>(_tracker.createInstance<MatchContentContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMatchContent);
          setState(321);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(322);
          match(StrawberryParser::Star);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ZeroOrOneContext>(_tracker.createInstance<MatchContentContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMatchContent);
          setState(323);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(324);
          match(StrawberryParser::Qmark);
          break;
        }

        default:
          break;
        } 
      }
      setState(329);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MatchCharsContext ------------------------------------------------------------------

StrawberryParser::MatchCharsContext::MatchCharsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::MatchCharsContext::getRuleIndex() const {
  return StrawberryParser::RuleMatchChars;
}

void StrawberryParser::MatchCharsContext::copyFrom(MatchCharsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NewlineContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::NewlineContext::RegNewline() {
  return getToken(StrawberryParser::RegNewline, 0);
}

StrawberryParser::NewlineContext::NewlineContext(MatchCharsContext *ctx) { copyFrom(ctx); }

void StrawberryParser::NewlineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNewline(this);
}
void StrawberryParser::NewlineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNewline(this);
}

std::any StrawberryParser::NewlineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitNewline(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OtherContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::OtherContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

tree::TerminalNode* StrawberryParser::OtherContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

tree::TerminalNode* StrawberryParser::OtherContext::Lbrack() {
  return getToken(StrawberryParser::Lbrack, 0);
}

tree::TerminalNode* StrawberryParser::OtherContext::Rbrack() {
  return getToken(StrawberryParser::Rbrack, 0);
}

tree::TerminalNode* StrawberryParser::OtherContext::Bar() {
  return getToken(StrawberryParser::Bar, 0);
}

StrawberryParser::OtherContext::OtherContext(MatchCharsContext *ctx) { copyFrom(ctx); }

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
//----------------- BslashContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BslashContext::DefOr() {
  return getToken(StrawberryParser::DefOr, 0);
}

StrawberryParser::BslashContext::BslashContext(MatchCharsContext *ctx) { copyFrom(ctx); }

void StrawberryParser::BslashContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBslash(this);
}
void StrawberryParser::BslashContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBslash(this);
}

std::any StrawberryParser::BslashContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBslash(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WildCardContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::WildCardContext::Dot() {
  return getToken(StrawberryParser::Dot, 0);
}

StrawberryParser::WildCardContext::WildCardContext(MatchCharsContext *ctx) { copyFrom(ctx); }

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

StrawberryParser::WordContext::WordContext(MatchCharsContext *ctx) { copyFrom(ctx); }

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
StrawberryParser::MatchCharsContext* StrawberryParser::matchChars() {
  MatchCharsContext *_localctx = _tracker.createInstance<MatchCharsContext>(_ctx, getState());
  enterRule(_localctx, 52, StrawberryParser::RuleMatchChars);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(335);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::WordContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(330);
      match(StrawberryParser::RegWord);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::NewlineContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(331);
      match(StrawberryParser::RegNewline);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::BslashContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(332);
      match(StrawberryParser::DefOr);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StrawberryParser::WildCardContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(333);
      match(StrawberryParser::Dot);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StrawberryParser::OtherContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(334);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (((((_la - 50) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 50)) & 4294967347) != 0))) {
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
  enterRule(_localctx, 54, StrawberryParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(339);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(337);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(338);
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
//----------------- DefaultSuffixExprContext ------------------------------------------------------------------

StrawberryParser::HighPrioritySuffixContext* StrawberryParser::DefaultSuffixExprContext::highPrioritySuffix() {
  return getRuleContext<StrawberryParser::HighPrioritySuffixContext>(0);
}

StrawberryParser::LowPrioritySuffixContext* StrawberryParser::DefaultSuffixExprContext::lowPrioritySuffix() {
  return getRuleContext<StrawberryParser::LowPrioritySuffixContext>(0);
}

StrawberryParser::DefaultSuffixExprContext::DefaultSuffixExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void StrawberryParser::DefaultSuffixExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultSuffixExpr(this);
}
void StrawberryParser::DefaultSuffixExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultSuffixExpr(this);
}

std::any StrawberryParser::DefaultSuffixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDefaultSuffixExpr(this);
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

StrawberryParser::HighPrioritySuffixContext* StrawberryParser::SuffixExprContext::highPrioritySuffix() {
  return getRuleContext<StrawberryParser::HighPrioritySuffixContext>(0);
}

StrawberryParser::LowPrioritySuffixContext* StrawberryParser::SuffixExprContext::lowPrioritySuffix() {
  return getRuleContext<StrawberryParser::LowPrioritySuffixContext>(0);
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

StrawberryParser::FnAccessContext::FnAccessContext(ExpressionContext *ctx) { copyFrom(ctx); }

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
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, StrawberryParser::RuleExpression, precedence);

    

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
    setState(360);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(342);
      match(StrawberryParser::Lpar);
      setState(343);
      expression(0);
      setState(344);
      match(StrawberryParser::Rpar);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<AssignExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(346);
      assign();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PrefixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(347);
      prefix();
      setState(348);
      expression(15);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<DefaultSuffixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(350);
      highPrioritySuffix();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<DefaultSuffixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(351);
      lowPrioritySuffix();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<AccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(352);
      identifyer(0);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<FnAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(353);
      identifyer(0);
      setState(354);
      match(StrawberryParser::Lpar);
      setState(355);
      args();
      setState(356);
      match(StrawberryParser::Rpar);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<LitExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(358);
      literal();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<LooseFnCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(359);
      looseFnCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(392);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(390);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(362);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(363);
          op1();
          setState(364);
          expression(13);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(366);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(367);
          op2();
          setState(368);
          expression(12);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(370);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(371);
          op3();
          setState(372);
          expression(11);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(374);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(375);
          op4();
          setState(376);
          expression(10);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(378);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(379);
          op5();
          setState(380);
          expression(9);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(382);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(383);
          op6();
          setState(384);
          expression(8);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<SuffixExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(386);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(387);
          highPrioritySuffix();
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<SuffixExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(388);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(389);
          lowPrioritySuffix();
          break;
        }

        default:
          break;
        } 
      }
      setState(394);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
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
  enterRule(_localctx, 58, StrawberryParser::RuleLiteral);
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
    setState(416);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Dquote: {
        _localctx = _tracker.createInstance<StrawberryParser::DStringLitContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(395);
        match(StrawberryParser::Dquote);
        setState(399);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & -2) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 64)) & 267911167) != 0)) {
          setState(396);
          stringContent();
          setState(401);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(402);
        match(StrawberryParser::Dquote);
        break;
      }

      case StrawberryParser::Squote: {
        _localctx = _tracker.createInstance<StrawberryParser::SStringLitContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(403);
        match(StrawberryParser::Squote);
        setState(407);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
        while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1 + 1) {
            setState(404);
            matchWildcard(); 
          }
          setState(409);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
        }
        setState(410);
        match(StrawberryParser::Squote);
        break;
      }

      case StrawberryParser::Lbrack: {
        _localctx = _tracker.createInstance<StrawberryParser::ArrayLitContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(411);
        match(StrawberryParser::Lbrack);
        setState(412);
        args();
        setState(413);
        match(StrawberryParser::Rbrack);
        break;
      }

      case StrawberryParser::Number: {
        _localctx = _tracker.createInstance<StrawberryParser::NumLitContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(415);
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
//----------------- WhitespaceContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::WhitespaceContext::WS() {
  return getToken(StrawberryParser::WS, 0);
}

StrawberryParser::WhitespaceContext::WhitespaceContext(StringContentContext *ctx) { copyFrom(ctx); }

void StrawberryParser::WhitespaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhitespace(this);
}
void StrawberryParser::WhitespaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhitespace(this);
}

std::any StrawberryParser::WhitespaceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitWhitespace(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::StringContentContext* StrawberryParser::stringContent() {
  StringContentContext *_localctx = _tracker.createInstance<StringContentContext>(_ctx, getState());
  enterRule(_localctx, 60, StrawberryParser::RuleStringContent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(423);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::IdentityStringContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(418);
      match(StrawberryParser::Doll);
      setState(419);
      identifyer(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::DollarSignStringContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(420);
      match(StrawberryParser::DollLit);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::WhitespaceContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(421);
      match(StrawberryParser::WS);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StrawberryParser::OtherStringContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(422);
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
  enterRule(_localctx, 62, StrawberryParser::RuleAssign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(472);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::DeclareAssignContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(425);
      match(StrawberryParser::Decl);
      setState(426);
      match(StrawberryParser::Id);
      setState(427);
      match(StrawberryParser::Eq);
      setState(428);
      value();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::EqAssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(430);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::DefId) {
        setState(429);
        identifyer(0);
      }
      setState(432);
      match(StrawberryParser::Eq);
      setState(433);
      value();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::PowAssignContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(435);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::DefId) {
        setState(434);
        identifyer(0);
      }
      setState(437);
      match(StrawberryParser::PowEq);
      setState(438);
      expression(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StrawberryParser::MultAssignContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(440);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::DefId) {
        setState(439);
        identifyer(0);
      }
      setState(442);
      match(StrawberryParser::MultEq);
      setState(443);
      expression(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StrawberryParser::DivAssignContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(445);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::DefId) {
        setState(444);
        identifyer(0);
      }
      setState(447);
      match(StrawberryParser::DivEq);
      setState(448);
      expression(0);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<StrawberryParser::ModAssignContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(450);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::DefId) {
        setState(449);
        identifyer(0);
      }
      setState(452);
      match(StrawberryParser::ModEq);
      setState(453);
      expression(0);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<StrawberryParser::AddAssignContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(455);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::DefId) {
        setState(454);
        identifyer(0);
      }
      setState(457);
      match(StrawberryParser::PlusEq);
      setState(458);
      expression(0);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<StrawberryParser::MinAssignContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(460);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::DefId) {
        setState(459);
        identifyer(0);
      }
      setState(462);
      match(StrawberryParser::MinEq);
      setState(463);
      expression(0);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<StrawberryParser::IncremContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(465);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::DefId) {
        setState(464);
        identifyer(0);
      }
      setState(467);
      match(StrawberryParser::Increm);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<StrawberryParser::DecremContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(469);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::DefId) {
        setState(468);
        identifyer(0);
      }
      setState(471);
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

tree::TerminalNode* StrawberryParser::DefaultAccessContext::DefId() {
  return getToken(StrawberryParser::DefId, 0);
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

StrawberryParser::IdentifyerContext* StrawberryParser::identifyer() {
   return identifyer(0);
}

StrawberryParser::IdentifyerContext* StrawberryParser::identifyer(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  StrawberryParser::IdentifyerContext *_localctx = _tracker.createInstance<IdentifyerContext>(_ctx, parentState);
  StrawberryParser::IdentifyerContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, StrawberryParser::RuleIdentifyer, precedence);

    

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
    setState(477);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Id: {
        _localctx = _tracker.createInstance<IdAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(475);
        match(StrawberryParser::Id);
        break;
      }

      case StrawberryParser::DefId: {
        _localctx = _tracker.createInstance<DefaultAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(476);
        match(StrawberryParser::DefId);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(489);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(487);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<DotAccessContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(479);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(480);
          match(StrawberryParser::Dot);
          setState(481);
          match(StrawberryParser::Id);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArrAccesssContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(482);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(483);
          match(StrawberryParser::Lbrack);
          setState(484);
          expression(0);
          setState(485);
          match(StrawberryParser::Rbrack);
          break;
        }

        default:
          break;
        } 
      }
      setState(491);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
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
  enterRule(_localctx, 66, StrawberryParser::RuleLooseFnCall);

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
    setState(492);
    match(StrawberryParser::Id);
    setState(493);
    argument();
    setState(498);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(494);
        match(StrawberryParser::Com);
        setState(495);
        argument(); 
      }
      setState(500);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
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
  enterRule(_localctx, 68, StrawberryParser::RulePrefix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(504);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::ExPoint: {
        _localctx = _tracker.createInstance<StrawberryParser::NegatePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(501);
        match(StrawberryParser::ExPoint);
        break;
      }

      case StrawberryParser::Fslash: {
        _localctx = _tracker.createInstance<StrawberryParser::RefPrefixContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(502);
        match(StrawberryParser::Fslash);
        break;
      }

      case StrawberryParser::Min: {
        _localctx = _tracker.createInstance<StrawberryParser::NegativePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(503);
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

//----------------- HighPrioritySuffixContext ------------------------------------------------------------------

StrawberryParser::HighPrioritySuffixContext::HighPrioritySuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::HighPrioritySuffixContext::getRuleIndex() const {
  return StrawberryParser::RuleHighPrioritySuffix;
}

void StrawberryParser::HighPrioritySuffixContext::copyFrom(HighPrioritySuffixContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExcitedSuffContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ExcitedSuffContext::ExPoint() {
  return getToken(StrawberryParser::ExPoint, 0);
}

StrawberryParser::ExcitedSuffContext::ExcitedSuffContext(HighPrioritySuffixContext *ctx) { copyFrom(ctx); }

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
StrawberryParser::HighPrioritySuffixContext* StrawberryParser::highPrioritySuffix() {
  HighPrioritySuffixContext *_localctx = _tracker.createInstance<HighPrioritySuffixContext>(_ctx, getState());
  enterRule(_localctx, 70, StrawberryParser::RuleHighPrioritySuffix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<StrawberryParser::ExcitedSuffContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(506);
    match(StrawberryParser::ExPoint);
   
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

//----------------- PowOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::PowOpContext::Pow() {
  return getToken(StrawberryParser::Pow, 0);
}

StrawberryParser::PowOpContext::PowOpContext(Op1Context *ctx) { copyFrom(ctx); }

void StrawberryParser::PowOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowOp(this);
}
void StrawberryParser::PowOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowOp(this);
}

std::any StrawberryParser::PowOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitPowOp(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op1Context* StrawberryParser::op1() {
  Op1Context *_localctx = _tracker.createInstance<Op1Context>(_ctx, getState());
  enterRule(_localctx, 72, StrawberryParser::RuleOp1);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<StrawberryParser::PowOpContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(508);
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

//----------------- DivOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::DivOpContext::Bslash() {
  return getToken(StrawberryParser::Bslash, 0);
}

StrawberryParser::DivOpContext::DivOpContext(Op2Context *ctx) { copyFrom(ctx); }

void StrawberryParser::DivOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivOp(this);
}
void StrawberryParser::DivOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivOp(this);
}

std::any StrawberryParser::DivOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDivOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ModOpContext::Mod() {
  return getToken(StrawberryParser::Mod, 0);
}

StrawberryParser::ModOpContext::ModOpContext(Op2Context *ctx) { copyFrom(ctx); }

void StrawberryParser::ModOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModOp(this);
}
void StrawberryParser::ModOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModOp(this);
}

std::any StrawberryParser::ModOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitModOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::MultOpContext::Star() {
  return getToken(StrawberryParser::Star, 0);
}

StrawberryParser::MultOpContext::MultOpContext(Op2Context *ctx) { copyFrom(ctx); }

void StrawberryParser::MultOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultOp(this);
}
void StrawberryParser::MultOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultOp(this);
}

std::any StrawberryParser::MultOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitMultOp(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op2Context* StrawberryParser::op2() {
  Op2Context *_localctx = _tracker.createInstance<Op2Context>(_ctx, getState());
  enterRule(_localctx, 74, StrawberryParser::RuleOp2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(513);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Star: {
        _localctx = _tracker.createInstance<StrawberryParser::MultOpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(510);
        match(StrawberryParser::Star);
        break;
      }

      case StrawberryParser::Bslash: {
        _localctx = _tracker.createInstance<StrawberryParser::DivOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(511);
        match(StrawberryParser::Bslash);
        break;
      }

      case StrawberryParser::Mod: {
        _localctx = _tracker.createInstance<StrawberryParser::ModOpContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(512);
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

//----------------- MinOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::MinOpContext::Min() {
  return getToken(StrawberryParser::Min, 0);
}

StrawberryParser::MinOpContext::MinOpContext(Op3Context *ctx) { copyFrom(ctx); }

void StrawberryParser::MinOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinOp(this);
}
void StrawberryParser::MinOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinOp(this);
}

std::any StrawberryParser::MinOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitMinOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::PlusOpContext::Plus() {
  return getToken(StrawberryParser::Plus, 0);
}

StrawberryParser::PlusOpContext::PlusOpContext(Op3Context *ctx) { copyFrom(ctx); }

void StrawberryParser::PlusOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusOp(this);
}
void StrawberryParser::PlusOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusOp(this);
}

std::any StrawberryParser::PlusOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitPlusOp(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op3Context* StrawberryParser::op3() {
  Op3Context *_localctx = _tracker.createInstance<Op3Context>(_ctx, getState());
  enterRule(_localctx, 76, StrawberryParser::RuleOp3);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(517);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Plus: {
        _localctx = _tracker.createInstance<StrawberryParser::PlusOpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(515);
        match(StrawberryParser::Plus);
        break;
      }

      case StrawberryParser::Min: {
        _localctx = _tracker.createInstance<StrawberryParser::MinOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(516);
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

//----------------- DefinedOrOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::DefinedOrOpContext::DefOr() {
  return getToken(StrawberryParser::DefOr, 0);
}

StrawberryParser::DefinedOrOpContext::DefinedOrOpContext(Op4Context *ctx) { copyFrom(ctx); }

void StrawberryParser::DefinedOrOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinedOrOp(this);
}
void StrawberryParser::DefinedOrOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinedOrOp(this);
}

std::any StrawberryParser::DefinedOrOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitDefinedOrOp(this);
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
  enterRule(_localctx, 78, StrawberryParser::RuleOp4);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(521);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::DefOr: {
        _localctx = _tracker.createInstance<StrawberryParser::DefinedOrOpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(519);
        match(StrawberryParser::DefOr);
        break;
      }

      case StrawberryParser::Dot2: {
        _localctx = _tracker.createInstance<StrawberryParser::RangeOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(520);
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

//----------------- BoolEqOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolEqOpContext::BoolEq() {
  return getToken(StrawberryParser::BoolEq, 0);
}

StrawberryParser::BoolEqOpContext::BoolEqOpContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolEqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolEqOp(this);
}
void StrawberryParser::BoolEqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolEqOp(this);
}

std::any StrawberryParser::BoolEqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolEqOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolLtOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolLtOpContext::Lt() {
  return getToken(StrawberryParser::Lt, 0);
}

StrawberryParser::BoolLtOpContext::BoolLtOpContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolLtOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLtOp(this);
}
void StrawberryParser::BoolLtOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLtOp(this);
}

std::any StrawberryParser::BoolLtOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolLtOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolGtOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolGtOpContext::Gt() {
  return getToken(StrawberryParser::Gt, 0);
}

StrawberryParser::BoolGtOpContext::BoolGtOpContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolGtOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolGtOp(this);
}
void StrawberryParser::BoolGtOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolGtOp(this);
}

std::any StrawberryParser::BoolGtOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolGtOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolGtEqOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolGtEqOpContext::GtEq() {
  return getToken(StrawberryParser::GtEq, 0);
}

StrawberryParser::BoolGtEqOpContext::BoolGtEqOpContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolGtEqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolGtEqOp(this);
}
void StrawberryParser::BoolGtEqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolGtEqOp(this);
}

std::any StrawberryParser::BoolGtEqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolGtEqOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolNeqOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolNeqOpContext::BoolNeq() {
  return getToken(StrawberryParser::BoolNeq, 0);
}

StrawberryParser::BoolNeqOpContext::BoolNeqOpContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolNeqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolNeqOp(this);
}
void StrawberryParser::BoolNeqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolNeqOp(this);
}

std::any StrawberryParser::BoolNeqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolNeqOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolLtEqOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::BoolLtEqOpContext::LtEq() {
  return getToken(StrawberryParser::LtEq, 0);
}

StrawberryParser::BoolLtEqOpContext::BoolLtEqOpContext(Op5Context *ctx) { copyFrom(ctx); }

void StrawberryParser::BoolLtEqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLtEqOp(this);
}
void StrawberryParser::BoolLtEqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLtEqOp(this);
}

std::any StrawberryParser::BoolLtEqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitBoolLtEqOp(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op5Context* StrawberryParser::op5() {
  Op5Context *_localctx = _tracker.createInstance<Op5Context>(_ctx, getState());
  enterRule(_localctx, 80, StrawberryParser::RuleOp5);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(529);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::BoolEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolEqOpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(523);
        match(StrawberryParser::BoolEq);
        break;
      }

      case StrawberryParser::BoolNeq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolNeqOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(524);
        match(StrawberryParser::BoolNeq);
        break;
      }

      case StrawberryParser::Gt: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolGtOpContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(525);
        match(StrawberryParser::Gt);
        break;
      }

      case StrawberryParser::GtEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolGtEqOpContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(526);
        match(StrawberryParser::GtEq);
        break;
      }

      case StrawberryParser::Lt: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolLtOpContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(527);
        match(StrawberryParser::Lt);
        break;
      }

      case StrawberryParser::LtEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolLtEqOpContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(528);
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

//----------------- OrOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::OrOpContext::Or() {
  return getToken(StrawberryParser::Or, 0);
}

StrawberryParser::OrOpContext::OrOpContext(Op6Context *ctx) { copyFrom(ctx); }

void StrawberryParser::OrOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrOp(this);
}
void StrawberryParser::OrOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrOp(this);
}

std::any StrawberryParser::OrOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitOrOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndOpContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::AndOpContext::And() {
  return getToken(StrawberryParser::And, 0);
}

StrawberryParser::AndOpContext::AndOpContext(Op6Context *ctx) { copyFrom(ctx); }

void StrawberryParser::AndOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndOp(this);
}
void StrawberryParser::AndOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndOp(this);
}

std::any StrawberryParser::AndOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitAndOp(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::Op6Context* StrawberryParser::op6() {
  Op6Context *_localctx = _tracker.createInstance<Op6Context>(_ctx, getState());
  enterRule(_localctx, 82, StrawberryParser::RuleOp6);

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
      case StrawberryParser::Or: {
        _localctx = _tracker.createInstance<StrawberryParser::OrOpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(531);
        match(StrawberryParser::Or);
        break;
      }

      case StrawberryParser::And: {
        _localctx = _tracker.createInstance<StrawberryParser::AndOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(532);
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

//----------------- LowPrioritySuffixContext ------------------------------------------------------------------

StrawberryParser::LowPrioritySuffixContext::LowPrioritySuffixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t StrawberryParser::LowPrioritySuffixContext::getRuleIndex() const {
  return StrawberryParser::RuleLowPrioritySuffix;
}

void StrawberryParser::LowPrioritySuffixContext::copyFrom(LowPrioritySuffixContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MatchSuffContext ------------------------------------------------------------------

StrawberryParser::MatchRegexContext* StrawberryParser::MatchSuffContext::matchRegex() {
  return getRuleContext<StrawberryParser::MatchRegexContext>(0);
}

StrawberryParser::MatchSuffContext::MatchSuffContext(LowPrioritySuffixContext *ctx) { copyFrom(ctx); }

void StrawberryParser::MatchSuffContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchSuff(this);
}
void StrawberryParser::MatchSuffContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchSuff(this);
}

std::any StrawberryParser::MatchSuffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitMatchSuff(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::LowPrioritySuffixContext* StrawberryParser::lowPrioritySuffix() {
  LowPrioritySuffixContext *_localctx = _tracker.createInstance<LowPrioritySuffixContext>(_ctx, getState());
  enterRule(_localctx, 84, StrawberryParser::RuleLowPrioritySuffix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<StrawberryParser::MatchSuffContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(535);
    matchRegex();
   
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
    case 25: return matchContentSempred(antlrcpp::downCast<MatchContentContext *>(context), predicateIndex);
    case 28: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);
    case 32: return identifyerSempred(antlrcpp::downCast<IdentifyerContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool StrawberryParser::compoundActionSempred(CompoundActionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool StrawberryParser::matchContentSempred(MatchContentContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool StrawberryParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 12);
    case 5: return precpred(_ctx, 11);
    case 6: return precpred(_ctx, 10);
    case 7: return precpred(_ctx, 9);
    case 8: return precpred(_ctx, 8);
    case 9: return precpred(_ctx, 7);
    case 10: return precpred(_ctx, 13);
    case 11: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

bool StrawberryParser::identifyerSempred(IdentifyerContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 4);
    case 13: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void StrawberryParser::initialize() {
  ::antlr4::internal::call_once(strawberryparserParserOnceFlag, strawberryparserParserInitialize);
}
