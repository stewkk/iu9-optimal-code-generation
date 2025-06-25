
// Generated from TParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "TParserVisitor.h"


namespace stewkk::useless::codegen {

/**
 * This class provides an empty implementation of TParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TParserBaseVisitor : public TParserVisitor {
public:

  virtual std::any visitMain(TParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(TParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn(TParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreak(TParser::BreakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinue(TParser::ContinueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFlowControl(TParser::FlowControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitControl(TParser::ControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCond(TParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCondOp(TParser::CondOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdent(TParser::IdentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNested(TParser::NestedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(TParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBinaryOp(TParser::BinaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOp(TParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace stewkk::useless::codegen
