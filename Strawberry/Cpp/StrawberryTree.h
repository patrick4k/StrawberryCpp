//
// Created by Patrick Kennedy on 3/11/23.
//

#ifndef LIBANTLR4_STRAWBERRYTREE_H
#define LIBANTLR4_STRAWBERRYTREE_H

#include "types/Value.h"

namespace antlrcpptest {
    class StrawberryTree {
    public:
        static Value visitChildrenValue(antlr4::tree::ParseTree *node) {
//            std::cout << "Visiting Children Value" << std::endl;
//            std::any result = Value();
//            size_t n = node->children.size();
//            for (size_t i = 0; i < n; i++) {
//
//                std::any childResult = node->children[i]->accept(this);
//                result = aggregateResult(std::move(result), std::move(childResult));
//            }
            return Value();
        }
    };
}

#endif //LIBANTLR4_STRAWBERRYTREE_H
