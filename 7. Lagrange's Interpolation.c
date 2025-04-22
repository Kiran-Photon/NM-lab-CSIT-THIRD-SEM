/*
7. WAP to implement lagrange's interpolation.
*/

#include <stdio.h>

int main() {
    int n, i, j;
    float X;

    printf("Enter the number of data points: ");
    scanf("%d", &n);

    float x[n], y[n], L[n];

    // Input data points
    for(i = 0; i < n; i++) {
        printf("x%d = ", i);
        scanf("%f", &x[i]);
        printf("y%d = ", i);
        scanf("%f", &y[i]);
    }

    printf("Enter the point x at which value of y is to be calculated: ");
    scanf("%f", &X);

    // Calculate basis polynomials
    for(i = 0; i < n; i++) {
        L[i] = 1;
        for(j = 0; j < n; j++) {
            if(i != j) {
                L[i] *= (X - x[j]) / (x[i] - x[j]);  // ? Correct formula
            }
        }
    }

    // Compute interpolated value
    float s = 0;
    for(i = 0; i < n; i++) {
        s += y[i] * L[i];  // ? Use float
    }

    printf("The value of y at the point x = %.2f is %.4f\n", X, s);

    return 0;
}

