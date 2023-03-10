
// Generated from /home/patrick/Documents/Interpreters/StrawberryCpp/Strawberry/TParser.g4 by ANTLR 4.12.0


#include "TParserListener.h"
#include "TParserVisitor.h"

#include "TParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;

using namespace antlr4;

namespace {

struct TParserStaticData final {
  TParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TParserStaticData(const TParserStaticData&) = delete;
  TParserStaticData(TParserStaticData&&) = delete;
  TParserStaticData& operator=(const TParserStaticData&) = delete;
  TParserStaticData& operator=(TParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag tparserParserOnceFlag;
TParserStaticData *tparserParserStaticData = nullptr;

void tparserParserInitialize() {
  assert(tparserParserStaticData == nullptr);
  auto staticData = std::make_unique<TParserStaticData>(
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
  tparserParserStaticData = staticData.release();
}

}

TParser::TParser(TokenStream *input) : TParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

TParser::TParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  TParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *tparserParserStaticData->atn, tparserParserStaticData->decisionToDFA, tparserParserStaticData->sharedContextCache, options);
}

TParser::~TParser() {
  delete _interpreter;
}

const atn::ATN& TParser::getATN() const {
  return *tparserParserStaticData->atn;
}

std::string TParser::getGrammarFileName() const {
  return "TParser.g4";
}

const std::vector<std::string>& TParser::getRuleNames() const {
  return tparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& TParser::getVocabulary() const {
  return tparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TParser::getSerializedATN() const {
  return tparserParserStaticData->serializedATN;
}


//----------------- ScriptContext ------------------------------------------------------------------

TParser::ScriptContext::ScriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ScriptContext::EOF() {
  return getToken(TParser::EOF, 0);
}

std::vector<TParser::NumberListContext *> TParser::ScriptContext::numberList() {
  return getRuleContexts<TParser::NumberListContext>();
}

TParser::NumberListContext* TParser::ScriptContext::numberList(size_t i) {
  return getRuleContext<TParser::NumberListContext>(i);
}

std::vector<tree::TerminalNode *> TParser::ScriptContext::Nl() {
  return getTokens(TParser::Nl);
}

tree::TerminalNode* TParser::ScriptContext::Nl(size_t i) {
  return getToken(TParser::Nl, i);
}


size_t TParser::ScriptContext::getRuleIndex() const {
  return TParser::RuleScript;
}

void TParser::ScriptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScript(this);
}

void TParser::ScriptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScript(this);
}


std::any TParser::ScriptContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitScript(this);
  else
    return visitor->visitChildren(this);
}

TParser::ScriptContext* TParser::script() {
  ScriptContext *_localctx = _tracker.createInstance<ScriptContext>(_ctx, getState());
  enterRule(_localctx, 0, TParser::RuleScript);
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
      if (_la == TParser::Nl) {
        setState(5);
        match(TParser::Nl);
      }
      setState(10); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TParser::Number);
    setState(12);
    match(TParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberListContext ------------------------------------------------------------------

TParser::NumberListContext::NumberListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TParser::NumberListContext::Number() {
  return getTokens(TParser::Number);
}

tree::TerminalNode* TParser::NumberListContext::Number(size_t i) {
  return getToken(TParser::Number, i);
}

std::vector<tree::TerminalNode *> TParser::NumberListContext::Sarrow() {
  return getTokens(TParser::Sarrow);
}

tree::TerminalNode* TParser::NumberListContext::Sarrow(size_t i) {
  return getToken(TParser::Sarrow, i);
}


size_t TParser::NumberListContext::getRuleIndex() const {
  return TParser::RuleNumberList;
}

void TParser::NumberListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberList(this);
}

void TParser::NumberListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberList(this);
}


std::any TParser::NumberListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitNumberList(this);
  else
    return visitor->visitChildren(this);
}

TParser::NumberListContext* TParser::numberList() {
  NumberListContext *_localctx = _tracker.createInstance<NumberListContext>(_ctx, getState());
  enterRule(_localctx, 2, TParser::RuleNumberList);
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
    match(TParser::Number);
    setState(17); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(15);
      match(TParser::Sarrow);
      setState(16);
      match(TParser::Number);
      setState(19); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == TParser::Sarrow);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void TParser::initialize() {
  ::antlr4::internal::call_once(tparserParserOnceFlag, tparserParserInitialize);
}
