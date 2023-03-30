//
// Created by Patrick on 3/29/2023.
//

#include "List.h"

const std::vector<std::shared_ptr<Reference>> &List::getValues() const {
    return refs;
}

void List::append_reference(const std::shared_ptr<Reference>& ref) {
    this->refs.push_back(ref);
}

void List::append_copy(const std::shared_ptr<Reference>& ref) {
    this->refs.push_back(std::make_shared<Reference>(ref->as<Value>()->clone()));
}

void List::append(const std::shared_ptr<Value> &val) {
    this->append_copy(std::make_shared<Reference>(val));
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
//        std::cout << "(size+i) % size = " << ((size+i) % size) << std::endl;
        return this->refs[(size+i) % size];
    }
    return this->refs[i];
}

bool List::isNull() const {
    return false;
}

bool List::asBool() const {
    return !this->refs.empty();
}

double List::asDouble() const {
    return this->refs.size();
}

std::string List::asString() const {
    if (this->refs.size() == 1)
        return "[" + this->refs[0]->asString() + "]";
    std::stringstream ss;
    for (const auto & ref : this->refs) {
        ss << ref->asString() << ", ";
    }
    return "[" + ss.str() + "]";
}

std::shared_ptr<Value> List::clone() const {
    return Value::clone();
}
