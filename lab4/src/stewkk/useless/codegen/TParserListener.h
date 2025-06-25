
// Generated from TParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "TParser.h"


namespace stewkk::useless::codegen {

/**
 * This interface defines an abstract listener for a parse tree produced by TParser.
 */
class  TParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMain(TParser::MainContext *ctx) = 0;
  virtual void exitMain(TParser::MainContext *ctx) = 0;

  virtual void enterAssign(TParser::AssignContext *ctx) = 0;
  virtual void exitAssign(TParser::AssignContext *ctx) = 0;

  virtual void enterReturn(TParser::ReturnContext *ctx) = 0;
  virtual void exitReturn(TParser::ReturnContext *ctx) = 0;

  virtual void enterBreak(TParser::BreakContext *ctx) = 0;
  virtual void exitBreak(TParser::BreakContext *ctx) = 0;

  virtual void enterContinue(TParser::ContinueContext *ctx) = 0;
  virtual void exitContinue(TParser::ContinueContext *ctx) = 0;

  virtual void enterFlowControl(TParser::FlowControlContext *ctx) = 0;
  virtual void exitFlowControl(TParser::FlowControlContext *ctx) = 0;

  virtual void enterControl(TParser::ControlContext *ctx) = 0;
  virtual void exitControl(TParser::ControlContext *ctx) = 0;

  virtual void enterCond(TParser::CondContext *ctx) = 0;
  virtual void exitCond(TParser::CondContext *ctx) = 0;

  virtual void enterCondOp(TParser::CondOpContext *ctx) = 0;
  virtual void exitCondOp(TParser::CondOpContext *ctx) = 0;

  virtual void enterIdent(TParser::IdentContext *ctx) = 0;
  virtual void exitIdent(TParser::IdentContext *ctx) = 0;

  virtual void enterNested(TParser::NestedContext *ctx) = 0;
  virtual void exitNested(TParser::NestedContext *ctx) = 0;

  virtual void enterInt(TParser::IntContext *ctx) = 0;
  virtual void exitInt(TParser::IntContext *ctx) = 0;

  virtual void enterBinaryOp(TParser::BinaryOpContext *ctx) = 0;
  virtual void exitBinaryOp(TParser::BinaryOpContext *ctx) = 0;

  virtual void enterOp(TParser::OpContext *ctx) = 0;
  virtual void exitOp(TParser::OpContext *ctx) = 0;


};

}  // namespace stewkk::useless::codegen
