#include "matmult.h"

// Function to perform matrix multiplication
void multiply(double A[N][P], double B[P][Q], double C[N][Q]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < Q; j++) {
            C[i][j] = 0.0;  // Initialize C[i][j] to zero
            for (int k = 0; k < P; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}