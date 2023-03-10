//
// Created by patrick on 3/7/23.
//

#ifndef LIBANTLR4_STRAWBERRYVISITOR_H
#define LIBANTLR4_STRAWBERRYVISITOR_H

#include "TParserBaseVisitor.h"

namespace antlrcpptest {

    class StrawberryVisitor: public antlrcpptest::TParserBaseVisitor {

    public:
        std::any visitScript(TParser::ScriptContext *ctx) override;

        std::any visitNumberList(TParser::NumberListContext *ctx) override;
    };

} // antlr4

#endif //LIBANTLR4_STRAWBERRYVISITOR_H
