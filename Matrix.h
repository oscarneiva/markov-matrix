#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

class Matrix{
    private:
        double **matrix;
        double *sum;
        int n, lines, rows;
        FILE *f;

    public:
        Matrix();
        void generateMatrix();
};

#endif