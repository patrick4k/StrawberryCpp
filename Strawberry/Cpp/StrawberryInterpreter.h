//
// Created by patrick on 3/10/23.
//

#ifndef LIBANTLR4_STRAWBERRYINTERPRETER_H
#define LIBANTLR4_STRAWBERRYINTERPRETER_H

#include "StrawberryParserBaseVisitor.h"

namespace antlrcpptest {

    class StrawberryInterpreter: StrawberryParserBaseVisitor {
    public:
        std::any visitScript(StrawberryParser::ScriptContext *ctx) override;

        std::any visitNumberList(StrawberryParser::NumberListContext *ctx) override;

    };

} // antlrcpptest

#endif //LIBANTLR4_STRAWBERRYINTERPRETER_H
