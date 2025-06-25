#pragma once

#include <map>

#include <llvm/ADT/APInt.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Type.h>
#include <llvm/IR/Verifier.h>
#include <llvm/IR/NoFolder.h>


#include <stewkk/useless/codegen/TParserBaseVisitor.h>
#include <stewkk/useless/codegen/TParserVisitor.h>

namespace stewkk::useless::logic {

class LlvmBuilder : public codegen::TParserBaseVisitor {
public:
  LlvmBuilder();

  virtual std::any visitInt(codegen::TParser::IntContext *ctx) override;
  virtual std::any visitIdent(codegen::TParser::IdentContext *ctx) override;
  virtual std::any visitBinaryOp(codegen::TParser::BinaryOpContext *ctx) override;
  virtual std::any visitFlowControl(codegen::TParser::FlowControlContext *ctx) override;
  virtual std::any visitAssign(codegen::TParser::AssignContext *ctx) override;
  virtual std::any visitReturn(codegen::TParser::ReturnContext *ctx) override;
  virtual std::any visitCond(codegen::TParser::CondContext *ctx) override;

  llvm::AllocaInst* CreateEntryBlockAlloca(llvm::Function *TheFunction,
                                          llvm::StringRef VarName);

  const llvm::Module* GetIr() const;

private:
  std::unique_ptr<llvm::LLVMContext> llvm_context_;
  std::unique_ptr<llvm::IRBuilder<llvm::NoFolder>> ir_builder_;
  std::unique_ptr<llvm::Module> ir_module_;
  std::map<std::string, llvm::AllocaInst*> named_values_;
};

} // namespace stewkk::useless::logic
