//
// Created by Patrick on 3/30/2023.
//

#include "Hash.h"
#include "Pair.h"

Hash::Hash(): map() {}

std::shared_ptr<Reference> Hash::get(std::shared_ptr<Value> key) {
    auto key_str = key->toString();
    auto iter = map.find(key_str);
    if (iter == map.end()) {
        auto ref = std::make_shared<Reference>();
        map.insert_or_assign(key_str, ref);
        return ref;
    }
    return iter->second;
}

void Hash::append(const std::shared_ptr<Value> &val) {
    auto pair = std::dynamic_pointer_cast<Pair>(val);
    if (!pair) {
        auto ref = std::dynamic_pointer_cast<Reference>(val);
        if (ref) pair = std::dynamic_pointer_cast<Pair>(ref->get_referenced_value());
        if (!pair) throw std::runtime_error("Cannot append non-pair values to hash");
    }
    this->map.insert_or_assign(pair->getKey()->toString(), pair->getValue());
}

bool Hash::isNull() const {
    return false;
}

bool Hash::toBool() const {
    return !map.empty();
}

double Hash::toDouble() const {
    return map.size();
}

std::string Hash::toString() const {
    if (map.size() == 1)
        return "{" + map.begin()->first + ": " + map.begin()->second->toString() + "}";
    std::stringstream ss;
    ss << "{";
    for (auto item = map.begin(); item != map.end(); ++item) {
        ss << item->first + ": " + item->second->toString();
        if (!(std::next(item) == map.end())) ss << ", ";
    }
    ss << "}";
    return ss.str();
}

Hash::~Hash() {

}

int Hash::operatorPriority() const {
    return 8;
}

int Hash::size() {
    return this->map.size();
}
