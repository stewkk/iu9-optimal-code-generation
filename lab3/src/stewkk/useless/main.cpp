#include <iostream>
#include <string_view>

#include <antlr4-runtime.h>
#include <stewkk/useless/codegen/TLexer.h>
#include <stewkk/useless/codegen/TParser.h>

using std::string_view_literals::operator""sv;

using namespace stewkk::useless::codegen;
using namespace antlr4;

int main() {
  ANTLRInputStream input("🍴 = 🍐 + \"😎\";(((x * π))) * µ + ∰; a + (x * (y ? 0 : 1) + z);"sv);
  TLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  TParser parser(&tokens);
  tree::ParseTree* tree = parser.main();

  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  return 0;
}
