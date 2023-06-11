//
// Created by Patrick on 5/14/2023.
//

#include "Options.h"

namespace SbUtil {

    void ProcessArgs(std::shared_ptr<strawberrycpp::StrawberryInterpreter> visitor, int argc, const char **argv) {
        for (int i = 0; i < argc; ++i) {
            std::string arg = argv[i];
            if (arg == "-w") {
                Warnings::enable();
            }
        }
    }

}
