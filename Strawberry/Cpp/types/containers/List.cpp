//
// Created by Patrick on 3/29/2023.
//

#include "List.h"


bool List::isNull() const {
    return false;
}

bool List::toBool() const {
    return !this->refs.empty();
}

double List::toDouble() const {
    return this->refs.size();
}

std::string List::toString() const {
    if (this->refs.size() == 1)
        return "[" + this->refs[0]->toString() + "]";
    std::stringstream ss;
    for (const auto & ref : this->refs) {
        ss << ref->toString() << ", ";
    }
    return "[" + ss.str() + "]";
}

std::shared_ptr<Reference> List::get(int i) {
    int size = this->refs.size();

    if (i >= size) {
        std::shared_ptr<Reference> ref;
        for (int j = size; j <= i; ++j) {
            ref = std::make_shared<Reference>();
            this->refs.push_back(ref);
        }
        return ref;
    }

    if (i < 0) {
        while (abs(i) >= size) {
            i += size;
        }
        return this->refs[(size+i) % size];
    }

    return this->refs[i];
}

std::shared_ptr<Reference> List::get(std::shared_ptr<Value> key) {
    return this->get(key->toDouble());
}

void List::append(const std::shared_ptr<Value> &val) {

    auto ref = val->as<Reference>();

    if (ref) {
        this->refs.push_back(std::make_shared<Reference>(ref));
        return;
    }
    this->refs.push_back(std::make_shared<Reference>(val));
}

int List::operatorPriority() const {
    return 8;
}
