/*
9. WAP to implement fitting a transcendental equation.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    
      // Input number of data points
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    
    float x[n], y[n];
    float sumX = 0.0, sumY = 0.0, sumXY = 0.0, sumX2 = 0.0;
    float A, a, b;

    // Input data
    printf("Enter the data points (x and y):\n");
    for (i = 0; i < n; i++) 
	{
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }

    // Transform and compute the necessary sums
    for (i = 0; i < n; i++) {
        float X = log(x[i]);
        float Y = log(y[i]);
        sumX += X;
        sumY += Y;
        sumXY += X * Y;
        sumX2 += X * X;
    }

    // Calculate b and A (A = log(a))
    b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    A = (sumY - b * sumX) / n;

    // Convert back to a
    a = exp(A);

    // Output the result
    printf("\nThe fitted curve is: y = %.4f * x^%.4f\n", a, b);

    return 0;
}

