//
// Created by Patrick on 4/5/2023.
//

#include "Matrix.h"
#include "List.h"

std::shared_ptr<Reference> Matrix::get(std::shared_ptr<Value> key) {
    if (auto list = key->as<List>()) {

    }
//    else if ()
//   TODO: Finish matrix class
    throw std::runtime_error("Cannot access type " + this->typeName() + " from type " + key->typeName());
}

void Matrix::append(const std::shared_ptr<Value> &val) {

}

int Matrix::size() {
    return 0;
}

Matrix::Matrix(int rows, int columns) : rows(rows), columns(columns) {}
