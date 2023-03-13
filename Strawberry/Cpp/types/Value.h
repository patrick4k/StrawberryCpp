//
// Created by Patrick Kennedy on 3/11/23.
//

#ifndef LIBANTLR4_VALUE_H
#define LIBANTLR4_VALUE_H

#include "tree/ParseTree.h"

class Value {
public:
    Value();

    const std::string &getText() const;

    void setText(const std::string &text);

private:
    std::string text;

};


#endif //LIBANTLR4_VALUE_H
