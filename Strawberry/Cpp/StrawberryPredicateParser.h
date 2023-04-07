//
// Created by Patrick on 4/7/2023.
//

#ifndef LIBANTLR4_STRAWBERRYPREDICATEPARSER_H
#define LIBANTLR4_STRAWBERRYPREDICATEPARSER_H

#include "StrawberryParser.h"

namespace antlrcpptest {

    class StrawberryPredicateParser: public StrawberryParser {
    public:
        explicit StrawberryPredicateParser(antlr4::TokenStream *input);

        template<typename TargetParent>
        TargetParent getFirstParent(antlr4::ParserRuleContext* ctx);

        template<typename TargetParent>
        TargetParent getFirstParent();

        bool isWithinFnDeclare() override;
        bool isWithinLoop() override;

    };

} // antlrcpptest

#endif //LIBANTLR4_STRAWBERRYPREDICATEPARSER_H
