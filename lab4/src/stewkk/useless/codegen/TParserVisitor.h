
// Generated from TParser.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "TParser.h"


namespace stewkk::useless::codegen {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by TParser.
 */
class  TParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TParser.
   */
    virtual std::any visitMain(TParser::MainContext *context) = 0;

    virtual std::any visitAssign(TParser::AssignContext *context) = 0;

    virtual std::any visitReturn(TParser::ReturnContext *context) = 0;

    virtual std::any visitBreak(TParser::BreakContext *context) = 0;

    virtual std::any visitContinue(TParser::ContinueContext *context) = 0;

    virtual std::any visitFlowControl(TParser::FlowControlContext *context) = 0;

    virtual std::any visitControl(TParser::ControlContext *context) = 0;

    virtual std::any visitCond(TParser::CondContext *context) = 0;

    virtual std::any visitCondOp(TParser::CondOpContext *context) = 0;

    virtual std::any visitIdent(TParser::IdentContext *context) = 0;

    virtual std::any visitNested(TParser::NestedContext *context) = 0;

    virtual std::any visitInt(TParser::IntContext *context) = 0;

    virtual std::any visitBinaryOp(TParser::BinaryOpContext *context) = 0;

    virtual std::any visitOp(TParser::OpContext *context) = 0;


};

}  // namespace stewkk::useless::codegen
