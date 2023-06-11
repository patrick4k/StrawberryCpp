//
// Created by Patrick on 5/14/2023.
//

#ifndef LIBANTLR4_ABSTRACTNUMBER_H
#define LIBANTLR4_ABSTRACTNUMBER_H


#include "../../Value.h"

class AbstractNumber: public Value {

public:
    int operatorPriority() const override;

    bool isNull() const override;

    std::string toDisplay() const override;

    std::string typeName() const override;


};


#endif //LIBANTLR4_ABSTRACTNUMBER_H
