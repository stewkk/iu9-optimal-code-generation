#include <stewkk/useless/logic/llvm_ir_builder.hpp>

namespace stewkk::useless::logic {

Visitor::Visitor()
    : llvm_context_(std::make_unique<llvm::LLVMContext>()),
      ir_builder_(
          std::make_unique<llvm::IRBuilder<llvm::NoFolder>>(*llvm_context_, llvm::NoFolder())),
      ir_module_(std::make_unique<llvm::Module>("useless program", *llvm_context_)) {
  llvm::FunctionType* ft =
    llvm::FunctionType::get(llvm::Type::getInt32Ty(*llvm_context_), {}, false);

  llvm::Function* function = llvm::Function::Create(ft, llvm::Function::ExternalLinkage, "main", ir_module_.get());

  llvm::BasicBlock *bb = llvm::BasicBlock::Create(*llvm_context_, "entry", function);

  ir_builder_->SetInsertPoint(bb);
}

const llvm::Module* Visitor::GetIr() const {
    return ir_module_.get();
}

} // namespace stewkk::useless::logic
