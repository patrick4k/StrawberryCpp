//
// Created by Patrick on 5/14/2023.
//

#ifndef LIBANTLR4_OPTIONS_H
#define LIBANTLR4_OPTIONS_H

#include <memory>
#include "Warnings.h"
#include "../StrawberryInterpreter.h"

namespace SbUtil {
    void ProcessArgs(std::shared_ptr<strawberrycpp::StrawberryInterpreter> visitor, int argc, const char* argv[]);
}

#endif //LIBANTLR4_OPTIONS_H
