/*
12. WAP to find integration using Simpson's 1/3 rule.
*/

#include <stdio.h>
#define f(x) (x * x)  // Example function: f(x) = x^2

int main() {
    double a, b, h, sum = 0.0;
    int n, i;

    printf("Enter lower limit a, upper limit b and even number of intervals n: ");
    scanf("%lf %lf %d", &a, &b, &n);  // Corrected: %d for integer n

    // Check if n is even
    if (n % 2 != 0) {
        printf("Number of intervals must be even for Simpson's 1/3 rule.\n");
        return 1;
    }

    h = (b - a) / n;
    sum = f(a) + f(b);

    for (i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0)
            sum += 2 * f(x);
        else
            sum += 4 * f(x);
    }

    double result = (h / 3) * sum;
    printf("Approximate integral = %.4lf\n", result);
    return 0;
}

