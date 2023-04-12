//
// Created by Patrick on 4/7/2023.
//

#ifndef LIBANTLR4_STRAWBERRYPREDICATEPARSER_H
#define LIBANTLR4_STRAWBERRYPREDICATEPARSER_H

#include "StrawberryParser.h"

namespace strawberrycpp {

    class StrawberryPredicateParser: public StrawberryParser {
    public:
        explicit StrawberryPredicateParser(antlr4::TokenStream *input);

        template<typename TargetParent>
        TargetParent getFirstParent(antlr4::ParserRuleContext* ctx);

        template<typename TargetParent>
        TargetParent getFirstParent();

        bool isWithinFn() override;

        bool isWithinLoop() override;

    };

} // strawberrycpp

#endif //LIBANTLR4_STRAWBERRYPREDICATEPARSER_H
