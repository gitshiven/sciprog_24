#include <stdio.h>
#include "matmult.h"

int main()
{
    double A[N][P], B[P][Q], C[N][Q];

    for (int i=0;i<N;i++)
    {
        for (int j=0;j<P;j++)
        {
            A[i][j]= i+j;
        }
    }

    for (int i=0;i<P;i++)
    {
        for (int j=0;j<Q;j++)
        {
            B[i][j]= i-j;
        }
    }

    for (int i=0;i<N;i++)
    {
        for (int j=0;j<Q;j++)
        {
            C[i][j]= 0.0;
        }
    }

multiply(A, B, C);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < Q; j++) {
            printf("%.2f ", B[i][j]);
        }
        printf("\n");
    }

    // Print matrix C
    printf("Matrix C (Result of A * B):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < Q; j++) {
            printf("%.2f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}