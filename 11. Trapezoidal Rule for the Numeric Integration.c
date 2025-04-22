/*
11. WAP to find integration using trapezoidal rule.
*//*
WAP to find integration using trapezoidal rule.
*/

#include <stdio.h>
#define f(x) (x*x)
void main() {
    double a, b, h, sum = 0.0;
    int n, i;

    // Input limits and number of intervals
    printf("Enter lower limit a: ");
    scanf("%lf", &a);
    printf("Enter upper limit b: ");
    scanf("%lf", &b);
    printf("Enter number of intervals n: ");
    scanf("%d", &n);

    // Calculate step size
    h = (b - a) / n;

    // Apply trapezoidal rule
    sum = f(a) + f(b);
    for (i = 1; i < n; i++) {
        double x = a + i * h;
        sum += 2 * f(x);
    }

    double result = (h / 2) * sum;

    // Output the result
    printf("Approximate value of the integral = %.6lf\n", result);
 
}

