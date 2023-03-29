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
        auto n = new Number("355");
        declare("b", std::shared_ptr<Value*>(std::shared_ptr<Value*>(new Value*(n))));
        delete n;
        auto bptr = get_from_memory("b");
        auto n_new = new Number(12);
        assign("b", std::shared_ptr<Value*>(std::shared_ptr<Value*>(new Value*(n_new))));
        delete n_new;
        std::cout << "b = " << get_from_memory("b")->asDouble() << std::endl;
        std::cout << "b ptr = " << bptr->asDouble() << std::endl;

//        auto n = new Number("355");
//        declare("b", n->clone());
//
//        auto bptr = get_from_memory("b");
//        auto n_new = new Number(12);
//        assign("b",n_new->clone());
//
//        std::cout << "b = " << get_from_memory("b")->asDouble() << std::endl;
//        std::cout << "b ptr = " << bptr->asDouble() << std::endl;
    }

} // antlrcpptest