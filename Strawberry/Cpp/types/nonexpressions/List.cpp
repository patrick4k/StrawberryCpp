//
// Created by Patrick on 3/29/2023.
//

#include "List.h"

const std::vector<std::shared_ptr<Reference>> &List::getValues() const {
    return refs;
}

void List::append(const std::shared_ptr<Reference>& ref) {
    this->refs.push_back(ref);
}

void List::append(const std::shared_ptr<Value> &val) {
    this->append(std::make_shared<Reference>(val));
}

std::shared_ptr<Reference> List::get(int i) {
    int size = this->refs.size();
    if (i >= size) {
        for (int j = size; j <= i; ++j) {
            this->refs.push_back(std::make_shared<Reference>());
        }
    }
    else if (i < 0) i = -i % size;
    return this->refs[i];
}
