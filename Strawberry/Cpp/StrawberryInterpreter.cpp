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
        enterScope();
        auto num1 = std::make_shared<Number>();
        num1->setValue(12.5);
        declare("a", num1);

        std::shared_ptr<Value> val = retrieve("a");
        std::shared_ptr<Value> val2 = retrieve("a");

        std::cout << "a = " << val->asDouble() << std::endl << "val2 = " << val2->asDouble() << std::endl;
    }

} // antlrcpptest