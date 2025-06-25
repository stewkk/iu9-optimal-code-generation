
// Generated from TParser.g4 by ANTLR 4.13.0


#include "TParserListener.h"
#include "TParserVisitor.h"

#include "TParser.h"


using namespace antlrcpp;
using namespace stewkk::useless::codegen;

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
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
TParserStaticData *tparserParserStaticData = nullptr;

void tparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (tparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(tparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<TParserStaticData>(
    std::vector<std::string>{
      "main", "stat", "control", "cond", "condOp", "expr", "op"
    },
    std::vector<std::string>{
      "", "", "'return'", "'continue'", "'break'", "'if'", "'while'", "", 
      "", "", "'<'", "'>'", "'='", "'=='", "'!='", "';'", "'+'", "'-'", 
      "'*'", "'('", "')'", "'{'", "'}'"
    },
    std::vector<std::string>{
      "", "DUMMY", "Return", "Continue", "Break", "If", "While", "INT", 
      "Digit", "ID", "LessThan", "GreaterThan", "Assign", "Equal", "NotEqual", 
      "Semicolon", "Plus", "Minus", "Star", "OpenPar", "ClosePar", "OpenCurly", 
      "CloseCurly", "Comment", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,77,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	4,0,16,8,0,11,0,12,0,17,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,41,8,1,11,1,12,1,42,1,1,1,1,
  	3,1,47,8,1,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,3,5,64,8,5,1,5,1,5,1,5,1,5,5,5,70,8,5,10,5,12,5,73,9,5,1,6,1,6,1,6,
  	0,1,10,7,0,2,4,6,8,10,12,0,3,1,0,5,6,2,0,10,11,13,14,1,0,16,18,78,0,15,
  	1,0,0,0,2,46,1,0,0,0,4,48,1,0,0,0,6,50,1,0,0,0,8,54,1,0,0,0,10,63,1,0,
  	0,0,12,74,1,0,0,0,14,16,3,2,1,0,15,14,1,0,0,0,16,17,1,0,0,0,17,15,1,0,
  	0,0,17,18,1,0,0,0,18,19,1,0,0,0,19,20,5,0,0,1,20,1,1,0,0,0,21,22,5,9,
  	0,0,22,23,5,12,0,0,23,24,3,10,5,0,24,25,5,15,0,0,25,47,1,0,0,0,26,27,
  	5,2,0,0,27,28,3,10,5,0,28,29,5,15,0,0,29,47,1,0,0,0,30,31,5,4,0,0,31,
  	47,5,15,0,0,32,33,5,3,0,0,33,47,5,15,0,0,34,35,3,4,2,0,35,36,5,19,0,0,
  	36,37,3,6,3,0,37,38,5,20,0,0,38,40,5,21,0,0,39,41,3,2,1,0,40,39,1,0,0,
  	0,41,42,1,0,0,0,42,40,1,0,0,0,42,43,1,0,0,0,43,44,1,0,0,0,44,45,5,22,
  	0,0,45,47,1,0,0,0,46,21,1,0,0,0,46,26,1,0,0,0,46,30,1,0,0,0,46,32,1,0,
  	0,0,46,34,1,0,0,0,47,3,1,0,0,0,48,49,7,0,0,0,49,5,1,0,0,0,50,51,3,10,
  	5,0,51,52,3,8,4,0,52,53,3,10,5,0,53,7,1,0,0,0,54,55,7,1,0,0,55,9,1,0,
  	0,0,56,57,6,5,-1,0,57,58,5,19,0,0,58,59,3,10,5,0,59,60,5,20,0,0,60,64,
  	1,0,0,0,61,64,5,9,0,0,62,64,5,7,0,0,63,56,1,0,0,0,63,61,1,0,0,0,63,62,
  	1,0,0,0,64,71,1,0,0,0,65,66,10,4,0,0,66,67,3,12,6,0,67,68,3,10,5,5,68,
  	70,1,0,0,0,69,65,1,0,0,0,70,73,1,0,0,0,71,69,1,0,0,0,71,72,1,0,0,0,72,
  	11,1,0,0,0,73,71,1,0,0,0,74,75,7,2,0,0,75,13,1,0,0,0,5,17,42,46,63,71
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


//----------------- MainContext ------------------------------------------------------------------

TParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::MainContext::EOF() {
  return getToken(TParser::EOF, 0);
}

std::vector<TParser::StatContext *> TParser::MainContext::stat() {
  return getRuleContexts<TParser::StatContext>();
}

TParser::StatContext* TParser::MainContext::stat(size_t i) {
  return getRuleContext<TParser::StatContext>(i);
}


size_t TParser::MainContext::getRuleIndex() const {
  return TParser::RuleMain;
}

void TParser::MainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMain(this);
}

void TParser::MainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMain(this);
}


std::any TParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

TParser::MainContext* TParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 0, TParser::RuleMain);
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
    setState(15); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(14);
      stat();
      setState(17); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 636) != 0));
    setState(19);
    match(TParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

TParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TParser::StatContext::getRuleIndex() const {
  return TParser::RuleStat;
}

void TParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ReturnContext ------------------------------------------------------------------

tree::TerminalNode* TParser::ReturnContext::Return() {
  return getToken(TParser::Return, 0);
}

TParser::ExprContext* TParser::ReturnContext::expr() {
  return getRuleContext<TParser::ExprContext>(0);
}

tree::TerminalNode* TParser::ReturnContext::Semicolon() {
  return getToken(TParser::Semicolon, 0);
}

TParser::ReturnContext::ReturnContext(StatContext *ctx) { copyFrom(ctx); }

void TParser::ReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn(this);
}
void TParser::ReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn(this);
}

