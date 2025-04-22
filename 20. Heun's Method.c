#include <stdio.h>

#define f(x, y) ((y)+(x))  // Example: dy/dx = 2y/x

int main() {
    float x, xp, x0, y0, y, h, m1, m2;

    printf("Enter initial values of x and y:\n");
    scanf("%f%f", &x0, &y0);

    printf("Enter x at which function is to be evaluated:\n");
    scanf("%f", &xp);

    printf("Enter the step size:\n");
    scanf("%f", &h);

    x = x0;
    y = y0;

    while (x + h <= xp + 1e-6) {  // Allow a tiny margin for precision
        m1 = f(x, y);
        m2 = f(x + h, y + h * m1);
        y = y + (h / 2) * (m1 + m2);
        x = x + h;
        printf("At x = %.4f, y = %.3f \n", x, y);
    }

    printf("Final value at x = %.4f is y = %.3f\n", xp, y);
    return 0;
}

