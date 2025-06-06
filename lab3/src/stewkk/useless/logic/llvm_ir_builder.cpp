#include <stewkk/useless/logic/llvm_ir_builder.hpp>

namespace stewkk::useless::logic {

void Listener::enterCond(codegen::TParser::CondContext * /*ctx*/) {
    std::cout << "enter cond called\n";
}

} // namespace stewkk::useless::logic
