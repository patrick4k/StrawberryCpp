//
// Created by Patrick Kennedy on 3/11/23.
//

#include "Value.h"

Value::Value() {
    setText("Null");
}

const std::string &Value::getText() const {
    return text;
}

void Value::setText(const std::string &text) {
    Value::text = text;
}
