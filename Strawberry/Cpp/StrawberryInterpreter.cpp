//
// Created by patrick on 3/10/23.
//

#include "StrawberryInterpreter.h"
#include "types/expressions/Number.h"

namespace antlrcpptest {

    std::any StrawberryInterpreter::visitScript(StrawberryParser::ScriptContext *ctx) {
        this->scope_in();
        StrawberryParserBaseVisitor::visitScript(ctx);
        TestScope();
        this->scope_out();
        return 0;
    }

    void StrawberryInterpreter::TestScope() {

        declare("b", std::shared_ptr<Value>(new Number("355")));

        auto bptr = get_from_memory("b");

        std::cout << "b ptr = " << bptr->getValue()->asDouble() << std::endl;

        assign("b", std::shared_ptr<Value>(new Number(12)));

        std::cout << "b = " << get_from_memory("b")->getValue()->asDouble() << std::endl;
        std::cout << "b ptr = " << bptr->getValue()->asDouble() << std::endl;
    }

} // antlrcpptest