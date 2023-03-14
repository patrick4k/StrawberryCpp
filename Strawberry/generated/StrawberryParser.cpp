
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
      "body", "fnDeclaration", "lambda", "parameters", "args", "argument", 
      "controlFlow", "loop", "compoundStatement", "compoundAction", "ifStatement", 
      "conditionalKeywords", "loopKeywords", "value", "expression", "literal", 
      "assign", "identifyer", "looseFnCall", "prefix", "op1", "op2", "op3", 
      "op4", "op5", "op6"
    },
    std::vector<std::string>{
      "", "'fn'", "'let'", "'if'", "'unless'", "'else'", "'while'", "'until'", 
      "'for'", "'return'", "'break'", "'next'", "'last'", "'once'", "", 
      "", "", "", "", "", "", "", "'true'", "'false'", "'null'", "'\\\\'", 
      "'->'", "'=>'", "'>>'", "'<<'", "'..'", "'...'", "'as'", "'_'", "'&'", 
      "'$'", "'#'", "'@'", "'!'", "'\\u003F'", "':'", "';'", "'\\'", "'|'", 
      "'\"'", "'''", "','", "'.'", "'~'", "'`'", "'^'", "'*'", "'/'", "'%'", 
      "'+'", "'-'", "'='", "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", 
      "'&&'", "'||'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'++'", 
      "'--'", "'['", "']'", "'{'", "'}'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "Fn", "Decl", "If", "Unless", "Else", "While", "Until", "For", 
      "Return", "Break", "Next", "Last", "Once", "Id", "Number", "String", 
      "LitString", "Digit", "Word", "UcLetter", "LcLetter", "True", "False", 
      "Null", "DefOr", "Sarrow", "Darrpw", "LRarrow", "RLarrow", "Dot2", 
      "Dot3", "As", "Uscore", "AndSign", "Doll", "Hash", "At", "ExPoint", 
      "Qmark", "Colon", "Semi", "Fslash", "Bar", "Dquote", "Squote", "Com", 
      "Dot", "Squig", "Btick", "Pow", "Star", "Bslash", "Mod", "Plus", "Min", 
      "Eq", "BoolEq", "BoolNeq", "Gt", "GtEq", "Lt", "LtEq", "And", "Or", 
      "PlusEq", "MinEq", "MultEq", "DivEq", "ModEq", "PowEq", "Increm", 
      "Decrem", "Lbrack", "Rbrack", "Lbrace", "Rbrace", "Lpar", "Rpar", 
      "Ignore"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,79,434,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,1,0,1,0,1,0,4,0,68,8,0,11,0,12,0,69,
  	1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,3,2,80,8,2,1,3,1,3,5,3,84,8,3,10,3,12,
  	3,87,9,3,1,3,1,3,1,4,1,4,1,4,3,4,94,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,3,5,104,8,5,1,6,1,6,1,6,1,6,3,6,110,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,5,9,127,8,9,10,9,12,9,130,9,9,1,9,3,9,
  	133,8,9,1,9,1,9,5,9,137,8,9,10,9,12,9,140,9,9,1,9,1,9,3,9,144,8,9,1,10,
  	1,10,1,10,5,10,149,8,10,10,10,12,10,152,9,10,3,10,154,8,10,1,11,1,11,
  	1,11,1,11,3,11,160,8,11,1,12,1,12,1,12,1,12,1,12,3,12,167,8,12,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,179,8,13,1,14,1,14,1,
  	14,1,14,1,14,1,14,1,14,3,14,188,8,14,5,14,190,8,14,10,14,12,14,193,9,
  	14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,203,8,15,1,15,1,15,1,
  	15,1,15,1,15,3,15,210,8,15,5,15,212,8,15,10,15,12,15,215,9,15,1,16,1,
  	16,1,16,1,16,1,16,1,16,3,16,223,8,16,3,16,225,8,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,3,16,235,8,16,3,16,237,8,16,3,16,239,8,16,1,17,1,
  	17,3,17,243,8,17,1,18,1,18,1,18,3,18,248,8,18,1,19,1,19,3,19,252,8,19,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,266,
  	8,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,5,20,292,8,20,
  	10,20,12,20,295,9,20,1,21,1,21,5,21,299,8,21,10,21,12,21,302,9,21,1,21,
  	1,21,1,21,5,21,307,8,21,10,21,12,21,310,9,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,3,21,318,8,21,1,22,1,22,1,22,1,22,1,22,3,22,325,8,22,1,22,1,22,1,
  	22,3,22,330,8,22,1,22,1,22,1,22,3,22,335,8,22,1,22,1,22,1,22,3,22,340,
  	8,22,1,22,1,22,1,22,3,22,345,8,22,1,22,1,22,1,22,3,22,350,8,22,1,22,1,
  	22,1,22,3,22,355,8,22,1,22,1,22,1,22,3,22,360,8,22,1,22,1,22,3,22,364,
  	8,22,1,22,3,22,367,8,22,1,23,1,23,1,23,3,23,372,8,23,1,23,1,23,1,23,1,
  	23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,5,23,387,8,23,10,23,12,
  	23,390,9,23,1,24,1,24,1,24,1,24,5,24,396,8,24,10,24,12,24,399,9,24,1,
  	25,1,25,1,25,1,25,3,25,405,8,25,1,26,1,26,1,27,1,27,1,27,3,27,412,8,27,
  	1,28,1,28,3,28,416,8,28,1,29,1,29,3,29,420,8,29,1,30,1,30,1,30,1,30,1,
  	30,1,30,3,30,428,8,30,1,31,1,31,3,31,432,8,31,1,31,2,300,308,3,30,40,
  	46,32,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,60,62,0,0,491,0,67,1,0,0,0,2,73,1,0,0,0,4,79,1,0,
  	0,0,6,81,1,0,0,0,8,93,1,0,0,0,10,103,1,0,0,0,12,109,1,0,0,0,14,111,1,
  	0,0,0,16,118,1,0,0,0,18,143,1,0,0,0,20,153,1,0,0,0,22,159,1,0,0,0,24,
  	166,1,0,0,0,26,178,1,0,0,0,28,180,1,0,0,0,30,194,1,0,0,0,32,238,1,0,0,
  	0,34,242,1,0,0,0,36,247,1,0,0,0,38,251,1,0,0,0,40,265,1,0,0,0,42,317,
  	1,0,0,0,44,366,1,0,0,0,46,371,1,0,0,0,48,391,1,0,0,0,50,404,1,0,0,0,52,
  	406,1,0,0,0,54,411,1,0,0,0,56,415,1,0,0,0,58,419,1,0,0,0,60,427,1,0,0,
  	0,62,431,1,0,0,0,64,68,3,4,2,0,65,68,3,24,12,0,66,68,3,2,1,0,67,64,1,
  	0,0,0,67,65,1,0,0,0,67,66,1,0,0,0,68,69,1,0,0,0,69,67,1,0,0,0,69,70,1,
  	0,0,0,70,71,1,0,0,0,71,72,5,0,0,1,72,1,1,0,0,0,73,74,3,14,7,0,74,3,1,
  	0,0,0,75,76,3,8,4,0,76,77,5,41,0,0,77,80,1,0,0,0,78,80,3,6,3,0,79,75,
  	1,0,0,0,79,78,1,0,0,0,80,5,1,0,0,0,81,85,5,75,0,0,82,84,3,4,2,0,83,82,
  	1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,86,88,1,0,0,0,87,85,
  	1,0,0,0,88,89,5,76,0,0,89,7,1,0,0,0,90,94,3,38,19,0,91,94,3,6,3,0,92,
  	94,3,10,5,0,93,90,1,0,0,0,93,91,1,0,0,0,93,92,1,0,0,0,94,9,1,0,0,0,95,
  	96,5,9,0,0,96,104,3,38,19,0,97,98,5,13,0,0,98,104,3,8,4,0,99,100,5,11,
  	0,0,100,104,3,40,20,0,101,104,5,12,0,0,102,104,5,10,0,0,103,95,1,0,0,
  	0,103,97,1,0,0,0,103,99,1,0,0,0,103,101,1,0,0,0,103,102,1,0,0,0,104,11,
  	1,0,0,0,105,110,3,6,3,0,106,107,3,8,4,0,107,108,5,41,0,0,108,110,1,0,
  	0,0,109,105,1,0,0,0,109,106,1,0,0,0,110,13,1,0,0,0,111,112,5,1,0,0,112,
  	113,5,14,0,0,113,114,5,77,0,0,114,115,3,18,9,0,115,116,5,78,0,0,116,117,
  	3,6,3,0,117,15,1,0,0,0,118,119,5,77,0,0,119,120,3,18,9,0,120,121,5,78,
  	0,0,121,122,5,27,0,0,122,123,3,8,4,0,123,17,1,0,0,0,124,125,5,14,0,0,
  	125,127,5,46,0,0,126,124,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,0,128,
  	129,1,0,0,0,129,131,1,0,0,0,130,128,1,0,0,0,131,133,5,14,0,0,132,128,
  	1,0,0,0,132,133,1,0,0,0,133,144,1,0,0,0,134,135,5,14,0,0,135,137,5,46,
  	0,0,136,134,1,0,0,0,137,140,1,0,0,0,138,136,1,0,0,0,138,139,1,0,0,0,139,
  	141,1,0,0,0,140,138,1,0,0,0,141,142,5,14,0,0,142,144,5,31,0,0,143,132,
  	1,0,0,0,143,138,1,0,0,0,144,19,1,0,0,0,145,150,3,22,11,0,146,147,5,46,
  	0,0,147,149,3,22,11,0,148,146,1,0,0,0,149,152,1,0,0,0,150,148,1,0,0,0,
  	150,151,1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,0,153,145,1,0,0,0,153,154,
  	1,0,0,0,154,21,1,0,0,0,155,160,3,38,19,0,156,157,5,31,0,0,157,160,3,38,
  	19,0,158,160,3,48,24,0,159,155,1,0,0,0,159,156,1,0,0,0,159,158,1,0,0,
  	0,160,23,1,0,0,0,161,162,3,28,14,0,162,163,5,41,0,0,163,167,1,0,0,0,164,
  	167,3,26,13,0,165,167,3,32,16,0,166,161,1,0,0,0,166,164,1,0,0,0,166,165,
  	1,0,0,0,167,25,1,0,0,0,168,169,3,36,18,0,169,170,3,40,20,0,170,171,3,
  	6,3,0,171,179,1,0,0,0,172,173,3,36,18,0,173,174,5,77,0,0,174,175,3,40,
  	20,0,175,176,5,78,0,0,176,177,3,12,6,0,177,179,1,0,0,0,178,168,1,0,0,
  	0,178,172,1,0,0,0,179,27,1,0,0,0,180,191,3,30,15,0,181,187,3,36,18,0,
  	182,188,3,40,20,0,183,184,5,77,0,0,184,185,3,20,10,0,185,186,5,78,0,0,
  	186,188,1,0,0,0,187,182,1,0,0,0,187,183,1,0,0,0,188,190,1,0,0,0,189,181,
  	1,0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,29,1,0,0,
  	0,193,191,1,0,0,0,194,195,6,15,-1,0,195,196,3,8,4,0,196,213,1,0,0,0,197,
  	198,10,3,0,0,198,199,5,3,0,0,199,202,3,40,20,0,200,201,5,5,0,0,201,203,
  	3,30,15,0,202,200,1,0,0,0,202,203,1,0,0,0,203,212,1,0,0,0,204,205,10,
  	2,0,0,205,206,5,4,0,0,206,209,3,40,20,0,207,208,5,5,0,0,208,210,3,30,
  	15,0,209,207,1,0,0,0,209,210,1,0,0,0,210,212,1,0,0,0,211,197,1,0,0,0,
  	211,204,1,0,0,0,212,215,1,0,0,0,213,211,1,0,0,0,213,214,1,0,0,0,214,31,
  	1,0,0,0,215,213,1,0,0,0,216,217,3,34,17,0,217,218,3,40,20,0,218,224,3,
  	6,3,0,219,222,5,5,0,0,220,223,3,12,6,0,221,223,3,32,16,0,222,220,1,0,
  	0,0,222,221,1,0,0,0,223,225,1,0,0,0,224,219,1,0,0,0,224,225,1,0,0,0,225,
  	239,1,0,0,0,226,227,3,34,17,0,227,228,5,77,0,0,228,229,3,40,20,0,229,
  	230,5,78,0,0,230,236,3,12,6,0,231,234,5,5,0,0,232,235,3,12,6,0,233,235,
  	3,32,16,0,234,232,1,0,0,0,234,233,1,0,0,0,235,237,1,0,0,0,236,231,1,0,
  	0,0,236,237,1,0,0,0,237,239,1,0,0,0,238,216,1,0,0,0,238,226,1,0,0,0,239,
  	33,1,0,0,0,240,243,5,3,0,0,241,243,5,4,0,0,242,240,1,0,0,0,242,241,1,
  	0,0,0,243,35,1,0,0,0,244,248,5,8,0,0,245,248,5,6,0,0,246,248,5,7,0,0,
  	247,244,1,0,0,0,247,245,1,0,0,0,247,246,1,0,0,0,248,37,1,0,0,0,249,252,
  	3,40,20,0,250,252,3,16,8,0,251,249,1,0,0,0,251,250,1,0,0,0,252,39,1,0,
  	0,0,253,254,6,20,-1,0,254,255,5,77,0,0,255,256,3,40,20,0,256,257,5,78,
  	0,0,257,266,1,0,0,0,258,266,3,44,22,0,259,260,3,50,25,0,260,261,3,40,
  	20,6,261,266,1,0,0,0,262,266,3,46,23,0,263,266,3,42,21,0,264,266,3,48,
  	24,0,265,253,1,0,0,0,265,258,1,0,0,0,265,259,1,0,0,0,265,262,1,0,0,0,
  	265,263,1,0,0,0,265,264,1,0,0,0,266,293,1,0,0,0,267,268,10,10,0,0,268,
  	269,3,52,26,0,269,270,3,40,20,11,270,292,1,0,0,0,271,272,10,9,0,0,272,
  	273,3,54,27,0,273,274,3,40,20,10,274,292,1,0,0,0,275,276,10,8,0,0,276,
  	277,3,56,28,0,277,278,3,40,20,9,278,292,1,0,0,0,279,280,10,7,0,0,280,
  	281,3,58,29,0,281,282,3,40,20,8,282,292,1,0,0,0,283,284,10,5,0,0,284,
  	285,3,60,30,0,285,286,3,40,20,6,286,292,1,0,0,0,287,288,10,4,0,0,288,
  	289,3,62,31,0,289,290,3,40,20,5,290,292,1,0,0,0,291,267,1,0,0,0,291,271,
  	1,0,0,0,291,275,1,0,0,0,291,279,1,0,0,0,291,283,1,0,0,0,291,287,1,0,0,
  	0,292,295,1,0,0,0,293,291,1,0,0,0,293,294,1,0,0,0,294,41,1,0,0,0,295,
  	293,1,0,0,0,296,300,5,44,0,0,297,299,9,0,0,0,298,297,1,0,0,0,299,302,
  	1,0,0,0,300,301,1,0,0,0,300,298,1,0,0,0,301,303,1,0,0,0,302,300,1,0,0,
  	0,303,318,5,44,0,0,304,308,5,45,0,0,305,307,9,0,0,0,306,305,1,0,0,0,307,
  	310,1,0,0,0,308,309,1,0,0,0,308,306,1,0,0,0,309,311,1,0,0,0,310,308,1,
  	0,0,0,311,318,5,45,0,0,312,313,5,73,0,0,313,314,3,20,10,0,314,315,5,74,
  	0,0,315,318,1,0,0,0,316,318,5,15,0,0,317,296,1,0,0,0,317,304,1,0,0,0,
  	317,312,1,0,0,0,317,316,1,0,0,0,318,43,1,0,0,0,319,320,5,2,0,0,320,321,
  	5,14,0,0,321,322,5,56,0,0,322,367,3,38,19,0,323,325,3,46,23,0,324,323,
  	1,0,0,0,324,325,1,0,0,0,325,326,1,0,0,0,326,327,5,56,0,0,327,367,3,38,
  	19,0,328,330,3,46,23,0,329,328,1,0,0,0,329,330,1,0,0,0,330,331,1,0,0,
  	0,331,332,5,70,0,0,332,367,3,40,20,0,333,335,3,46,23,0,334,333,1,0,0,
  	0,334,335,1,0,0,0,335,336,1,0,0,0,336,337,5,67,0,0,337,367,3,40,20,0,
  	338,340,3,46,23,0,339,338,1,0,0,0,339,340,1,0,0,0,340,341,1,0,0,0,341,
  	342,5,68,0,0,342,367,3,40,20,0,343,345,3,46,23,0,344,343,1,0,0,0,344,
  	345,1,0,0,0,345,346,1,0,0,0,346,347,5,69,0,0,347,367,3,40,20,0,348,350,
  	3,46,23,0,349,348,1,0,0,0,349,350,1,0,0,0,350,351,1,0,0,0,351,352,5,65,
  	0,0,352,367,3,40,20,0,353,355,3,46,23,0,354,353,1,0,0,0,354,355,1,0,0,
  	0,355,356,1,0,0,0,356,357,5,66,0,0,357,367,3,40,20,0,358,360,3,46,23,
  	0,359,358,1,0,0,0,359,360,1,0,0,0,360,361,1,0,0,0,361,367,5,71,0,0,362,
  	364,3,46,23,0,363,362,1,0,0,0,363,364,1,0,0,0,364,365,1,0,0,0,365,367,
  	5,72,0,0,366,319,1,0,0,0,366,324,1,0,0,0,366,329,1,0,0,0,366,334,1,0,
  	0,0,366,339,1,0,0,0,366,344,1,0,0,0,366,349,1,0,0,0,366,354,1,0,0,0,366,
  	359,1,0,0,0,366,363,1,0,0,0,367,45,1,0,0,0,368,369,6,23,-1,0,369,372,
  	5,14,0,0,370,372,5,33,0,0,371,368,1,0,0,0,371,370,1,0,0,0,372,388,1,0,
  	0,0,373,374,10,5,0,0,374,375,5,47,0,0,375,387,5,14,0,0,376,377,10,4,0,
  	0,377,378,5,73,0,0,378,379,3,40,20,0,379,380,5,74,0,0,380,387,1,0,0,0,
  	381,382,10,3,0,0,382,383,5,77,0,0,383,384,3,20,10,0,384,385,5,78,0,0,
  	385,387,1,0,0,0,386,373,1,0,0,0,386,376,1,0,0,0,386,381,1,0,0,0,387,390,
  	1,0,0,0,388,386,1,0,0,0,388,389,1,0,0,0,389,47,1,0,0,0,390,388,1,0,0,
  	0,391,392,3,46,23,0,392,397,3,22,11,0,393,394,5,46,0,0,394,396,3,22,11,
  	0,395,393,1,0,0,0,396,399,1,0,0,0,397,395,1,0,0,0,397,398,1,0,0,0,398,
  	49,1,0,0,0,399,397,1,0,0,0,400,405,5,38,0,0,401,405,5,42,0,0,402,405,
  	5,55,0,0,403,405,5,48,0,0,404,400,1,0,0,0,404,401,1,0,0,0,404,402,1,0,
  	0,0,404,403,1,0,0,0,405,51,1,0,0,0,406,407,5,50,0,0,407,53,1,0,0,0,408,
  	412,5,51,0,0,409,412,5,52,0,0,410,412,5,53,0,0,411,408,1,0,0,0,411,409,
  	1,0,0,0,411,410,1,0,0,0,412,55,1,0,0,0,413,416,5,54,0,0,414,416,5,55,
  	0,0,415,413,1,0,0,0,415,414,1,0,0,0,416,57,1,0,0,0,417,420,5,25,0,0,418,
  	420,5,30,0,0,419,417,1,0,0,0,419,418,1,0,0,0,420,59,1,0,0,0,421,428,5,
  	57,0,0,422,428,5,58,0,0,423,428,5,59,0,0,424,428,5,60,0,0,425,428,5,61,
  	0,0,426,428,5,62,0,0,427,421,1,0,0,0,427,422,1,0,0,0,427,423,1,0,0,0,
  	427,424,1,0,0,0,427,425,1,0,0,0,427,426,1,0,0,0,428,61,1,0,0,0,429,432,
  	5,64,0,0,430,432,5,63,0,0,431,429,1,0,0,0,431,430,1,0,0,0,432,63,1,0,
  	0,0,56,67,69,79,85,93,103,109,128,132,138,143,150,153,159,166,178,187,
  	191,202,209,211,213,222,224,234,236,238,242,247,251,265,291,293,300,308,
  	317,324,329,334,339,344,349,354,359,363,366,371,386,388,397,404,411,415,
  	419,427,431
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

std::vector<StrawberryParser::ControlFlowContext *> StrawberryParser::ScriptContext::controlFlow() {
  return getRuleContexts<StrawberryParser::ControlFlowContext>();
}

StrawberryParser::ControlFlowContext* StrawberryParser::ScriptContext::controlFlow(size_t i) {
  return getRuleContext<StrawberryParser::ControlFlowContext>(i);
}

std::vector<StrawberryParser::DeclarationContext *> StrawberryParser::ScriptContext::declaration() {
  return getRuleContexts<StrawberryParser::DeclarationContext>();
}

StrawberryParser::DeclarationContext* StrawberryParser::ScriptContext::declaration(size_t i) {
  return getRuleContext<StrawberryParser::DeclarationContext>(i);
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
    setState(67); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(67);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(64);
        action();
        break;
      }

      case 2: {
        setState(65);
        controlFlow();
        break;
      }

      case 3: {
        setState(66);
        declaration();
        break;
      }

      default:
        break;
      }
      setState(69); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 108425324106153950) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 5631) != 0));
    setState(71);
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
    setState(73);
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
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(75);
      statement();
      setState(76);
      match(StrawberryParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(78);
      scope();
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
    setState(81);
    match(StrawberryParser::Lbrace);
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 108425324106153476) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 5631) != 0)) {
      setState(82);
      action();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
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
    setState(93);
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
      case StrawberryParser::Squig:
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
        setState(90);
        value();
        break;
      }

      case StrawberryParser::Lbrace: {
        enterOuterAlt(_localctx, 2);
        setState(91);
        scope();
        break;
      }

      case StrawberryParser::Return:
      case StrawberryParser::Break:
      case StrawberryParser::Next:
      case StrawberryParser::Last:
      case StrawberryParser::Once: {
        enterOuterAlt(_localctx, 3);
        setState(92);
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
    setState(103);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Return: {
        _localctx = _tracker.createInstance<StrawberryParser::ReturnStatContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(95);
        match(StrawberryParser::Return);
        setState(96);
        value();
        break;
      }

      case StrawberryParser::Once: {
        _localctx = _tracker.createInstance<StrawberryParser::OnceStatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(97);
        match(StrawberryParser::Once);
        setState(98);
        statement();
        break;
      }

      case StrawberryParser::Next: {
        _localctx = _tracker.createInstance<StrawberryParser::NextStatContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(99);
        match(StrawberryParser::Next);
        setState(100);
        expression(0);
        break;
      }

      case StrawberryParser::Last: {
        _localctx = _tracker.createInstance<StrawberryParser::LastStatContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(101);
        match(StrawberryParser::Last);
        break;
      }

      case StrawberryParser::Break: {
        _localctx = _tracker.createInstance<StrawberryParser::BreakStatContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(102);
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
    setState(109);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(105);
      scope();
      break;
    }

    case 2: {
      setState(106);
      statement();
      setState(107);
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
  enterRule(_localctx, 14, StrawberryParser::RuleFnDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(StrawberryParser::Fn);
    setState(112);
    match(StrawberryParser::Id);
    setState(113);
    match(StrawberryParser::Lpar);
    setState(114);
    parameters();
    setState(115);
    match(StrawberryParser::Rpar);
    setState(116);
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
  enterRule(_localctx, 16, StrawberryParser::RuleLambda);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(StrawberryParser::Lpar);
    setState(119);
    parameters();
    setState(120);
    match(StrawberryParser::Rpar);
    setState(121);
    match(StrawberryParser::Darrpw);
    setState(122);
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
  enterRule(_localctx, 18, StrawberryParser::RuleParameters);
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
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::ParamsContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(132);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id) {
        setState(128);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(124);
            match(StrawberryParser::Id);
            setState(125);
            match(StrawberryParser::Com); 
          }
          setState(130);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
        }
        setState(131);
        match(StrawberryParser::Id);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::ParamsExpandContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(138);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(134);
          match(StrawberryParser::Id);
          setState(135);
          match(StrawberryParser::Com); 
        }
        setState(140);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
      }
      setState(141);
      match(StrawberryParser::Id);
      setState(142);
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
  enterRule(_localctx, 20, StrawberryParser::RuleArgs);
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
    setState(153);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 108425326253621252) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 4607) != 0)) {
      setState(145);
      argument();
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == StrawberryParser::Com) {
        setState(146);
        match(StrawberryParser::Com);
        setState(147);
        argument();
        setState(152);
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
  enterRule(_localctx, 22, StrawberryParser::RuleArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::ArgContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(155);
      value();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::ArgExpandContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(156);
      match(StrawberryParser::Dot3);
      setState(157);
      value();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::LooseFnCallArgContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(158);
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
  enterRule(_localctx, 24, StrawberryParser::RuleControlFlow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(166);
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
      case StrawberryParser::Squig:
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
        enterOuterAlt(_localctx, 1);
        setState(161);
        compoundStatement();
        setState(162);
        match(StrawberryParser::Semi);
        break;
      }

      case StrawberryParser::While:
      case StrawberryParser::Until:
      case StrawberryParser::For: {
        enterOuterAlt(_localctx, 2);
        setState(164);
        loop();
        break;
      }

      case StrawberryParser::If:
      case StrawberryParser::Unless: {
        enterOuterAlt(_localctx, 3);
        setState(165);
        ifStatement();
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

//----------------- LoopContext ------------------------------------------------------------------

StrawberryParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

StrawberryParser::LoopKeywordsContext* StrawberryParser::LoopContext::loopKeywords() {
  return getRuleContext<StrawberryParser::LoopKeywordsContext>(0);
}

StrawberryParser::ExpressionContext* StrawberryParser::LoopContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::ScopeContext* StrawberryParser::LoopContext::scope() {
  return getRuleContext<StrawberryParser::ScopeContext>(0);
}

tree::TerminalNode* StrawberryParser::LoopContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

tree::TerminalNode* StrawberryParser::LoopContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

StrawberryParser::BodyContext* StrawberryParser::LoopContext::body() {
  return getRuleContext<StrawberryParser::BodyContext>(0);
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
  enterRule(_localctx, 26, StrawberryParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(168);
      loopKeywords();
      setState(169);
      expression(0);
      setState(170);
      scope();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(172);
      loopKeywords();
      setState(173);
      match(StrawberryParser::Lpar);
      setState(174);
      expression(0);
      setState(175);
      match(StrawberryParser::Rpar);
      setState(176);
      body();
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
  enterRule(_localctx, 28, StrawberryParser::RuleCompoundStatement);
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
    setState(180);
    compoundAction(0);
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 448) != 0)) {
      setState(181);
      loopKeywords();
      setState(187);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(182);
        expression(0);
        break;
      }

      case 2: {
        setState(183);
        match(StrawberryParser::Lpar);
        setState(184);
        args();
        setState(185);
        match(StrawberryParser::Rpar);
        break;
      }

      default:
        break;
      }
      setState(193);
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

StrawberryParser::StatementContext* StrawberryParser::CompoundActionContext::statement() {
  return getRuleContext<StrawberryParser::StatementContext>(0);
}

std::vector<StrawberryParser::CompoundActionContext *> StrawberryParser::CompoundActionContext::compoundAction() {
  return getRuleContexts<StrawberryParser::CompoundActionContext>();
}

StrawberryParser::CompoundActionContext* StrawberryParser::CompoundActionContext::compoundAction(size_t i) {
  return getRuleContext<StrawberryParser::CompoundActionContext>(i);
}

tree::TerminalNode* StrawberryParser::CompoundActionContext::If() {
  return getToken(StrawberryParser::If, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::CompoundActionContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

tree::TerminalNode* StrawberryParser::CompoundActionContext::Else() {
  return getToken(StrawberryParser::Else, 0);
}

tree::TerminalNode* StrawberryParser::CompoundActionContext::Unless() {
  return getToken(StrawberryParser::Unless, 0);
}


size_t StrawberryParser::CompoundActionContext::getRuleIndex() const {
  return StrawberryParser::RuleCompoundAction;
}

void StrawberryParser::CompoundActionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundAction(this);
}

void StrawberryParser::CompoundActionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundAction(this);
}


std::any StrawberryParser::CompoundActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitCompoundAction(this);
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
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, StrawberryParser::RuleCompoundAction, precedence);

    

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
    setState(195);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(213);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(211);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<CompoundActionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCompoundAction);
          setState(197);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(198);
          match(StrawberryParser::If);
          setState(199);
          expression(0);
          setState(202);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
          case 1: {
            setState(200);
            match(StrawberryParser::Else);
            setState(201);
            compoundAction(0);
            break;
          }

          default:
            break;
          }
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<CompoundActionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCompoundAction);
          setState(204);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(205);
          match(StrawberryParser::Unless);
          setState(206);
          expression(0);
          setState(209);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
          case 1: {
            setState(207);
            match(StrawberryParser::Else);
            setState(208);
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
      setState(215);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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


size_t StrawberryParser::IfStatementContext::getRuleIndex() const {
  return StrawberryParser::RuleIfStatement;
}

void StrawberryParser::IfStatementContext::copyFrom(IfStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfBodyContext ------------------------------------------------------------------

StrawberryParser::ConditionalKeywordsContext* StrawberryParser::IfBodyContext::conditionalKeywords() {
  return getRuleContext<StrawberryParser::ConditionalKeywordsContext>(0);
}

tree::TerminalNode* StrawberryParser::IfBodyContext::Lpar() {
  return getToken(StrawberryParser::Lpar, 0);
}

StrawberryParser::ExpressionContext* StrawberryParser::IfBodyContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

tree::TerminalNode* StrawberryParser::IfBodyContext::Rpar() {
  return getToken(StrawberryParser::Rpar, 0);
}

std::vector<StrawberryParser::BodyContext *> StrawberryParser::IfBodyContext::body() {
  return getRuleContexts<StrawberryParser::BodyContext>();
}

StrawberryParser::BodyContext* StrawberryParser::IfBodyContext::body(size_t i) {
  return getRuleContext<StrawberryParser::BodyContext>(i);
}

tree::TerminalNode* StrawberryParser::IfBodyContext::Else() {
  return getToken(StrawberryParser::Else, 0);
}

StrawberryParser::IfStatementContext* StrawberryParser::IfBodyContext::ifStatement() {
  return getRuleContext<StrawberryParser::IfStatementContext>(0);
}

StrawberryParser::IfBodyContext::IfBodyContext(IfStatementContext *ctx) { copyFrom(ctx); }

void StrawberryParser::IfBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfBody(this);
}
void StrawberryParser::IfBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfBody(this);
}

