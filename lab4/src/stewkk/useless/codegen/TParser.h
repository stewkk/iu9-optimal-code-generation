
// Generated from TParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"


namespace stewkk::useless::codegen {


class  TParser : public antlr4::Parser {
public:
  enum {
    DUMMY = 1, Return = 2, Continue = 3, Break = 4, If = 5, While = 6, INT = 7, 
    Digit = 8, ID = 9, LessThan = 10, GreaterThan = 11, Assign = 12, Equal = 13, 
    NotEqual = 14, Semicolon = 15, Plus = 16, Minus = 17, Star = 18, OpenPar = 19, 
    ClosePar = 20, OpenCurly = 21, CloseCurly = 22, Comment = 23, WS = 24
  };

  enum {
    RuleMain = 0, RuleStat = 1, RuleControl = 2, RuleCond = 3, RuleCondOp = 4, 
    RuleExpr = 5, RuleOp = 6
  };

  explicit TParser(antlr4::TokenStream *input);

  TParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~TParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class MainContext;
  class StatContext;
  class ControlContext;
  class CondContext;
  class CondOpContext;
  class ExprContext;
  class OpContext; 

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatContext() = default;
    void copyFrom(StatContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ReturnContext : public StatContext {
  public:
    ReturnContext(StatContext *ctx);

    antlr4::tree::TerminalNode *Return();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Semicolon();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FlowControlContext : public StatContext {
  public:
    FlowControlContext(StatContext *ctx);

    ControlContext *control();
    antlr4::tree::TerminalNode *OpenPar();
    CondContext *cond();
    antlr4::tree::TerminalNode *ClosePar();
    antlr4::tree::TerminalNode *OpenCurly();
    antlr4::tree::TerminalNode *CloseCurly();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BreakContext : public StatContext {
  public:
    BreakContext(StatContext *ctx);

    antlr4::tree::TerminalNode *Break();
    antlr4::tree::TerminalNode *Semicolon();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignContext : public StatContext {
  public:
    AssignContext(StatContext *ctx);

    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *Assign();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Semicolon();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ContinueContext : public StatContext {
  public:
    ContinueContext(StatContext *ctx);

    antlr4::tree::TerminalNode *Continue();
    antlr4::tree::TerminalNode *Semicolon();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatContext* stat();

  class  ControlContext : public antlr4::ParserRuleContext {
  public:
    ControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *While();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlContext* control();

  class  CondContext : public antlr4::ParserRuleContext {
  public:
    TParser::ExprContext *lhs = nullptr;
    TParser::ExprContext *rhs = nullptr;
    CondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CondOpContext *condOp();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondContext* cond();

  class  CondOpContext : public antlr4::ParserRuleContext {
  public:
    CondOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *NotEqual();
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *GreaterThan();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CondOpContext* condOp();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IdentContext : public ExprContext {
  public:
    IdentContext(ExprContext *ctx);

    antlr4::Token *identifier = nullptr;
    antlr4::tree::TerminalNode *ID();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NestedContext : public ExprContext {
  public:
    NestedContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *OpenPar();
    ExprContext *expr();
    antlr4::tree::TerminalNode *ClosePar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntContext : public ExprContext {
  public:
    IntContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryOpContext : public ExprContext {
  public:
    BinaryOpContext(ExprContext *ctx);

    TParser::ExprContext *lhs = nullptr;
    TParser::ExprContext *rhs = nullptr;
    OpContext *op();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *Plus();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpContext* op();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace stewkk::useless::codegen
