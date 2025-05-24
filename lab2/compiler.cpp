#undef _FORTIFY_SOURCE

#include <cstdint>
#include <memory>

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

std::int32_t main() {
  std::unique_ptr<llvm::LLVMContext> llvm_context = std::make_unique<llvm::LLVMContext>();
  std::unique_ptr<llvm::IRBuilder<llvm::NoFolder>> ir_builder = std::make_unique<llvm::IRBuilder<llvm::NoFolder>>(*llvm_context, llvm::NoFolder());
  std::unique_ptr<llvm::Module> ir_module = std::make_unique<llvm::Module>("a+b example", *llvm_context);

  llvm::FunctionType* ft =
    llvm::FunctionType::get(llvm::Type::getInt32Ty(*llvm_context), {}, false);

  llvm::Function* function = llvm::Function::Create(ft, llvm::Function::ExternalLinkage, "main", ir_module.get());

  llvm::BasicBlock *bb = llvm::BasicBlock::Create(*llvm_context, "entry", function);
  ir_builder->SetInsertPoint(bb);

  llvm::Value* ret_val = ir_builder->CreateAdd(
      llvm::ConstantInt::get(*llvm_context, llvm::APInt(32, 353)),
      llvm::ConstantInt::get(*llvm_context, llvm::APInt(32, 48)));

  ir_builder->CreateRet(ret_val);

  llvm::verifyFunction(*function);

  ir_module->print(llvm::errs(), nullptr);

  return 0;
}
