
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
      "script", "statement", "expression", "fnDecl"
    },
    std::vector<std::string>{
      "", "'KILL'", "'fn'", "'let'", "'if'", "'unless'", "'else'", "'while'", 
      "'until'", "'for'", "'break'", "'next'", "'last'", "'once'", "", "", 
      "", "", "", "", "", "", "'true'", "'false'", "'null'", "'->'", "'=>'", 
      "'>>'", "'<<'", "'..'", "'...'", "'as'", "", "'_'", "'&'", "'$'", 
      "'#'", "'@'", "'!'", "'\\u003F'", "':'", "';'", "'\\'", "'|'", "'\"'", 
      "'''", "','", "'.'", "'~'", "'`'", "'^'", "'*'", "'/'", "'%'", "'+'", 
      "'-'", "'='", "'=='", "'>'", "'>='", "'<'", "'<='", "'and'", "'or'", 
      "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'['", "']'", "'{'", 
      "'}'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "Eof", "Fn", "Decl", "If", "Unless", "Else", "While", "Until", 
      "For", "Break", "Next", "Last", "Once", "Id", "Number", "String", 
      "LitString", "Digit", "Word", "UcLetter", "LcLetter", "True", "False", 
      "Null", "Sarrow", "Darrpw", "LRarrow", "RLarrow", "Dot2", "Dot3", 
      "As", "Nl", "Uscore", "AndSign", "Doll", "Hash", "At", "ExPoint", 
      "Qmark", "Colon", "Semi", "Fslash", "Bar", "Dquote", "Squote", "Com", 
      "Dot", "Squig", "Btick", "Pow", "Star", "Bslash", "Mod", "Plus", "Min", 
      "Eq", "BoolEq", "Gt", "GtEq", "Lt", "LtEq", "And", "Or", "PlusEq", 
      "MinEq", "MultEq", "DivEq", "ModEq", "PowEq", "Lbrack", "Rbrack", 
      "Lbrace", "Rbrace", "Lpar", "Rpar", "Ignore"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,76,26,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,3,0,11,8,0,4,0,13,8,
  	0,11,0,12,0,14,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,0,0,4,0,2,4,6,
  	0,0,23,0,12,1,0,0,0,2,18,1,0,0,0,4,20,1,0,0,0,6,22,1,0,0,0,8,10,3,2,1,
  	0,9,11,5,32,0,0,10,9,1,0,0,0,10,11,1,0,0,0,11,13,1,0,0,0,12,8,1,0,0,0,
  	13,14,1,0,0,0,14,12,1,0,0,0,14,15,1,0,0,0,15,16,1,0,0,0,16,17,5,1,0,0,
  	17,1,1,0,0,0,18,19,3,4,2,0,19,3,1,0,0,0,20,21,5,15,0,0,21,5,1,0,0,0,22,
  	23,5,2,0,0,23,24,5,14,0,0,24,7,1,0,0,0,2,10,14
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

tree::TerminalNode* StrawberryParser::ScriptContext::Eof() {
  return getToken(StrawberryParser::Eof, 0);
}

std::vector<StrawberryParser::StatementContext *> StrawberryParser::ScriptContext::statement() {
  return getRuleContexts<StrawberryParser::StatementContext>();
}

StrawberryParser::StatementContext* StrawberryParser::ScriptContext::statement(size_t i) {
  return getRuleContext<StrawberryParser::StatementContext>(i);
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
    setState(12); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(8);
      statement();
      setState(10);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == StrawberryParser::Nl) {
        setState(9);
        match(StrawberryParser::Nl);
      }
      setState(14); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == StrawberryParser::Number);
    setState(16);
    match(StrawberryParser::Eof);
   
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

StrawberryParser::ExpressionContext* StrawberryParser::StatementContext::expression() {
  return getRuleContext<StrawberryParser::ExpressionContext>(0);
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
  enterRule(_localctx, 2, StrawberryParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    expression();
   
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

tree::TerminalNode* StrawberryParser::ExpressionContext::Number() {
  return getToken(StrawberryParser::Number, 0);
}


size_t StrawberryParser::ExpressionContext::getRuleIndex() const {
  return StrawberryParser::RuleExpression;
}

void StrawberryParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void StrawberryParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any StrawberryParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::ExpressionContext* StrawberryParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, StrawberryParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(20);
    match(StrawberryParser::Number);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FnDeclContext ------------------------------------------------------------------

StrawberryParser::FnDeclContext::FnDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* StrawberryParser::FnDeclContext::Fn() {
  return getToken(StrawberryParser::Fn, 0);
}

tree::TerminalNode* StrawberryParser::FnDeclContext::Id() {
  return getToken(StrawberryParser::Id, 0);
}


size_t StrawberryParser::FnDeclContext::getRuleIndex() const {
  return StrawberryParser::RuleFnDecl;
}

void StrawberryParser::FnDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFnDecl(this);
}

void StrawberryParser::FnDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<StrawberryParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFnDecl(this);
}


std::any StrawberryParser::FnDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<StrawberryParserVisitor*>(visitor))
    return parserVisitor->visitFnDecl(this);
  else
    return visitor->visitChildren(this);
}

StrawberryParser::FnDeclContext* StrawberryParser::fnDecl() {
  FnDeclContext *_localctx = _tracker.createInstance<FnDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, StrawberryParser::RuleFnDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    match(StrawberryParser::Fn);
    setState(23);
    match(StrawberryParser::Id);
   
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
