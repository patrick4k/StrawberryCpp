
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
      "assign", "identifyer", "looseFnCall", "op1", "op2", "op3", "op4", 
      "prefix", "op5", "op6", "suffix"
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
  	4,1,79,444,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,1,0,4,0,70,8,0,11,
  	0,12,0,71,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,3,2,82,8,2,1,3,1,3,5,3,86,8,
  	3,10,3,12,3,89,9,3,1,3,1,3,1,4,1,4,1,4,3,4,96,8,4,1,5,1,5,1,5,1,5,1,5,
  	1,5,3,5,104,8,5,1,5,1,5,3,5,108,8,5,1,6,1,6,1,6,1,6,3,6,114,8,6,1,7,1,
  	7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,5,9,131,8,9,10,
  	9,12,9,134,9,9,1,9,3,9,137,8,9,1,9,1,9,5,9,141,8,9,10,9,12,9,144,9,9,
  	1,9,1,9,3,9,148,8,9,1,10,1,10,1,10,5,10,153,8,10,10,10,12,10,156,9,10,
  	3,10,158,8,10,1,11,1,11,1,11,1,11,3,11,164,8,11,1,12,1,12,1,12,1,12,1,
  	12,3,12,171,8,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,
  	13,183,8,13,1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,192,8,14,5,14,194,
  	8,14,10,14,12,14,197,9,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,
  	207,8,15,1,15,1,15,1,15,1,15,1,15,3,15,214,8,15,5,15,216,8,15,10,15,12,
  	15,219,9,15,1,16,1,16,1,16,1,16,1,16,1,16,3,16,227,8,16,3,16,229,8,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,239,8,16,3,16,241,8,16,3,
  	16,243,8,16,1,17,1,17,3,17,247,8,17,1,18,1,18,1,18,3,18,252,8,18,1,19,
  	1,19,3,19,256,8,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,3,20,270,8,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,5,20,298,8,20,10,20,12,20,301,9,20,1,21,1,21,5,21,305,
  	8,21,10,21,12,21,308,9,21,1,21,1,21,1,21,5,21,313,8,21,10,21,12,21,316,
  	9,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,324,8,21,1,22,1,22,1,22,1,22,
  	1,22,3,22,331,8,22,1,22,1,22,1,22,3,22,336,8,22,1,22,1,22,1,22,3,22,341,
  	8,22,1,22,1,22,1,22,3,22,346,8,22,1,22,1,22,1,22,3,22,351,8,22,1,22,1,
  	22,1,22,3,22,356,8,22,1,22,1,22,1,22,3,22,361,8,22,1,22,1,22,1,22,3,22,
  	366,8,22,1,22,1,22,3,22,370,8,22,1,22,3,22,373,8,22,1,23,1,23,1,23,3,
  	23,378,8,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,
  	23,1,23,5,23,393,8,23,10,23,12,23,396,9,23,1,24,1,24,1,24,1,24,5,24,402,
  	8,24,10,24,12,24,405,9,24,1,25,1,25,1,26,1,26,1,26,3,26,412,8,26,1,27,
  	1,27,3,27,416,8,27,1,28,1,28,3,28,420,8,28,1,29,1,29,1,29,1,29,3,29,426,
  	8,29,1,30,1,30,1,30,1,30,1,30,1,30,3,30,434,8,30,1,31,1,31,3,31,438,8,
  	31,1,32,1,32,3,32,442,8,32,1,32,2,306,314,3,30,40,46,33,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,
  	58,60,62,64,0,0,503,0,69,1,0,0,0,2,75,1,0,0,0,4,81,1,0,0,0,6,83,1,0,0,
  	0,8,95,1,0,0,0,10,107,1,0,0,0,12,113,1,0,0,0,14,115,1,0,0,0,16,122,1,
  	0,0,0,18,147,1,0,0,0,20,157,1,0,0,0,22,163,1,0,0,0,24,170,1,0,0,0,26,
  	182,1,0,0,0,28,184,1,0,0,0,30,198,1,0,0,0,32,242,1,0,0,0,34,246,1,0,0,
  	0,36,251,1,0,0,0,38,255,1,0,0,0,40,269,1,0,0,0,42,323,1,0,0,0,44,372,
  	1,0,0,0,46,377,1,0,0,0,48,397,1,0,0,0,50,406,1,0,0,0,52,411,1,0,0,0,54,
  	415,1,0,0,0,56,419,1,0,0,0,58,425,1,0,0,0,60,433,1,0,0,0,62,437,1,0,0,
  	0,64,441,1,0,0,0,66,70,3,4,2,0,67,70,3,24,12,0,68,70,3,2,1,0,69,66,1,
  	0,0,0,69,67,1,0,0,0,69,68,1,0,0,0,70,71,1,0,0,0,71,69,1,0,0,0,71,72,1,
  	0,0,0,72,73,1,0,0,0,73,74,5,0,0,1,74,1,1,0,0,0,75,76,3,14,7,0,76,3,1,
  	0,0,0,77,78,3,8,4,0,78,79,5,41,0,0,79,82,1,0,0,0,80,82,3,6,3,0,81,77,
  	1,0,0,0,81,80,1,0,0,0,82,5,1,0,0,0,83,87,5,75,0,0,84,86,3,4,2,0,85,84,
  	1,0,0,0,86,89,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,90,1,0,0,0,89,87,
  	1,0,0,0,90,91,5,76,0,0,91,7,1,0,0,0,92,96,3,38,19,0,93,96,3,6,3,0,94,
  	96,3,10,5,0,95,92,1,0,0,0,95,93,1,0,0,0,95,94,1,0,0,0,96,9,1,0,0,0,97,
  	98,5,9,0,0,98,108,3,38,19,0,99,100,5,13,0,0,100,108,3,8,4,0,101,103,5,
  	11,0,0,102,104,3,40,20,0,103,102,1,0,0,0,103,104,1,0,0,0,104,108,1,0,
  	0,0,105,108,5,12,0,0,106,108,5,10,0,0,107,97,1,0,0,0,107,99,1,0,0,0,107,
  	101,1,0,0,0,107,105,1,0,0,0,107,106,1,0,0,0,108,11,1,0,0,0,109,114,3,
  	6,3,0,110,111,3,8,4,0,111,112,5,41,0,0,112,114,1,0,0,0,113,109,1,0,0,
  	0,113,110,1,0,0,0,114,13,1,0,0,0,115,116,5,1,0,0,116,117,5,14,0,0,117,
  	118,5,77,0,0,118,119,3,18,9,0,119,120,5,78,0,0,120,121,3,6,3,0,121,15,
  	1,0,0,0,122,123,5,77,0,0,123,124,3,18,9,0,124,125,5,78,0,0,125,126,5,
  	27,0,0,126,127,3,8,4,0,127,17,1,0,0,0,128,129,5,14,0,0,129,131,5,46,0,
  	0,130,128,1,0,0,0,131,134,1,0,0,0,132,130,1,0,0,0,132,133,1,0,0,0,133,
  	135,1,0,0,0,134,132,1,0,0,0,135,137,5,14,0,0,136,132,1,0,0,0,136,137,
  	1,0,0,0,137,148,1,0,0,0,138,139,5,14,0,0,139,141,5,46,0,0,140,138,1,0,
  	0,0,141,144,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,0,143,145,1,0,0,0,144,
  	142,1,0,0,0,145,146,5,14,0,0,146,148,5,31,0,0,147,136,1,0,0,0,147,142,
  	1,0,0,0,148,19,1,0,0,0,149,154,3,22,11,0,150,151,5,46,0,0,151,153,3,22,
  	11,0,152,150,1,0,0,0,153,156,1,0,0,0,154,152,1,0,0,0,154,155,1,0,0,0,
  	155,158,1,0,0,0,156,154,1,0,0,0,157,149,1,0,0,0,157,158,1,0,0,0,158,21,
  	1,0,0,0,159,164,3,38,19,0,160,161,5,31,0,0,161,164,3,38,19,0,162,164,
  	3,48,24,0,163,159,1,0,0,0,163,160,1,0,0,0,163,162,1,0,0,0,164,23,1,0,
  	0,0,165,166,3,28,14,0,166,167,5,41,0,0,167,171,1,0,0,0,168,171,3,26,13,
  	0,169,171,3,32,16,0,170,165,1,0,0,0,170,168,1,0,0,0,170,169,1,0,0,0,171,
  	25,1,0,0,0,172,173,3,36,18,0,173,174,3,40,20,0,174,175,3,6,3,0,175,183,
  	1,0,0,0,176,177,3,36,18,0,177,178,5,77,0,0,178,179,3,40,20,0,179,180,
  	5,78,0,0,180,181,3,12,6,0,181,183,1,0,0,0,182,172,1,0,0,0,182,176,1,0,
  	0,0,183,27,1,0,0,0,184,195,3,30,15,0,185,191,3,36,18,0,186,192,3,40,20,
  	0,187,188,5,77,0,0,188,189,3,20,10,0,189,190,5,78,0,0,190,192,1,0,0,0,
  	191,186,1,0,0,0,191,187,1,0,0,0,192,194,1,0,0,0,193,185,1,0,0,0,194,197,
  	1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,29,1,0,0,0,197,195,1,0,0,
  	0,198,199,6,15,-1,0,199,200,3,8,4,0,200,217,1,0,0,0,201,202,10,3,0,0,
  	202,203,5,3,0,0,203,206,3,40,20,0,204,205,5,5,0,0,205,207,3,30,15,0,206,
  	204,1,0,0,0,206,207,1,0,0,0,207,216,1,0,0,0,208,209,10,2,0,0,209,210,
  	5,4,0,0,210,213,3,40,20,0,211,212,5,5,0,0,212,214,3,30,15,0,213,211,1,
  	0,0,0,213,214,1,0,0,0,214,216,1,0,0,0,215,201,1,0,0,0,215,208,1,0,0,0,
  	216,219,1,0,0,0,217,215,1,0,0,0,217,218,1,0,0,0,218,31,1,0,0,0,219,217,
  	1,0,0,0,220,221,3,34,17,0,221,222,3,40,20,0,222,228,3,6,3,0,223,226,5,
  	5,0,0,224,227,3,12,6,0,225,227,3,32,16,0,226,224,1,0,0,0,226,225,1,0,
  	0,0,227,229,1,0,0,0,228,223,1,0,0,0,228,229,1,0,0,0,229,243,1,0,0,0,230,
  	231,3,34,17,0,231,232,5,77,0,0,232,233,3,40,20,0,233,234,5,78,0,0,234,
  	240,3,12,6,0,235,238,5,5,0,0,236,239,3,12,6,0,237,239,3,32,16,0,238,236,
  	1,0,0,0,238,237,1,0,0,0,239,241,1,0,0,0,240,235,1,0,0,0,240,241,1,0,0,
  	0,241,243,1,0,0,0,242,220,1,0,0,0,242,230,1,0,0,0,243,33,1,0,0,0,244,
  	247,5,3,0,0,245,247,5,4,0,0,246,244,1,0,0,0,246,245,1,0,0,0,247,35,1,
  	0,0,0,248,252,5,8,0,0,249,252,5,6,0,0,250,252,5,7,0,0,251,248,1,0,0,0,
  	251,249,1,0,0,0,251,250,1,0,0,0,252,37,1,0,0,0,253,256,3,40,20,0,254,
  	256,3,16,8,0,255,253,1,0,0,0,255,254,1,0,0,0,256,39,1,0,0,0,257,258,6,
  	20,-1,0,258,259,5,77,0,0,259,260,3,40,20,0,260,261,5,78,0,0,261,270,1,
  	0,0,0,262,270,3,44,22,0,263,264,3,58,29,0,264,265,3,40,20,7,265,270,1,
  	0,0,0,266,270,3,46,23,0,267,270,3,42,21,0,268,270,3,48,24,0,269,257,1,
  	0,0,0,269,262,1,0,0,0,269,263,1,0,0,0,269,266,1,0,0,0,269,267,1,0,0,0,
  	269,268,1,0,0,0,270,299,1,0,0,0,271,272,10,11,0,0,272,273,3,50,25,0,273,
  	274,3,40,20,12,274,298,1,0,0,0,275,276,10,10,0,0,276,277,3,52,26,0,277,
  	278,3,40,20,11,278,298,1,0,0,0,279,280,10,9,0,0,280,281,3,54,27,0,281,
  	282,3,40,20,10,282,298,1,0,0,0,283,284,10,8,0,0,284,285,3,56,28,0,285,
  	286,3,40,20,9,286,298,1,0,0,0,287,288,10,6,0,0,288,289,3,60,30,0,289,
  	290,3,40,20,7,290,298,1,0,0,0,291,292,10,5,0,0,292,293,3,62,31,0,293,
  	294,3,40,20,6,294,298,1,0,0,0,295,296,10,4,0,0,296,298,3,64,32,0,297,
  	271,1,0,0,0,297,275,1,0,0,0,297,279,1,0,0,0,297,283,1,0,0,0,297,287,1,
  	0,0,0,297,291,1,0,0,0,297,295,1,0,0,0,298,301,1,0,0,0,299,297,1,0,0,0,
  	299,300,1,0,0,0,300,41,1,0,0,0,301,299,1,0,0,0,302,306,5,44,0,0,303,305,
  	9,0,0,0,304,303,1,0,0,0,305,308,1,0,0,0,306,307,1,0,0,0,306,304,1,0,0,
  	0,307,309,1,0,0,0,308,306,1,0,0,0,309,324,5,44,0,0,310,314,5,45,0,0,311,
  	313,9,0,0,0,312,311,1,0,0,0,313,316,1,0,0,0,314,315,1,0,0,0,314,312,1,
  	0,0,0,315,317,1,0,0,0,316,314,1,0,0,0,317,324,5,45,0,0,318,319,5,73,0,
  	0,319,320,3,20,10,0,320,321,5,74,0,0,321,324,1,0,0,0,322,324,5,15,0,0,
  	323,302,1,0,0,0,323,310,1,0,0,0,323,318,1,0,0,0,323,322,1,0,0,0,324,43,
  	1,0,0,0,325,326,5,2,0,0,326,327,5,14,0,0,327,328,5,56,0,0,328,373,3,38,
  	19,0,329,331,3,46,23,0,330,329,1,0,0,0,330,331,1,0,0,0,331,332,1,0,0,
  	0,332,333,5,56,0,0,333,373,3,38,19,0,334,336,3,46,23,0,335,334,1,0,0,
  	0,335,336,1,0,0,0,336,337,1,0,0,0,337,338,5,70,0,0,338,373,3,40,20,0,
  	339,341,3,46,23,0,340,339,1,0,0,0,340,341,1,0,0,0,341,342,1,0,0,0,342,
  	343,5,67,0,0,343,373,3,40,20,0,344,346,3,46,23,0,345,344,1,0,0,0,345,
  	346,1,0,0,0,346,347,1,0,0,0,347,348,5,68,0,0,348,373,3,40,20,0,349,351,
  	3,46,23,0,350,349,1,0,0,0,350,351,1,0,0,0,351,352,1,0,0,0,352,353,5,69,
  	0,0,353,373,3,40,20,0,354,356,3,46,23,0,355,354,1,0,0,0,355,356,1,0,0,
  	0,356,357,1,0,0,0,357,358,5,65,0,0,358,373,3,40,20,0,359,361,3,46,23,
  	0,360,359,1,0,0,0,360,361,1,0,0,0,361,362,1,0,0,0,362,363,5,66,0,0,363,
  	373,3,40,20,0,364,366,3,46,23,0,365,364,1,0,0,0,365,366,1,0,0,0,366,367,
  	1,0,0,0,367,373,5,71,0,0,368,370,3,46,23,0,369,368,1,0,0,0,369,370,1,
  	0,0,0,370,371,1,0,0,0,371,373,5,72,0,0,372,325,1,0,0,0,372,330,1,0,0,
  	0,372,335,1,0,0,0,372,340,1,0,0,0,372,345,1,0,0,0,372,350,1,0,0,0,372,
  	355,1,0,0,0,372,360,1,0,0,0,372,365,1,0,0,0,372,369,1,0,0,0,373,45,1,
  	0,0,0,374,375,6,23,-1,0,375,378,5,14,0,0,376,378,5,33,0,0,377,374,1,0,
  	0,0,377,376,1,0,0,0,378,394,1,0,0,0,379,380,10,5,0,0,380,381,5,47,0,0,
  	381,393,5,14,0,0,382,383,10,4,0,0,383,384,5,73,0,0,384,385,3,40,20,0,
  	385,386,5,74,0,0,386,393,1,0,0,0,387,388,10,3,0,0,388,389,5,77,0,0,389,
  	390,3,20,10,0,390,391,5,78,0,0,391,393,1,0,0,0,392,379,1,0,0,0,392,382,
  	1,0,0,0,392,387,1,0,0,0,393,396,1,0,0,0,394,392,1,0,0,0,394,395,1,0,0,
  	0,395,47,1,0,0,0,396,394,1,0,0,0,397,398,3,46,23,0,398,403,3,22,11,0,
  	399,400,5,46,0,0,400,402,3,22,11,0,401,399,1,0,0,0,402,405,1,0,0,0,403,
  	401,1,0,0,0,403,404,1,0,0,0,404,49,1,0,0,0,405,403,1,0,0,0,406,407,5,
  	50,0,0,407,51,1,0,0,0,408,412,5,51,0,0,409,412,5,52,0,0,410,412,5,53,
  	0,0,411,408,1,0,0,0,411,409,1,0,0,0,411,410,1,0,0,0,412,53,1,0,0,0,413,
  	416,5,54,0,0,414,416,5,55,0,0,415,413,1,0,0,0,415,414,1,0,0,0,416,55,
  	1,0,0,0,417,420,5,25,0,0,418,420,5,30,0,0,419,417,1,0,0,0,419,418,1,0,
  	0,0,420,57,1,0,0,0,421,426,5,38,0,0,422,426,5,42,0,0,423,426,5,55,0,0,
  	424,426,5,48,0,0,425,421,1,0,0,0,425,422,1,0,0,0,425,423,1,0,0,0,425,
  	424,1,0,0,0,426,59,1,0,0,0,427,434,5,57,0,0,428,434,5,58,0,0,429,434,
  	5,59,0,0,430,434,5,60,0,0,431,434,5,61,0,0,432,434,5,62,0,0,433,427,1,
  	0,0,0,433,428,1,0,0,0,433,429,1,0,0,0,433,430,1,0,0,0,433,431,1,0,0,0,
  	433,432,1,0,0,0,434,61,1,0,0,0,435,438,5,64,0,0,436,438,5,63,0,0,437,
  	435,1,0,0,0,437,436,1,0,0,0,438,63,1,0,0,0,439,442,5,25,0,0,440,442,5,
  	38,0,0,441,439,1,0,0,0,441,440,1,0,0,0,442,65,1,0,0,0,58,69,71,81,87,
  	95,103,107,113,132,136,142,147,154,157,163,170,182,191,195,206,213,215,
  	217,226,228,238,240,242,246,251,255,269,297,299,306,314,323,330,335,340,
  	345,350,355,360,365,369,372,377,392,394,403,411,415,419,425,433,437,441
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
    setState(69); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(69);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(66);
        action();
        break;
      }

      case 2: {
        setState(67);
        controlFlow();
        break;
      }

      case 3: {
        setState(68);
        declaration();
        break;
      }

      default:
        break;
      }
      setState(71); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 108425324106153950) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 5631) != 0));
    setState(73);
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
    setState(75);
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
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(77);
      statement();
      setState(78);
      match(StrawberryParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
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
    setState(83);
    match(StrawberryParser::Lbrace);
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 108425324106153476) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 5631) != 0)) {
      setState(84);
      action();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(90);
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
    setState(95);
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
        setState(92);
        value();
        break;
      }

      case StrawberryParser::Lbrace: {
        enterOuterAlt(_localctx, 2);
        setState(93);
        scope();
        break;
      }

      case StrawberryParser::Return:
      case StrawberryParser::Break:
      case StrawberryParser::Next:
      case StrawberryParser::Last:
      case StrawberryParser::Once: {
        enterOuterAlt(_localctx, 3);
        setState(94);
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
    setState(107);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Return: {
        _localctx = _tracker.createInstance<StrawberryParser::ReturnStatContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(97);
        match(StrawberryParser::Return);
        setState(98);
        value();
        break;
      }

      case StrawberryParser::Once: {
        _localctx = _tracker.createInstance<StrawberryParser::OnceStatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(99);
        match(StrawberryParser::Once);
        setState(100);
        statement();
        break;
      }

      case StrawberryParser::Next: {
        _localctx = _tracker.createInstance<StrawberryParser::NextStatContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(101);
        match(StrawberryParser::Next);
        setState(103);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(102);
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
        setState(105);
        match(StrawberryParser::Last);
        break;
      }

      case StrawberryParser::Break: {
        _localctx = _tracker.createInstance<StrawberryParser::BreakStatContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(106);
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
    setState(113);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(109);
      scope();
      break;
    }

    case 2: {
      setState(110);
      statement();
      setState(111);
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
    setState(115);
    match(StrawberryParser::Fn);
    setState(116);
    match(StrawberryParser::Id);
    setState(117);
    match(StrawberryParser::Lpar);
    setState(118);
    parameters();
    setState(119);
    match(StrawberryParser::Rpar);
    setState(120);
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
    setState(122);
    match(StrawberryParser::Lpar);
    setState(123);
    parameters();
    setState(124);
    match(StrawberryParser::Rpar);
    setState(125);
    match(StrawberryParser::Darrpw);
    setState(126);
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
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::ParamsContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(136);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id) {
        setState(132);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(128);
            match(StrawberryParser::Id);
            setState(129);
            match(StrawberryParser::Com); 
          }
          setState(134);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
        }
        setState(135);
        match(StrawberryParser::Id);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::ParamsExpandContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(142);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(138);
          match(StrawberryParser::Id);
          setState(139);
          match(StrawberryParser::Com); 
        }
        setState(144);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
      }
      setState(145);
      match(StrawberryParser::Id);
      setState(146);
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
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 108425326253621252) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & 4607) != 0)) {
      setState(149);
      argument();
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == StrawberryParser::Com) {
        setState(150);
        match(StrawberryParser::Com);
        setState(151);
        argument();
        setState(156);
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
    setState(163);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::ArgContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(159);
      value();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::ArgExpandContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(160);
      match(StrawberryParser::Dot3);
      setState(161);
      value();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::LooseFnCallArgContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(162);
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
    setState(170);
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
        setState(165);
        compoundStatement();
        setState(166);
        match(StrawberryParser::Semi);
        break;
      }

      case StrawberryParser::While:
      case StrawberryParser::Until:
      case StrawberryParser::For: {
        enterOuterAlt(_localctx, 2);
        setState(168);
        loop();
        break;
      }

      case StrawberryParser::If:
      case StrawberryParser::Unless: {
        enterOuterAlt(_localctx, 3);
        setState(169);
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
    setState(182);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(172);
      loopKeywords();
      setState(173);
      expression(0);
      setState(174);
      scope();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(176);
      loopKeywords();
      setState(177);
      match(StrawberryParser::Lpar);
      setState(178);
      expression(0);
      setState(179);
      match(StrawberryParser::Rpar);
      setState(180);
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
    setState(184);
    compoundAction(0);
    setState(195);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 448) != 0)) {
      setState(185);
      loopKeywords();
      setState(191);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(186);
        expression(0);
        break;
      }

      case 2: {
        setState(187);
        match(StrawberryParser::Lpar);
        setState(188);
        args();
        setState(189);
        match(StrawberryParser::Rpar);
        break;
      }

      default:
        break;
      }
      setState(197);
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
    setState(199);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(217);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(215);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<CompoundActionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleCompoundAction);
          setState(201);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(202);
          match(StrawberryParser::If);
          setState(203);
          expression(0);
          setState(206);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
          case 1: {
            setState(204);
            match(StrawberryParser::Else);
            setState(205);
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
          setState(208);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(209);
          match(StrawberryParser::Unless);
          setState(210);
          expression(0);
          setState(213);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
          case 1: {
            setState(211);
            match(StrawberryParser::Else);
            setState(212);
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
      setState(219);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
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
    setState(242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::IfScopeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(220);
      conditionalKeywords();
      setState(221);
      expression(0);
      setState(222);
      scope();
      setState(228);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Else) {
        setState(223);
        match(StrawberryParser::Else);
        setState(226);
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
            setState(224);
            body();
            break;
          }

          case StrawberryParser::If:
          case StrawberryParser::Unless: {
            setState(225);
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
      setState(230);
      conditionalKeywords();
      setState(231);
      match(StrawberryParser::Lpar);
      setState(232);
      expression(0);
      setState(233);
      match(StrawberryParser::Rpar);
      setState(234);
      body();
      setState(240);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Else) {
        setState(235);
        match(StrawberryParser::Else);
        setState(238);
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
            setState(236);
            body();
            break;
          }

          case StrawberryParser::If:
          case StrawberryParser::Unless: {
            setState(237);
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
    setState(246);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::If: {
        _localctx = _tracker.createInstance<StrawberryParser::IfKeywordContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(244);
        match(StrawberryParser::If);
        break;
      }

      case StrawberryParser::Unless: {
        _localctx = _tracker.createInstance<StrawberryParser::UnlessKeywordContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(245);
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
    setState(251);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::For: {
        _localctx = _tracker.createInstance<StrawberryParser::ForCompoundContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(248);
        match(StrawberryParser::For);
        break;
      }

      case StrawberryParser::While: {
        _localctx = _tracker.createInstance<StrawberryParser::WhileCompoundContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(249);
        match(StrawberryParser::While);
        break;
      }

      case StrawberryParser::Until: {
        _localctx = _tracker.createInstance<StrawberryParser::UntilCompoundContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(250);
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
    setState(255);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(253);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(254);
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
    setState(269);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(258);
      match(StrawberryParser::Lpar);
      setState(259);
      expression(0);
      setState(260);
      match(StrawberryParser::Rpar);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<AssignExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(262);
      assign();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PrefixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(263);
      prefix();
      setState(264);
      expression(7);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<AccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(266);
      identifyer(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<LitExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(267);
      literal();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LooseFnCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(268);
      looseFnCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(299);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(297);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(271);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(272);
          op1();
          setState(273);
          expression(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(275);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(276);
          op2();
          setState(277);
          expression(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(279);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(280);
          op3();
          setState(281);
          expression(10);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(283);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(284);
          op4();
          setState(285);
          expression(9);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(287);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(288);
          op5();
          setState(289);
          expression(7);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OpExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(291);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(292);
          op6();
          setState(293);
          expression(6);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<SuffixExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(295);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(296);
          suffix();
          break;
        }

        default:
          break;
        } 
      }
      setState(301);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
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
    setState(323);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Dquote: {
        _localctx = _tracker.createInstance<StrawberryParser::DStringLitContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(302);
        match(StrawberryParser::Dquote);
        setState(306);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
        while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1 + 1) {
            setState(303);
            matchWildcard(); 
          }
          setState(308);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
        }
        setState(309);
        match(StrawberryParser::Dquote);
        break;
      }

      case StrawberryParser::Squote: {
        _localctx = _tracker.createInstance<StrawberryParser::SStringLitContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(310);
        match(StrawberryParser::Squote);
        setState(314);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
        while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1 + 1) {
            setState(311);
            matchWildcard(); 
          }
          setState(316);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
        }
        setState(317);
        match(StrawberryParser::Squote);
        break;
      }

      case StrawberryParser::Lbrack: {
        _localctx = _tracker.createInstance<StrawberryParser::ArrayLitContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(318);
        match(StrawberryParser::Lbrack);
        setState(319);
        args();
        setState(320);
        match(StrawberryParser::Rbrack);
        break;
      }

      case StrawberryParser::Number: {
        _localctx = _tracker.createInstance<StrawberryParser::NumLitContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(322);
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
    setState(372);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<StrawberryParser::DeclareAssignContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(325);
      match(StrawberryParser::Decl);
      setState(326);
      match(StrawberryParser::Id);
      setState(327);
      match(StrawberryParser::Eq);
      setState(328);
      value();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<StrawberryParser::EqAssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(330);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(329);
        identifyer(0);
      }
      setState(332);
      match(StrawberryParser::Eq);
      setState(333);
      value();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<StrawberryParser::PowAssignContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(335);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(334);
        identifyer(0);
      }
      setState(337);
      match(StrawberryParser::PowEq);
      setState(338);
      expression(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<StrawberryParser::MultAssignContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(340);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(339);
        identifyer(0);
      }
      setState(342);
      match(StrawberryParser::MultEq);
      setState(343);
      expression(0);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StrawberryParser::DivAssignContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(345);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(344);
        identifyer(0);
      }
      setState(347);
      match(StrawberryParser::DivEq);
      setState(348);
      expression(0);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<StrawberryParser::ModAssignContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(350);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(349);
        identifyer(0);
      }
      setState(352);
      match(StrawberryParser::ModEq);
      setState(353);
      expression(0);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<StrawberryParser::AddAssignContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(355);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(354);
        identifyer(0);
      }
      setState(357);
      match(StrawberryParser::PlusEq);
      setState(358);
      expression(0);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<StrawberryParser::MinAssignContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(360);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(359);
        identifyer(0);
      }
      setState(362);
      match(StrawberryParser::MinEq);
      setState(363);
      expression(0);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<StrawberryParser::IncremContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(365);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(364);
        identifyer(0);
      }
      setState(367);
      match(StrawberryParser::Increm);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<StrawberryParser::DecremContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(369);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Id

      || _la == StrawberryParser::Uscore) {
        setState(368);
        identifyer(0);
      }
      setState(371);
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
    setState(377);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Id: {
        _localctx = _tracker.createInstance<IdAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(375);
        match(StrawberryParser::Id);
        break;
      }

      case StrawberryParser::Uscore: {
        _localctx = _tracker.createInstance<DefaultAccessContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(376);
        match(StrawberryParser::Uscore);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(394);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(392);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<DotAccessContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(379);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(380);
          match(StrawberryParser::Dot);
          setState(381);
          match(StrawberryParser::Id);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArrAccesssContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(382);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(383);
          match(StrawberryParser::Lbrack);
          setState(384);
          expression(0);
          setState(385);
          match(StrawberryParser::Rbrack);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<FnAccessContext>(_tracker.createInstance<IdentifyerContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer);
          setState(387);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(388);
          match(StrawberryParser::Lpar);
          setState(389);
          args();
          setState(390);
          match(StrawberryParser::Rpar);
          break;
        }

        default:
          break;
        } 
      }
      setState(396);
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
    setState(397);
    identifyer(0);
    setState(398);
    argument();
    setState(403);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(399);
        match(StrawberryParser::Com);
        setState(400);
        argument(); 
      }
      setState(405);
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
  enterRule(_localctx, 50, StrawberryParser::RuleOp1);

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
  enterRule(_localctx, 52, StrawberryParser::RuleOp2);

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
  enterRule(_localctx, 54, StrawberryParser::RuleOp3);

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
  enterRule(_localctx, 56, StrawberryParser::RuleOp4);

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
  enterRule(_localctx, 58, StrawberryParser::RulePrefix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(425);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::ExPoint: {
        _localctx = _tracker.createInstance<StrawberryParser::NegatePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(421);
        match(StrawberryParser::ExPoint);
        break;
      }

      case StrawberryParser::Fslash: {
        _localctx = _tracker.createInstance<StrawberryParser::RefPrefixContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(422);
        match(StrawberryParser::Fslash);
        break;
      }

      case StrawberryParser::Min: {
        _localctx = _tracker.createInstance<StrawberryParser::NegativePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(423);
        match(StrawberryParser::Min);
        break;
      }

      case StrawberryParser::Squig: {
        _localctx = _tracker.createInstance<StrawberryParser::ReversePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(424);
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
    setState(433);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::BoolEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolEqContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(427);
        match(StrawberryParser::BoolEq);
        break;
      }

      case StrawberryParser::BoolNeq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolNeqContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(428);
        match(StrawberryParser::BoolNeq);
        break;
      }

      case StrawberryParser::Gt: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolGtContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(429);
        match(StrawberryParser::Gt);
        break;
      }

      case StrawberryParser::GtEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolGtEqContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(430);
        match(StrawberryParser::GtEq);
        break;
      }

      case StrawberryParser::Lt: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolLtContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(431);
        match(StrawberryParser::Lt);
        break;
      }

      case StrawberryParser::LtEq: {
        _localctx = _tracker.createInstance<StrawberryParser::BoolLtEqContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(432);
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
    setState(437);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::Or: {
        _localctx = _tracker.createInstance<StrawberryParser::OrContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(435);
        match(StrawberryParser::Or);
        break;
      }

      case StrawberryParser::And: {
        _localctx = _tracker.createInstance<StrawberryParser::AndContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(436);
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
  enterRule(_localctx, 64, StrawberryParser::RuleSuffix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(441);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case StrawberryParser::DefOr: {
        _localctx = _tracker.createInstance<StrawberryParser::OrDefaultContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(439);
        match(StrawberryParser::DefOr);
        break;
      }

      case StrawberryParser::ExPoint: {
        _localctx = _tracker.createInstance<StrawberryParser::ExcitedSuffContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(440);
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
