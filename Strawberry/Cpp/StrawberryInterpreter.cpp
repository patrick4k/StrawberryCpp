//
// Created by patrick on 3/10/23.
//

#include "StrawberryInterpreter.h"
#include "types/expressions/Number.h"

namespace antlrcpptest {

    std::any StrawberryInterpreter::visitScript(StrawberryParser::ScriptContext *ctx) {
        return StrawberryParserBaseVisitor::visitScript(ctx);
    }

    void StrawberryInterpreter::TestScope() {
        auto num1 = std::make_shared<Number>(1.5);
        auto num2 = std::make_shared<Number>(200);

        enterScope();
        declare("a", num1);
        enterScope();
        declare("a", num2);
        std::cout << "a = " << get_from_memory("a")->asDouble() << std::endl;
        exitScope();
        std::cout << "a = " << get_from_memory("a")->asDouble() << std::endl;
    }

} // antlrcpptest