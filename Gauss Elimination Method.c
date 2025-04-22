/*
WAP to solve system of linear equation using Gauss Elimination method.
*/
#include<stdio.h>
#define MAX 10

int main() {
    int n, i, j, k;
    float A[MAX][MAX], x[MAX], ratio;

    // Input number of unknowns
    printf("Enter the number of equations (n): ");
    scanf("%d", &n);

    // Input augmented matrix
    printf("Enter the augmented matrix (A | b):\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j <= n; j++) {  // n+1 columns for augmented matrix
            printf("A[%d][%d] = ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    // Forward Elimination
    for(i = 0; i < n - 1; i++) {
        if(A[i][i] == 0.0) {
            printf("Mathematical Error: Division by zero!\n");
            return -1;
        }
        for(j = i + 1; j < n; j++) {
            ratio = A[j][i] / A[i][i];
            for(k = 0; k <= n; k++) {
                A[j][k] -= ratio * A[i][k];
            }
        }
    }

    // Back Substitution
    x[n - 1] = A[n - 1][n] / A[n - 1][n - 1];

    for(i = n - 2; i >= 0; i--) {
        x[i] = A[i][n];
        for(j = i + 1; j < n; j++) {
            x[i] -= A[i][j] * x[j];
        }
        x[i] /= A[i][i];
    }

    // Display solution
    printf("\nSolution:\n");
    for(i = 0; i < n; i++) {
        printf("x[%d] = %.3f\n", i + 1, x[i]);
    }

    return 0;
}

