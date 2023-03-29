//
// Created by patrick on 3/10/23.
//

#include "StrawberryInterpreter.h"
#include "types/expressions/Number.h"
#include "types/CastHandler.h"

namespace antlrcpptest {

    std::any StrawberryInterpreter::visitScript(StrawberryParser::ScriptContext *ctx) {
        this->scope_in();
        StrawberryParserBaseVisitor::visitScript(ctx);
        this->testScope();
        this->scope_out();
        return 0;
    }

    void StrawberryInterpreter::testScope() {

        declare("b", std::shared_ptr<Value>(new Number("355")));
        auto bptr = get_from_memory("b");

        std::cout << "b = " << get_from_memory("b")->getValue()->asDouble() << std::endl;
        std::cout << "b ptr = " << bptr->getValue()->asDouble() << std::endl << std::endl;

        assign("b", std::shared_ptr<Value>(new Number(12)));
        std::cout << "b ~> 12" << std::endl << std::endl;

        std::cout << "b = " << get_from_memory("b")->getValue()->asDouble() << std::endl;
        std::cout << "b ptr = " << bptr->getValue()->asDouble() << std::endl << std::endl;

        auto str = CastHandler::string_from(bptr->getValue());

        std::cout << "b as string = " << str->asString() << std::endl;
    }

} // antlrcpptest