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
    const int len = refs.size();
    std::stringstream ss;
    std::string asString;
    for (int i = 0; i < len; i++) {
        asString += refs[i]->toString();
        if (i != len - 1) {
            asString += ", ";
        }
    }
    return "[" + asString + "]";
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

    if (auto ref = val->as<Reference>()) {
        this->refs.push_back(ref);
        return;
    }

    this->refs.push_back(std::make_shared<Reference>(val));
}

int List::operatorPriority() const {
    return 8;
}

int List::size() {
    return this->refs.size();
}

List::List(const std::shared_ptr<Reference> &ref) {
    this->append(ref);
}

List::List() {}