std::any TParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FlowControlContext ------------------------------------------------------------------

TParser::ControlContext* TParser::FlowControlContext::control() {
  return getRuleContext<TParser::ControlContext>(0);
}

tree::TerminalNode* TParser::FlowControlContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

TParser::CondContext* TParser::FlowControlContext::cond() {
  return getRuleContext<TParser::CondContext>(0);
}

tree::TerminalNode* TParser::FlowControlContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

tree::TerminalNode* TParser::FlowControlContext::OpenCurly() {
  return getToken(TParser::OpenCurly, 0);
}

tree::TerminalNode* TParser::FlowControlContext::CloseCurly() {
  return getToken(TParser::CloseCurly, 0);
}

std::vector<TParser::StatContext *> TParser::FlowControlContext::stat() {
  return getRuleContexts<TParser::StatContext>();
}

TParser::StatContext* TParser::FlowControlContext::stat(size_t i) {
  return getRuleContext<TParser::StatContext>(i);
}

TParser::FlowControlContext::FlowControlContext(StatContext *ctx) { copyFrom(ctx); }

void TParser::FlowControlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFlowControl(this);
}
void TParser::FlowControlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFlowControl(this);
}

std::any TParser::FlowControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitFlowControl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakContext ------------------------------------------------------------------

tree::TerminalNode* TParser::BreakContext::Break() {
  return getToken(TParser::Break, 0);
}

tree::TerminalNode* TParser::BreakContext::Semicolon() {
  return getToken(TParser::Semicolon, 0);
}

TParser::BreakContext::BreakContext(StatContext *ctx) { copyFrom(ctx); }

void TParser::BreakContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreak(this);
}
void TParser::BreakContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreak(this);
}

std::any TParser::BreakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitBreak(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* TParser::AssignContext::ID() {
  return getToken(TParser::ID, 0);
}

tree::TerminalNode* TParser::AssignContext::Assign() {
  return getToken(TParser::Assign, 0);
}

TParser::ExprContext* TParser::AssignContext::expr() {
  return getRuleContext<TParser::ExprContext>(0);
}

tree::TerminalNode* TParser::AssignContext::Semicolon() {
  return getToken(TParser::Semicolon, 0);
}

TParser::AssignContext::AssignContext(StatContext *ctx) { copyFrom(ctx); }

void TParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}
void TParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

std::any TParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueContext ------------------------------------------------------------------

tree::TerminalNode* TParser::ContinueContext::Continue() {
  return getToken(TParser::Continue, 0);
}

tree::TerminalNode* TParser::ContinueContext::Semicolon() {
  return getToken(TParser::Semicolon, 0);
}

TParser::ContinueContext::ContinueContext(StatContext *ctx) { copyFrom(ctx); }