std::any StrawberryParser::IfBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitIfBody(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfScopeContext ------------------------------------------------------------------

StrawberryParser::ConditionalKeywordsContext* StrawberryParser::IfScopeContext::conditionalKeywords() {
  return getRuleContext<StrawberryParser::ConditionalKeywordsContext>(0);
}

StrawberryParser::ExpressionContext* StrawberryParser::IfScopeContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
}

StrawberryParser::ScopeContext* StrawberryParser::IfScopeContext::scope() {
  return getRuleContext<StrawberryParser::ScopeContext>(0);
}

tree::TerminalNode* StrawberryParser::IfScopeContext::Else() {
  return getToken(StrawberryParser::Else, 0);
}

StrawberryParser::BodyContext* StrawberryParser::IfScopeContext::body() {
  return getRuleContext<StrawberryParser::BodyContext>(0);
}

StrawberryParser::IfStatementContext* StrawberryParser::IfScopeContext::ifStatement() {
  return getRuleContext<StrawberryParser::IfStatementContext>(0);
}

StrawberryParser::IfScopeContext::IfScopeContext(IfStatementContext *ctx) { copyFrom(ctx); }

void StrawberryParser::IfScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfScope(this);
}
void StrawberryParser::IfScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfScope(this);
}

std::any StrawberryParser::IfScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitIfScope(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::IfStatementContext* StrawberryParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, StrawberryParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(238);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::IfScopeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(216);
      conditionalKeywords();
      setState(217);
      expression(0);
      setState(218);
      scope();
      setState(224);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Else) {
        setState(219);
        match(StrawberryParser::Else);
        setState(222);
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
          case StrawberryParser::Squig:
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
            setState(220);
            body();
            break;
          }

          case StrawberryParser::If:
          case StrawberryParser::Unless: {
            setState(221);
            ifStatement();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::IfBodyContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(226);
      conditionalKeywords();
      setState(227);
      match(StrawberryParser::Lpar);
      setState(228);
      expression(0);
      setState(229);
      match(StrawberryParser::Rpar);
      setState(230);
      body();
      setState(236);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Else) {
        setState(231);
        match(StrawberryParser::Else);
        setState(234);
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
          case StrawberryParser::Squig:
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
            setState(232);
            body();
            break;
          }

          case StrawberryParser::If:
          case StrawberryParser::Unless: {
            setState(233);
            ifStatement();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
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
  enterRule(_localctx, 34, StrawberryParser::RuleConditionalKeywords);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(242);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::If: {
        _localctx = _tracker.createInstance<StrawberryParser::IfKeywordContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(240);
        match(StrawberryParser::If);
        break;
      }

      case StrawberryParser::Unless: {
        _localctx = _tracker.createInstance<StrawberryParser::UnlessKeywordContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(241);
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

//----------------- WhileCompoundContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::WhileCompoundContext::While() {
  return getToken(StrawberryParser::While, 0);
}

StrawberryParser::WhileCompoundContext::WhileCompoundContext(LoopKeywordsContext *ctx) { copyFrom(ctx); }

void StrawberryParser::WhileCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileCompound(this);
}
void StrawberryParser::WhileCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileCompound(this);
}

