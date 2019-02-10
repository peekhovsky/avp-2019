//
// Created by Rostislav Pekhovsky on 2019-02-07.
//

#ifndef LAB1_1_OUTER_MATRIX_H
#define LAB1_1_OUTER_MATRIX_H

#include "InnerMatrix.h"

class BigMatrix {
    InnerMatrix*** pointer;
    int size;

public:
    explicit BigMatrix(int size, int innerMatrixSize);
    BigMatrix* MultiplyVectorized(BigMatrix *matrix2);
    BigMatrix* MultiplyNotVectorized(BigMatrix *matrix2);
    void InitRandomFloat();
};

#endif //LAB1_1_OUTERMATRIX_H
