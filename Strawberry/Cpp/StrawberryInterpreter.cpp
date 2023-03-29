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
        // int x = 11;
        declare("x", std::make_shared<Number>(11));

        // int* y = &x;
        declare("y",std::make_shared<ValueRef>(get_from_memory("x")));

        // x = 22;
        assign("x",std::make_shared<Number>(22));

        // print(x);
        std::cout << get_from_memory("x")->getValue()->asDouble() << std::endl;
        
        // print(y);
        std::cout << get_from_memory("y")->getValue()->asDouble() << std::endl;
    }

} // antlrcpptest