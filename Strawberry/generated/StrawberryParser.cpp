
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
      "script", "numberList"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "'->'", "'=>'", "'>>'", "'<<'", 
      "'..'", "'...'", "'as'", "", "'_'", "'&'", "'$'", "'#'", "'@'", "'!'", 
      "'\\u003F'", "':'", "';'", "'\\'", "'|'", "'\"'", "'''", "','", "'.'", 
      "'~'", "'`'", "'^'", "'*'", "'/'", "'%'", "'+'", "'-'", "'='", "'=='", 
      "'>'", "'>='", "'<'", "'<='", "'and'", "'or'", "'+='", "'-='", "'*='", 
      "'/='", "'%='", "'^='", "'['", "']'", "'{'", "'}'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "Id", "Number", "String", "LitString", "Digit", "Word", "UcLetter", 
      "LcLetter", "Sarrow", "Darrpw", "LRarrow", "RLarrow", "Dot2", "Dot3", 
      "As", "Nl", "Uscore", "AndSign", "Doll", "Hash", "At", "ExPoint", 
      "Qmark", "Colon", "Semi", "Fslash", "Bar", "Dquote", "Squote", "Com", 
      "Dot", "Squig", "Btick", "Pow", "Star", "Bslash", "Mod", "Plus", "Min", 
      "SEq", "DEq", "Gt", "GtEq", "Lt", "LtEq", "And", "Or", "PlusEq", "MinEq", 
      "MultEq", "DivEq", "ModEq", "PowEq", "Lbrack", "Rbrack", "Lbrace", 
      "Rbrace", "Lpar", "Rpar", "Ignore"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,60,22,2,0,7,0,2,1,7,1,1,0,1,0,3,0,7,8,0,4,0,9,8,0,11,0,12,0,10,1,
  	0,1,0,1,1,1,1,1,1,4,1,18,8,1,11,1,12,1,19,1,1,0,0,2,0,2,0,0,22,0,8,1,
  	0,0,0,2,14,1,0,0,0,4,6,3,2,1,0,5,7,5,16,0,0,6,5,1,0,0,0,6,7,1,0,0,0,7,
  	9,1,0,0,0,8,4,1,0,0,0,9,10,1,0,0,0,10,8,1,0,0,0,10,11,1,0,0,0,11,12,1,
  	0,0,0,12,13,5,0,0,1,13,1,1,0,0,0,14,17,5,2,0,0,15,16,5,9,0,0,16,18,5,
  	2,0,0,17,15,1,0,0,0,18,19,1,0,0,0,19,17,1,0,0,0,19,20,1,0,0,0,20,3,1,
  	0,0,0,3,6,10,19
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

std::vector<StrawberryParser::NumberListContext *> StrawberryParser::ScriptContext::numberList() {
  return getRuleContexts<StrawberryParser::NumberListContext>();
}

StrawberryParser::NumberListContext* StrawberryParser::ScriptContext::numberList(size_t i) {
  return getRuleContext<StrawberryParser::NumberListContext>(i);
}

std::vector<tree::TerminalNode *> StrawberryParser::ScriptContext::Nl() {
  return getTokens(StrawberryParser::Nl);
}

tree::TerminalNode* StrawberryParser::ScriptContext::Nl(size_t i) {
  return getToken(StrawberryParser::Nl, i);
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
    setState(8); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(4);
      numberList();
      setState(6);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Nl) {
        setState(5);
        match(StrawberryParser::Nl);
      }
      setState(10); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == StrawberryParser::Number);
    setState(12);
    match(StrawberryParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberListContext ------------------------------------------------------------------

StrawberryParser::NumberListContext::NumberListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> StrawberryParser::NumberListContext::Number() {
  return getTokens(StrawberryParser::Number);
}

tree::TerminalNode* StrawberryParser::NumberListContext::Number(size_t i) {
  return getToken(StrawberryParser::Number, i);
}

std::vector<tree::TerminalNode *> StrawberryParser::NumberListContext::Sarrow() {
  return getTokens(StrawberryParser::Sarrow);
}

tree::TerminalNode* StrawberryParser::NumberListContext::Sarrow(size_t i) {
  return getToken(StrawberryParser::Sarrow, i);
}


size_t StrawberryParser::NumberListContext::getRuleIndex() const {
  return StrawberryParser::RuleNumberList;
}

void StrawberryParser::NumberListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberList(this);
}

void StrawberryParser::NumberListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberList(this);
}


std::any StrawberryParser::NumberListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitNumberList(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::NumberListContext* StrawberryParser::numberList() {
  NumberListContext *_localctx = _tracker.createInstance<NumberListContext>(_ctx, getState());
  enterRule(_localctx, 2, StrawberryParser::RuleNumberList);
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
    setState(14);
    match(StrawberryParser::Number);
    setState(17); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(15);
      match(StrawberryParser::Sarrow);
      setState(16);
      match(StrawberryParser::Number);
      setState(19); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == StrawberryParser::Sarrow);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void StrawberryParser::initialize() {
  ::antlr4::internal::call_once(strawberryparserParserOnceFlag, strawberryparserParserInitialize);
}