void TParser::ContinueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterContinue(this);
}
void TParser::ContinueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitContinue(this);
}

std::any TParser::ContinueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitContinue(this);
  else
    return visitor->visitChildren(this);
}
TParser::StatContext* TParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, TParser::RuleStat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(46);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::ID: {
        _localctx = _tracker.createInstance<TParser::AssignContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(21);
        match(TParser::ID);
        setState(22);
        match(TParser::Assign);
        setState(23);
        expr(0);
        setState(24);
        match(TParser::Semicolon);
        break;
      }

      case TParser::Return: {
        _localctx = _tracker.createInstance<TParser::ReturnContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(26);
        match(TParser::Return);
        setState(27);
        expr(0);
        setState(28);
        match(TParser::Semicolon);
        break;
      }

      case TParser::Break: {
        _localctx = _tracker.createInstance<TParser::BreakContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(30);
        match(TParser::Break);
        setState(31);
        match(TParser::Semicolon);
        break;
      }

      case TParser::Continue: {
        _localctx = _tracker.createInstance<TParser::ContinueContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(32);
        match(TParser::Continue);
        setState(33);
        match(TParser::Semicolon);
        break;
      }

      case TParser::If:
      case TParser::While: {
        _localctx = _tracker.createInstance<TParser::FlowControlContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(34);
        control();
        setState(35);
        match(TParser::OpenPar);
        setState(36);
        cond();
        setState(37);
        match(TParser::ClosePar);
        setState(38);
        match(TParser::OpenCurly);
        setState(40); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(39);
          stat();
          setState(42); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 636) != 0));
        setState(44);
        match(TParser::CloseCurly);
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

//----------------- ControlContext ------------------------------------------------------------------

TParser::ControlContext::ControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::ControlContext::If() {
  return getToken(TParser::If, 0);
}

tree::TerminalNode* TParser::ControlContext::While() {
  return getToken(TParser::While, 0);
}


size_t TParser::ControlContext::getRuleIndex() const {
  return TParser::RuleControl;
}

void TParser::ControlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControl(this);
}

void TParser::ControlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControl(this);
}


std::any TParser::ControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitControl(this);
  else
    return visitor->visitChildren(this);
}

TParser::ControlContext* TParser::control() {
  ControlContext *_localctx = _tracker.createInstance<ControlContext>(_ctx, getState());
  enterRule(_localctx, 4, TParser::RuleControl);
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
    setState(48);
    _la = _input->LA(1);
    if (!(_la == TParser::If

    || _la == TParser::While)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

TParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TParser::CondOpContext* TParser::CondContext::condOp() {
  return getRuleContext<TParser::CondOpContext>(0);
}

std::vector<TParser::ExprContext *> TParser::CondContext::expr() {
  return getRuleContexts<TParser::ExprContext>();
}

TParser::ExprContext* TParser::CondContext::expr(size_t i) {
  return getRuleContext<TParser::ExprContext>(i);
}


size_t TParser::CondContext::getRuleIndex() const {
  return TParser::RuleCond;
}

void TParser::CondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond(this);
}

void TParser::CondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond(this);
}


std::any TParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

TParser::CondContext* TParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 6, TParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    antlrcpp::downCast<CondContext *>(_localctx)->lhs = expr(0);
    setState(51);
    condOp();
    setState(52);
    antlrcpp::downCast<CondContext *>(_localctx)->rhs = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondOpContext ------------------------------------------------------------------

TParser::CondOpContext::CondOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::CondOpContext::Equal() {
  return getToken(TParser::Equal, 0);
}

tree::TerminalNode* TParser::CondOpContext::NotEqual() {
  return getToken(TParser::NotEqual, 0);
}

tree::TerminalNode* TParser::CondOpContext::LessThan() {
  return getToken(TParser::LessThan, 0);
}

tree::TerminalNode* TParser::CondOpContext::GreaterThan() {
  return getToken(TParser::GreaterThan, 0);
}


size_t TParser::CondOpContext::getRuleIndex() const {
  return TParser::RuleCondOp;
}

void TParser::CondOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondOp(this);
}

void TParser::CondOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondOp(this);
}


std::any TParser::CondOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitCondOp(this);
  else
    return visitor->visitChildren(this);
}

