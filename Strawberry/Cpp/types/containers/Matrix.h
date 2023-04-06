//
// Created by Patrick on 4/5/2023.
//

#ifndef LIBANTLR4_MATRIX_H
#define LIBANTLR4_MATRIX_H


#include "Container.h"

class Matrix: public Container {
private:
    int rows, columns;

public:
    Matrix(int rows, int columns);

public:
    std::shared_ptr<Reference> get(std::shared_ptr<Value> key) override;

    void append(const std::shared_ptr<Value> &val) override;

    int size() override;

};


#endif //LIBANTLR4_MATRIX_H
