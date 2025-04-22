#include <stdio.h>
#include <math.h>

#define SIZE 10

int main() {
    int n,i,j, max_iter;
    float A[SIZE][SIZE], b[SIZE], x[SIZE], x_new[SIZE];
    float tol;

    // Input the size of the system
    printf("Enter the number of equations (n): ");
    scanf("%d", &n);

    // Input the coefficient matrix A
    printf("Enter the coefficients of matrix A (row-wise):\n");
    for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &A[i][j]);
        }
    }

    // Input the constant vector b
    printf("Enter the constant vector b:\n");
    for ( i = 0; i < n; i++) {
        printf("b[%d]: ", i + 1);
        scanf("%f", &b[i]);
    }

    // Input the initial guess
    printf("Enter the initial guess vector x:\n");
    for ( i = 0; i < n; i++) {
        printf("x[%d]: ", i + 1);
        scanf("%f", &x[i]);
    }

    // Input tolerance and max iterations
    printf("Enter the tolerance: ");
    scanf("%f", &tol);
    printf("Enter the maximum number of iterations: ");
    scanf("%d", &max_iter);

    // Jacobi Iteration
    int iter = 0;
    while (iter < max_iter) {
        float error = 0.0;

        // Calculate new x values
        for (i = 0; i < n; i++) {
            float sum = 0.0;
            for ( j = 0; j < n; j++) {
                if (j != i) {
                    sum += A[i][j] * x[j];
                }
            }
            x_new[i] = (b[i] - sum) / A[i][i];
        }

        // Compute error and update x
        for (i = 0; i < n; i++) {
            float diff = fabs(x_new[i] - x[i]);
            if (diff > error) {
                error = diff;
            }
            x[i] = x_new[i];
        }

        if (error < tol) {
            printf("\nConverged in %d iterations.\n", iter + 1);
            break;
        }

        iter++;
    }

    if (iter == max_iter) {
        printf("\nDid not converge within the maximum number of iterations.\n");
    }

    // Print the result
    printf("Solution:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] = %.6f\n", i + 1, x[i]);
    }

    return 0;
}

