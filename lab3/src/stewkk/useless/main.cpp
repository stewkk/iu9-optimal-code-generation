#include <iostream>

#include <antlr4-runtime.h>
#include <stewkk/useless/codegen/TLexer.h>
#include <stewkk/useless/codegen/TParser.h>

using namespace stewkk::useless::codegen;
using namespace antlr4;

int main() {
  std::ifstream f("example.txt");

  ANTLRInputStream input(f);
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
