//
// Created by Patrick on 4/4/2023.
//

#ifndef LIBANTLR4_WARNINGS_H
#define LIBANTLR4_WARNINGS_H


#include <string>
#include <iostream>
#include <functional>

class Warnings {

private:
    static std::function<void(std::string)> warn_f;

public:
    static void warn(const std::string& msg) {
        warn_f(msg);
    }

    static void enable() {
        warn_f = [](std::string msg){
            std::cout << "WARNING:\n" << msg << std::endl << std::endl;
        };
    }

    static void disable() {
        warn_f = [](std::string msg){};
    }
};

#endif //LIBANTLR4_WARNINGS_H
