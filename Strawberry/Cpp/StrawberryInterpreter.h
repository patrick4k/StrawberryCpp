//
// Created by patrick on 3/10/23.
//

#ifndef LIBANTLR4_STRAWBERRYINTERPRETER_H
#define LIBANTLR4_STRAWBERRYINTERPRETER_H

#include "StrawberryParserBaseVisitor.h"
#include "Value.h"

namespace antlrcpptest {

    class StrawberryInterpreter: public StrawberryParserBaseVisitor {
    public:
        /*
         *
     * <p>The default implementation initializes the aggregate result to
     * {@link #defaultResult defaultResult()}. Before visiting each child, it
     * calls {@link #shouldVisitNextChild shouldVisitNextChild}; if the result
     * is {@code false} no more children are visited and the current aggregate
     * result is returned. After visiting a child, the aggregate result is
     * updated by calling {@link #aggregateResult aggregateResult} with the
     * previous aggregate result and the result of visiting the child.</p>
     *
     * <p>The default implementation is not safe for use in visitors that modify
     * the tree structure. Visitors that modify the tree should override this
     * method to behave properly in respect to the specific algorithm in use.</p>
     *
        virtual std::any visitChildren(ParseTree *node) override {
            std::any result = defaultResult();
            size_t n = node->children.size();
            for (size_t i = 0; i < n; i++) {
                if (!shouldVisitNextChild(node, result)) {
                    break;
                }

                std::any childResult = node->children[i]->accept(this);
                result = aggregateResult(std::move(result), std::move(childResult));
            }

            return result;
        }
        */


        /*
         for (auto n: ctx->Number()) {
            std::cout << "Found  " << n->getText() << "!" << std::endl;
        }*/

    };

} // antlrcpptest

#endif //LIBANTLR4_STRAWBERRYINTERPRETER_H