TParser::CondOpContext* TParser::condOp() {
  CondOpContext *_localctx = _tracker.createInstance<CondOpContext>(_ctx, getState());
  enterRule(_localctx, 8, TParser::RuleCondOp);
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
    setState(54);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 27648) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

TParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TParser::ExprContext::getRuleIndex() const {
  return TParser::RuleExpr;
}

void TParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IdentContext ------------------------------------------------------------------

tree::TerminalNode* TParser::IdentContext::ID() {
  return getToken(TParser::ID, 0);
}

TParser::IdentContext::IdentContext(ExprContext *ctx) { copyFrom(ctx); }

void TParser::IdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent(this);
}
void TParser::IdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent(this);
}

std::any TParser::IdentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitIdent(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NestedContext ------------------------------------------------------------------

tree::TerminalNode* TParser::NestedContext::OpenPar() {
  return getToken(TParser::OpenPar, 0);
}

TParser::ExprContext* TParser::NestedContext::expr() {
  return getRuleContext<TParser::ExprContext>(0);
}

tree::TerminalNode* TParser::NestedContext::ClosePar() {
  return getToken(TParser::ClosePar, 0);
}

TParser::NestedContext::NestedContext(ExprContext *ctx) { copyFrom(ctx); }

void TParser::NestedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNested(this);
}
void TParser::NestedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNested(this);
}

std::any TParser::NestedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitNested(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* TParser::IntContext::INT() {
  return getToken(TParser::INT, 0);
}

TParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }

void TParser::IntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt(this);
}
void TParser::IntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt(this);
}

std::any TParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryOpContext ------------------------------------------------------------------

TParser::OpContext* TParser::BinaryOpContext::op() {
  return getRuleContext<TParser::OpContext>(0);
}

std::vector<TParser::ExprContext *> TParser::BinaryOpContext::expr() {
  return getRuleContexts<TParser::ExprContext>();
}

TParser::ExprContext* TParser::BinaryOpContext::expr(size_t i) {
  return getRuleContext<TParser::ExprContext>(i);
}

TParser::BinaryOpContext::BinaryOpContext(ExprContext *ctx) { copyFrom(ctx); }

void TParser::BinaryOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOp(this);
}
void TParser::BinaryOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOp(this);
}

std::any TParser::BinaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitBinaryOp(this);
  else
    return visitor->visitChildren(this);
}

TParser::ExprContext* TParser::expr() {
   return expr(0);
}

TParser::ExprContext* TParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  TParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, TParser::RuleExpr, precedence);

    

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
    setState(63);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TParser::OpenPar: {
        _localctx = _tracker.createInstance<NestedContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(57);
        match(TParser::OpenPar);
        setState(58);
        expr(0);
        setState(59);
        match(TParser::ClosePar);
        break;
      }

      case TParser::ID: {
        _localctx = _tracker.createInstance<IdentContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(61);
        antlrcpp::downCast<IdentContext *>(_localctx)->identifier = match(TParser::ID);
        break;
      }

      case TParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(62);
        match(TParser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(71);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<BinaryOpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->lhs = previousContext;
        pushNewRecursionContext(newContext, startState, RuleExpr);
        setState(65);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(66);
        op();
        setState(67);
        antlrcpp::downCast<BinaryOpContext *>(_localctx)->rhs = expr(5); 
      }
      setState(73);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

TParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TParser::OpContext::Star() {
  return getToken(TParser::Star, 0);
}

tree::TerminalNode* TParser::OpContext::Minus() {
  return getToken(TParser::Minus, 0);
}

tree::TerminalNode* TParser::OpContext::Plus() {
  return getToken(TParser::Plus, 0);
}


size_t TParser::OpContext::getRuleIndex() const {
  return TParser::RuleOp;
}

void TParser::OpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp(this);
}

void TParser::OpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp(this);
}


std::any TParser::OpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TParserVisitor*>(visitor))
    return parserVisitor->visitOp(this);
  else
    return visitor->visitChildren(this);
}

TParser::OpContext* TParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 12, TParser::RuleOp);
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
    setState(74);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 458752) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool TParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void TParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  tparserParserInitialize();
#else
  ::antlr4::internal::call_once(tparserParserOnceFlag, tparserParserInitialize);
#endif
}
