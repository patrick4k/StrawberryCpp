//
// Created by patrick on 3/10/23.
//

#include "StrawberryInterpreter.h"
#include "types/expressions/Number.h"
#include "types/nonexpressions/ValueRef.h"
#include "types/nonexpressions/List.h"
#include "types/expressions/String.h"

namespace antlrcpptest {

    std::any StrawberryInterpreter::visitScript(StrawberryParser::ScriptContext *ctx) {
        this->scope_in();
        StrawberryParserBaseVisitor::visitScript(ctx);
        this->testList();
        this->scope_out();
        return 0;
    }

    void StrawberryInterpreter::testRef() {
        // int x = 11;
        declare("x", std::make_shared<Number>(11));

        // int* y = &x;
        declare("y", std::make_shared<ValueRef>(get_from_memory("x")));

        // x = 22;
        assign("x", std::make_shared<Number>(22));

        // print(x);
        std::cout << get_from_memory("x")->getValue()->asDouble() << std::endl;
        
        // print(y);
        std::cout << get_from_memory("y")->getValue()->asDouble() << std::endl;
    }

    void StrawberryInterpreter::testList() {
        auto lref = declare("l", std::make_shared<List>())->as<List>();
        lref->append(std::make_shared<Number>(12));
        lref->append(std::make_shared<String>("this is a string"));

        std::cout << get_from_memory("l")->as<List>()->get(0)->as<Value>()->asString() << std::endl;
        std::cout << get_from_memory("l")->as<List>()->get(1)->as<Value>()->asString() << std::endl;

        get_from_memory("l")->as<List>()->get(0)->set(std::make_shared<Number>(1000));
        lref->get(1)->set(std::make_shared<Number>(2000));

        std::cout << get_from_memory("l")->as<List>()->get(-1)->as<Value>()->asString() << std::endl;
        std::cout << get_from_memory("l")->as<List>()->get(-2)->as<Value>()->asString() << std::endl;
        std::cout << get_from_memory("l")->as<List>()->get(3)->as<Value>()->asString() << std::endl;
    }

} // antlrcpptest