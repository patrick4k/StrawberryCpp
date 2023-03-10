#include <iostream>

#include "antlr4-runtime.h"
#include "TLexer.h"
#include "TParser.h"
#include "StrawberryVisitor.h"

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
    TLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();

    /* Create and Visit Script Tree */
    TParser parser(&tokens);
    auto tree = parser.script();
    auto visitor = antlrcpptest::StrawberryVisitor();
    visitor.visitScript(tree);

    return 0;
}
