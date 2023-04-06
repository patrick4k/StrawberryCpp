#include <iostream>

#include "antlr4-runtime.h"
#include "StrawberryLexer.h"
#include "StrawberryParser.h"
#include "StrawberryInterpreter.h"
#include "util/Warnings.h"

using namespace antlrcpptest;
using namespace antlr4;

int main(const int argc, const char* argv[]) {

    /* Print Argument of Program */
    std::cout << "Args" << std::endl;
    for (int i = 0; i < argc; ++i)
        std::cout << "\t" << i << ": " << argv[i] << std::endl;
    std::cout << std::endl;

    /* DEBUG, if no target is given, default to test.sb */
    if (argv[1] == nullptr)
    {
        argv[1] = R"(C:\Users\Patrick\Documents\Code\ANTLR\StrawberryCpp\Strawberry\test.sb)";
        std::cout << "Replacing argv[1] with: " << argv[1] << std::endl << std::endl;
    }

    /* Read File and Create Token Stream */
    auto input = ANTLRFileStream();
    input.loadFromFile(argv[1]);
    StrawberryLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();

    /* Create and Visit Script Tree */
    StrawberryParser parser(&tokens);
    auto tree = parser.script_();
    auto visitor = std::make_shared<StrawberryInterpreter>();
    Warnings::enable();
    visitor->visitScript_(tree);

    return 0;
}
