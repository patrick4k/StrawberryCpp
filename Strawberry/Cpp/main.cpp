#include <iostream>

#include "antlr4-runtime.h"
#include "StrawberryLexer.h"
#include "StrawberryParser.h"
#include "StrawberryInterpreter.h"

using namespace antlrcpptest;
using namespace antlr4;

int main(int argc, const char* argv[]) {

    /* Print Argument of Program */
    std::cout << "Args" << std::endl;
    for (int i = 0; i < argc; ++i)
        std::cout << "\t" << i << ": " << argv[i] << std::endl;
    std::cout << std::endl;

    /* Create Token Stream */
    auto input = ANTLRFileStream();
    input.loadFromFile(argv[1]);
    StrawberryLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();

    /* Create and Visit Script Tree */
    StrawberryParser parser(&tokens);
    auto tree = parser.script();
    auto visitor = antlrcpptest::StrawberryInterpreter();
    visitor.visitScript(tree);

    return 0;
}
