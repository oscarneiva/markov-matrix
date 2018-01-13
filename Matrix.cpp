#include "Matrix.h"

Matrix::Matrix(){
    n = 10;
    lines = n;
    rows = n;    
    f = fopen("plot.txt", "w");
    srand(time(NULL));
}

void Matrix::generateMatrix(){
    matrix = new double *[lines];
    sum = new double [lines];
    
    for(int i = 0; i < lines; i++){
        matrix[i] = new double [rows];
        for(int j = 0; j < rows; j++){
            matrix[i][j] = rand()%10;
            matrix[i][j] = matrix[i][j]/10;
            sum[i] += matrix[i][j];
        }
    }
    
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < rows; j++){
            matrix[i][j] /= sum[i];
            fprintf(f, "%f ", matrix[i][j]);
        }
        fprintf(f, "\n");
    }

    fclose(f);
}