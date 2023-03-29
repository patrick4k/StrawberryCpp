//
// Created by Patrick on 3/29/2023.
//

#ifndef LIBANTLR4_LIST_H
#define LIBANTLR4_LIST_H


#include "../Value.h"

class List: public Value {
private:
    std::vector<Value> values = std::vector<Value>();



};


#endif //LIBANTLR4_LIST_H
