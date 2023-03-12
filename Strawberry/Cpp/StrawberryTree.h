//
// Created by Patrick Kennedy on 3/11/23.
//

#ifndef LIBANTLR4_STRAWBERRYTREE_H
#define LIBANTLR4_STRAWBERRYTREE_H

#include "Value.h"

namespace antlrcpptest {
    class StrawberryTree {
    public:
        static Value visitChildrenValue(antlr4::tree::ParseTree *node) {
            std::cout << "Visiting Children Value" << std::endl;
            return Value();
        }
    };
}

#endif //LIBANTLR4_STRAWBERRYTREE_H
