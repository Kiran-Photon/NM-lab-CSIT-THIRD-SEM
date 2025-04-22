/*
RK 4th order Method for solving the differential Equation
*/
#include <stdio.h>

int main() {
    double x0, y0, h, k1, k2, k3, k4;
    int steps;

    // Input initial conditions
    printf("Enter initial x0: ");
    scanf("%lf", &x0);
    printf("Enter initial y0: ");
    scanf("%lf", &y0);
    printf("Enter step size (h): ");
    scanf("%lf", &h);
    printf("Enter number of steps: ");
    scanf("%d", &steps);
	int i;
    for (i = 1; i <= steps; i++) {
        // Compute slopes (k1, k2, k3, k4)
        k1 = x0 + y0; // Example: dy/dx = x0 + y0 (Define ODE here)
        k2 = (x0 + h/2) + (y0 + (h/2)*k1);
        k3 = (x0 + h/2) + (y0 + (h/2)*k2);
        k4 = (x0 + h) + (y0 + h*k3);

        // Update y0 using RK4 formula
        y0 = y0 + (h/6) * (k1 + 2*k2 + 2*k3 + k4);
        x0 = x0 + h;

        printf("%d\t%.4f\t%.6f\n", i, x0, y0);
    }

    return 0;
}
