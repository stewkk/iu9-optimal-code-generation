
// Generated from TParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "TParserListener.h"


namespace stewkk::useless::codegen {

/**
 * This class provides an empty implementation of TParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TParserBaseListener : public TParserListener {
public:

  virtual void enterMain(TParser::MainContext * /*ctx*/) override { }
  virtual void exitMain(TParser::MainContext * /*ctx*/) override { }

  virtual void enterAssign(TParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(TParser::AssignContext * /*ctx*/) override { }

  virtual void enterReturn(TParser::ReturnContext * /*ctx*/) override { }
  virtual void exitReturn(TParser::ReturnContext * /*ctx*/) override { }

  virtual void enterBreak(TParser::BreakContext * /*ctx*/) override { }
  virtual void exitBreak(TParser::BreakContext * /*ctx*/) override { }

  virtual void enterContinue(TParser::ContinueContext * /*ctx*/) override { }
  virtual void exitContinue(TParser::ContinueContext * /*ctx*/) override { }

  virtual void enterFlowControl(TParser::FlowControlContext * /*ctx*/) override { }
  virtual void exitFlowControl(TParser::FlowControlContext * /*ctx*/) override { }

  virtual void enterControl(TParser::ControlContext * /*ctx*/) override { }
  virtual void exitControl(TParser::ControlContext * /*ctx*/) override { }

  virtual void enterCond(TParser::CondContext * /*ctx*/) override { }
  virtual void exitCond(TParser::CondContext * /*ctx*/) override { }

  virtual void enterCondOp(TParser::CondOpContext * /*ctx*/) override { }
  virtual void exitCondOp(TParser::CondOpContext * /*ctx*/) override { }

  virtual void enterIdent(TParser::IdentContext * /*ctx*/) override { }
  virtual void exitIdent(TParser::IdentContext * /*ctx*/) override { }

  virtual void enterNested(TParser::NestedContext * /*ctx*/) override { }
  virtual void exitNested(TParser::NestedContext * /*ctx*/) override { }

  virtual void enterInt(TParser::IntContext * /*ctx*/) override { }
  virtual void exitInt(TParser::IntContext * /*ctx*/) override { }

  virtual void enterBinaryOp(TParser::BinaryOpContext * /*ctx*/) override { }
  virtual void exitBinaryOp(TParser::BinaryOpContext * /*ctx*/) override { }

  virtual void enterOp(TParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(TParser::OpContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace stewkk::useless::codegen
