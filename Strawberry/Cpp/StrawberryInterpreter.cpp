//
// Created by patrick on 3/10/23.
//

#include "StrawberryInterpreter.h"

#include <memory>
#include "types/expressions/Number.h"
#include "types/containers/List.h"
#include "types/expressions/String.h"
#include "types/containers/Pair.h"
#include "types/containers/Hash.h"

namespace antlrcpptest {

    std::any StrawberryInterpreter::visitScript(StrawberryParser::ScriptContext *ctx) {
        this->scope_in();
        StrawberryParserBaseVisitor::visitScript(ctx);
        this->castTesting();
        this->scope_out();
        return 0;
    }

    void StrawberryInterpreter::testRef() {

        auto x = declare("x", std::make_shared<Number>(11)); // new
        auto y = declare("y", get_from_memory("x")->copy_value()); // copy
        auto z = declare("z", get_from_memory("x")); // reference

        assign("x", std::make_shared<Number>(22));

        std::cout << "x = " << x->toString() << std::endl;
        std::cout << "y = " << y->toString() << std::endl;
        std::cout << "z = " << z->toString() << std::endl;
    }

    void StrawberryInterpreter::testList() {
        auto lref = declare("l", std::make_shared<List>())->deref<List>();
        lref->append(std::make_shared<Number>(1));
        lref->append(std::make_shared<Number>(2));
        lref->append(std::make_shared<Number>(3));

        std::cout << get_from_memory("l")->deref<List>()->get(0)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(1)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(2)->toString() << std::endl << std::endl;

        std::cout << get_from_memory("l")->deref<List>()->get(-0)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(-1)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(-2)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(-3)->toString() << std::endl;
        std::cout << get_from_memory("l")->deref<List>()->get(-4)->toString() << std::endl;
    }

    void StrawberryInterpreter::moreListTesting() {

        auto x = declare("x", std::make_shared<Number>(12));
        auto l = declare("l", std::make_shared<List>())->deref<List>();

        l->append(x->copy_value());

        std::cout << l->toString() << std::endl;

        x->set(std::make_shared<Number>(1));

        std::cout << l->toString();
    }

    void StrawberryInterpreter::pairHashTesting() {

        auto s1 = declare("s1", std::make_shared<String>("key1"));
        auto s2 = declare("s2", std::make_shared<String>("key2"));

        auto n1 = declare("n1", std::make_shared<Number>(1));
        auto n2 = declare("n2", std::make_shared<Number>(2));

        auto p1 = declare("p1", std::make_shared<Pair>(s1,n1->copy_to_reference()));
        auto p2 = declare("p2", std::make_shared<Pair>(s2,n1));

        assign("n1", std::make_shared<Number>(2));
        std::cout << "p = " << get_from_memory("p1")->toString() << std::endl;

        auto hash = declare("hash", std::make_shared<Hash>());
        hash->deref<Container>()->append(p1);
        hash->deref<Container>()->append(p2);

        std::cout << "hash = " << hash->toString();

    }

    void StrawberryInterpreter::castTesting() {

        auto ptr = declare("x", std::make_shared<Number>(1));
        auto castedCorrect = ptr->deref()->as<Number>();
        auto castedBad = ptr->deref()->as<List>();

        std::cout << std::endl << ptr->toString();

    }

} // antlrcpptest