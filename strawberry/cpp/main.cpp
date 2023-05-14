#include <iostream>

#include "antlr4-runtime.h"
#include "StrawberryLexer.h"
#include "StrawberryInterpreter.h"
#include "StrawberryPredicateParser.h"
#include "util/Options.h"

using namespace strawberrycpp;
using namespace antlr4;

int main(const int argc, const char* argv[]) {

    /* Print Argument of Program */
    std::cout << "Args" << std::endl;
    for (int i = 0; i < argc; ++i)
        std::cout << "\t" << i << ": " << argv[i] << '\n';
    std::cout << std::endl;

    /* Read File and Create Token Stream */
    auto input = ANTLRFileStream();
    input.loadFromFile(argv[1]);
    StrawberryLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();

    /* Create and Visit Script Tree */
    StrawberryPredicateParser parser(&tokens);
    auto tree = parser.script_();
    auto visitor = std::make_shared<StrawberryInterpreter>();
    SbUtil::ProcessArgs(visitor, argc, argv);
    visitor->visitScript_(tree);
    return 0;
}
