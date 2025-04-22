#include <stdio.h>
#define f(x) (x*x)
 void main() {
    float a, b, h, sum = 0.0;
    int n, i;

    printf("Enter lower limit a: ");
    scanf("%f", &a);
    printf("Enter upper limit b: ");
    scanf("%f", &b);
    printf("Enter number of intervals (multiple of 3): ");
    scanf("%d", &n);

    if (n % 3 != 0) {
        printf("n must be a multiple of 3.\n");
        return 1;
    }

    h = (b - a) / n;
    sum = f(a) + f(b);

    for (i = 1; i < n; i++) {
        float x = a + i * h;
        if (i % 3 == 0)
            sum += 2 * f(x);
        else
            sum += 3 * f(x);
    }

    float result = (3 * h / 8) * sum;
    printf("Approximate integral = %.6f\n", result);

}

