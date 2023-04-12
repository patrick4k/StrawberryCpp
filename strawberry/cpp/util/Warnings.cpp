//
// Created by Patrick on 4/4/2023.
//

#include "Warnings.h"

std::function<void(std::string)> Warnings::warn_f = [](const std::string& /*msg*/){};
