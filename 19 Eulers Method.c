#include <stdio.h>

// Define the differential equation dy/dx = f(x, y)
float f(float x, float y) {
    return x + y;  // Example: dy/dx = 2*x + y
}

int main() {
    float x0, y0, h, xn, yn;
    int n, i;

    // Input initial values
    printf("Enter initial value of x (x0): ");
    scanf("%f", &x0);
    printf("Enter initial value of y (y0): ");
    scanf("%f", &y0);
    printf("Enter step size (h): ");
    scanf("%f", &h);
    printf("Enter number of steps: ");
    scanf("%d", &n);

    // Euler's method loop
    xn = x0;
    yn = y0;

    for (i = 0; i < n; i++) {
        yn = yn + h * f(xn, yn);
        xn = xn + h;
        printf("After step %d: x = %.4f, y = %.4f\n", i+1, xn, yn);
    }

    printf("Approximate solution at x = %.4f is y = %.4f\n", xn, yn);
    return 0;
}