std::any StrawberryParser::WhileCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitWhileCompound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForCompoundContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ForCompoundContext::For() {
  return getToken(StrawberryParser::For, 0);
}

StrawberryParser::ForCompoundContext::ForCompoundContext(LoopKeywordsContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ForCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForCompound(this);
}
void StrawberryParser::ForCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForCompound(this);
}

std::any StrawberryParser::ForCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitForCompound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UntilCompoundContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::UntilCompoundContext::Until() {
  return getToken(StrawberryParser::Until, 0);
}

StrawberryParser::UntilCompoundContext::UntilCompoundContext(LoopKeywordsContext *ctx) { copyFrom(ctx); }

void StrawberryParser::UntilCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUntilCompound(this);
}
void StrawberryParser::UntilCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUntilCompound(this);
}

std::any StrawberryParser::UntilCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitUntilCompound(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::LoopKeywordsContext* StrawberryParser::loopKeywords() {
  LoopKeywordsContext *_localctx = _tracker.createInstance<LoopKeywordsContext>(_ctx, getState());
  enterRule(_localctx, 36, StrawberryParser::RuleLoopKeywords);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(247);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::For: {
        _localctx = _tracker.createInstance<StrawberryParser::ForCompoundContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(244);
        match(StrawberryParser::For);
        break;
      }

      case StrawberryParser::While: {
        _localctx = _tracker.createInstance<StrawberryParser::WhileCompoundContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(245);
        match(StrawberryParser::While);
        break;
      }

      case StrawberryParser::Until: {
        _localctx = _tracker.createInstance<StrawberryParser::UntilCompoundContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(246);
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
  enterRule(_localctx, 38, StrawberryParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(251);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(249);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(250);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, StrawberryParser::RuleExpression, precedence);

    

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
    setState(265);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(254);
      match(StrawberryParser::Lpar);
      setState(255);
      expression(0);
      setState(256);
      match(StrawberryParser::Rpar);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<AssignExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(258);
      assign();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PrefixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(259);
      prefix();
      setState(260);
      expression(6);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<AccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(262);
      identifyer(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LitExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(263);
      literal();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LooseFnCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(264);
      looseFnCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(293);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(291);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(267);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(268);
          op1();
          setState(269);
          expression(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(271);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(272);
          op2();
          setState(273);
          expression(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(275);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(276);
          op3();
          setState(277);
          expression(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(279);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(280);
          op4();
          setState(281);
          expression(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(283);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(284);
          op5();
          setState(285);
          expression(6);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(287);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(288);
          op6();
          setState(289);
          expression(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(295);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
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
  enterRule(_localctx, 42, StrawberryParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(317);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Dquote: {
        _localctx = _tracker.createInstance<StrawberryParser::DStringLitContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(296);
        match(StrawberryParser::Dquote);
        setState(300);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
        while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1 + 1) {
            setState(297);
            matchWildcard(); 
          }
          setState(302);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
        }
        setState(303);
        match(StrawberryParser::Dquote);
        break;
      }

      case StrawberryParser::Squote: {
        _localctx = _tracker.createInstance<StrawberryParser::SStringLitContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(304);
        match(StrawberryParser::Squote);
        setState(308);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
        while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1 + 1) {
            setState(305);
            matchWildcard(); 
          }
          setState(310);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
        }
        setState(311);
        match(StrawberryParser::Squote);
        break;
      }

      case StrawberryParser::Lbrack: {
        _localctx = _tracker.createInstance<StrawberryParser::ArrayLitContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(312);
        match(StrawberryParser::Lbrack);
        setState(313);
        args();
        setState(314);
        match(StrawberryParser::Rbrack);
        break;
      }

      case StrawberryParser::Number: {
        _localctx = _tracker.createInstance<StrawberryParser::NumLitContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(316);
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
  enterRule(_localctx, 44, StrawberryParser::RuleAssign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(366);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::DeclareAssignContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(319);
      match(StrawberryParser::Decl);
      setState(320);
      match(StrawberryParser::Id);
      setState(321);
      match(StrawberryParser::Eq);
      setState(322);
      value();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::EqAssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(324);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(323);
        identifyer(0);
      }
      setState(326);
      match(StrawberryParser::Eq);
      setState(327);
      value();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::PowAssignContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(329);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(328);
        identifyer(0);
      }
      setState(331);
      match(StrawberryParser::PowEq);
      setState(332);
      expression(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StrawberryParser::MultAssignContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(334);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(333);
        identifyer(0);
      }
      setState(336);
      match(StrawberryParser::MultEq);
      setState(337);
      expression(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StrawberryParser::DivAssignContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(339);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(338);
        identifyer(0);
      }
      setState(341);
      match(StrawberryParser::DivEq);
      setState(342);
      expression(0);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<StrawberryParser::ModAssignContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(344);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(343);
        identifyer(0);
      }
      setState(346);
      match(StrawberryParser::ModEq);
      setState(347);
      expression(0);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<StrawberryParser::AddAssignContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(349);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(348);
        identifyer(0);
      }
      setState(351);
      match(StrawberryParser::PlusEq);
      setState(352);
      expression(0);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<StrawberryParser::MinAssignContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(354);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(353);
        identifyer(0);
      }
      setState(356);
      match(StrawberryParser::MinEq);
      setState(357);
      expression(0);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<StrawberryParser::IncremContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(359);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(358);
        identifyer(0);
      }
      setState(361);
      match(StrawberryParser::Increm);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<StrawberryParser::DecremContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(363);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(362);
        identifyer(0);
      }
      setState(365);
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
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, StrawberryParser::RuleIdentifyer, precedence);

    

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
    setState(371);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Id: {
        _localctx = _tracker.createInstance<IdAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(369);
        match(StrawberryParser::Id);
        break;
      }

      case StrawberryParser::Uscore: {
        _localctx = _tracker.createInstance<DefaultAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(370);
        match(StrawberryParser::Uscore);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(388);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(386);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<DotAccessContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(373);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(374);
          match(StrawberryParser::Dot);
          setState(375);
          match(StrawberryParser::Id);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArrAccesssContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(376);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(377);
          match(StrawberryParser::Lbrack);
          setState(378);
          expression(0);
          setState(379);
          match(StrawberryParser::Rbrack);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<FnAccessContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(381);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(382);
          match(StrawberryParser::Lpar);
          setState(383);
          args();
          setState(384);
          match(StrawberryParser::Rpar);
          break;
        }

        default:
          break;
        } 
      }
      setState(390);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
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

