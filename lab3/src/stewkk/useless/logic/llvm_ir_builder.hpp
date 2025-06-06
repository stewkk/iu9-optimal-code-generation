#pragma once

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

class Visitor : public codegen::TParserBaseVisitor {
public:
  Visitor();

  const llvm::Module* GetIr() const;

private:
  std::unique_ptr<llvm::LLVMContext> llvm_context_;
  std::unique_ptr<llvm::IRBuilder<llvm::NoFolder>> ir_builder_;
  std::unique_ptr<llvm::Module> ir_module_;
};

} // namespace stewkk::useless::logic
