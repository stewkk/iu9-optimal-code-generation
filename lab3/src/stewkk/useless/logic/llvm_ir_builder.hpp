#pragma once

#include <stewkk/useless/codegen/TParserBaseListener.h>
#include <stewkk/useless/codegen/TParserListener.h>

namespace stewkk::useless::logic {

class Listener : public codegen::TParserBaseListener {
public:
    virtual void enterCond(codegen::TParser::CondContext * /*ctx*/) override;
};

} // namespace stewkk::useless::logic