StrawberryParser::IdentifyerContext* StrawberryParser::LooseFnCallContext::identifyer() {
  return getRuleContext<StrawberryParser::IdentifyerContext>(0);
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
  enterRule(_localctx, 48, StrawberryParser::RuleLooseFnCall);

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
    setState(391);
    identifyer(0);
    setState(392);
    argument();
    setState(397);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(393);
        match(StrawberryParser::Com);
        setState(394);
        argument(); 
      }
      setState(399);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
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
//----------------- ReversePrefixContext ------------------------------------------------------------------

tree::TerminalNode* StrawberryParser::ReversePrefixContext::Squig() {
  return getToken(StrawberryParser::Squig, 0);
}

StrawberryParser::ReversePrefixContext::ReversePrefixContext(PrefixContext *ctx) { copyFrom(ctx); }

void StrawberryParser::ReversePrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReversePrefix(this);
}
void StrawberryParser::ReversePrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReversePrefix(this);
}

std::any StrawberryParser::ReversePrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitReversePrefix(this);
  else
    return visitor->visitChildren(this);
}
StrawberryParser::PrefixContext* StrawberryParser::prefix() {
  PrefixContext *_localctx = _tracker.createInstance<PrefixContext>(_ctx, getState());
  enterRule(_localctx, 50, StrawberryParser::RulePrefix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(404);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::ExPoint: {
        _localctx = _tracker.createInstance<StrawberryParser::NegatePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(400);
        match(StrawberryParser::ExPoint);
        break;
      }

      case StrawberryParser::Fslash: {
        _localctx = _tracker.createInstance<StrawberryParser::RefPrefixContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(401);
        match(StrawberryParser::Fslash);
        break;
      }

      case StrawberryParser::Min: {
        _localctx = _tracker.createInstance<StrawberryParser::NegativePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(402);
        match(StrawberryParser::Min);
        break;
      }

      case StrawberryParser::Squig: {
        _localctx = _tracker.createInstance<StrawberryParser::ReversePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(403);
        match(StrawberryParser::Squig);
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
  enterRule(_localctx, 52, StrawberryParser::RuleOp1);

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
    setState(406);
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
  enterRule(_localctx, 54, StrawberryParser::RuleOp2);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(411);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Star: {
        _localctx = _tracker.createInstance<StrawberryParser::MultContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(408);
        match(StrawberryParser::Star);
        break;
      }

      case StrawberryParser::Bslash: {
        _localctx = _tracker.createInstance<StrawberryParser::DivContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(409);
        match(StrawberryParser::Bslash);
        break;
      }

      case StrawberryParser::Mod: {
        _localctx = _tracker.createInstance<StrawberryParser::ModContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(410);
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
  enterRule(_localctx, 56, StrawberryParser::RuleOp3);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(415);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Plus: {
        _localctx = _tracker.createInstance<StrawberryParser::PlusContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(413);
        match(StrawberryParser::Plus);
        break;
      }

      case StrawberryParser::Min: {
        _localctx = _tracker.createInstance<StrawberryParser::MinContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(414);
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
  enterRule(_localctx, 58, StrawberryParser::RuleOp4);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(419);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::DefOr: {
        _localctx = _tracker.createInstance<StrawberryParser::DefinedOrContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(417);
        match(StrawberryParser::DefOr);
        break;
      }

      case StrawberryParser::Dot2: {
        _localctx = _tracker.createInstance<StrawberryParser::RangeOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(418);
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
  enterRule(_localctx, 60, StrawberryParser::RuleOp5);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(427);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::BoolEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolEqContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(421);
        match(StrawberryParser::BoolEq);
        break;
      }

      case StrawberryParser::BoolNeq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolNeqContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(422);
        match(StrawberryParser::BoolNeq);
        break;
      }

      case StrawberryParser::Gt: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolGtContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(423);
        match(StrawberryParser::Gt);
        break;
      }

      case StrawberryParser::GtEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolGtEqContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(424);
        match(StrawberryParser::GtEq);
        break;
      }

      case StrawberryParser::Lt: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolLtContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(425);
        match(StrawberryParser::Lt);
        break;
      }

      case StrawberryParser::LtEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolLtEqContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(426);
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
  enterRule(_localctx, 62, StrawberryParser::RuleOp6);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(431);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Or: {
        _localctx = _tracker.createInstance<StrawberryParser::OrContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(429);
        match(StrawberryParser::Or);
        break;
      }

      case StrawberryParser::And: {
        _localctx = _tracker.createInstance<StrawberryParser::AndContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(430);
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

bool StrawberryParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return compoundActionSempred(antlrcpp::downCast<CompoundActionContext *>(context), predicateIndex);
    case 20: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);
    case 23: return identifyerSempred(antlrcpp::downCast<IdentifyerContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool StrawberryParser::compoundActionSempred(CompoundActionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool StrawberryParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 9);
    case 4: return precpred(_ctx, 8);
    case 5: return precpred(_ctx, 7);
    case 6: return precpred(_ctx, 5);
    case 7: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool StrawberryParser::identifyerSempred(IdentifyerContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 5);
    case 9: return precpred(_ctx, 4);
    case 10: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void StrawberryParser::initialize() {
  ::antlr4::internal::call_once(strawberryparserParserOnceFlag, strawberryparserParserInitialize);
}
