//
// Created by patrick on 3/10/23.
//

#include "StrawberryInterpreter.h"
#include "types/expressions/Number.h"
#include "types/CastHandler.h"
#include "types/nonexpressions/ValueRef.h"

namespace antlrcpptest {

    std::any StrawberryInterpreter::visitScript(StrawberryParser::ScriptContext *ctx) {
        this->scope_in();
        StrawberryParserBaseVisitor::visitScript(ctx);
        this->testRef();
        this->scope_out();
        return 0;
    }

    void StrawberryInterpreter::testRef() {
        declare("x", std::make_shared<Number>(11));
        auto ref1 = ValueRef(get_from_memory("x"));
        assign("x", std::make_shared<Number>(22));
        std::cout << get_from_memory("x")->getValue()->asDouble() << std::endl;
        std::cout << ref1.asDouble() << std::endl;
    }

} // antlrcpptest