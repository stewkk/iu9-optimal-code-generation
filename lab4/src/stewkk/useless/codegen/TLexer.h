
// Generated from TLexer.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"


namespace stewkk::useless::codegen {


class  TLexer : public antlr4::Lexer {
public:
  enum {
    DUMMY = 1, Return = 2, Continue = 3, Break = 4, If = 5, While = 6, INT = 7, 
    Digit = 8, ID = 9, LessThan = 10, GreaterThan = 11, Assign = 12, Equal = 13, 
    NotEqual = 14, Semicolon = 15, Plus = 16, Minus = 17, Star = 18, OpenPar = 19, 
    ClosePar = 20, OpenCurly = 21, CloseCurly = 22, Comment = 23, WS = 24
  };

  enum {
    CommentsChannel = 2
  };

  explicit TLexer(antlr4::CharStream *input);

  ~TLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace stewkk::useless::codegen
