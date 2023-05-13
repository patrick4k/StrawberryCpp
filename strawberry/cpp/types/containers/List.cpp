//
// Created by Patrick on 3/29/2023.
//

#include "List.h"

#include <utility>

List::List() {
    this->refs = std::vector<std::shared_ptr<Reference>>();
}

List::List(const std::shared_ptr<Reference> &ref) {
    this->refs = std::vector<std::shared_ptr<Reference>>();
    this->append(ref);
}

List::List(std::vector<std::shared_ptr<Reference>> refs) : refs(std::move(refs)) {}

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
    if (auto index_list = key->as<List>()) {
        auto return_list = std::make_shared<List>();
        for (int i = 0; i < index_list->size(); ++i) {
            return_list->append(this->get(index_list->get(i)->toDouble()));
        }
        return std::make_shared<Reference>(return_list);
    }
    return this->get(key->toDouble());
}

int List::operatorPriority() const {
    return 0;
}

int List::size() {
    return this->refs.size();
}

std::string List::typeName() const {
    return "list";
}

void List::append(const std::shared_ptr<Value> &val) {
    this->refs.push_back(std::make_shared<Reference>(val));
}

void List::shift(const std::shared_ptr<Value> &val) {
    this->insert(0, val);
}

void List::insert(int i, const std::shared_ptr<Value> &val) {
    if (auto ref = val->as<Reference>()) {
        this->refs.emplace(this->refs.begin() + i, ref);
        return;
    }
    this->refs.emplace(this->refs.begin() + i, std::make_shared<Reference>(val));
}

const std::vector<std::shared_ptr<Reference>> &List::getRefs() const {
    return refs;
}
