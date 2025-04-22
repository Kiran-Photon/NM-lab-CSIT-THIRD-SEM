// C program to solve ODE by using Taylor's series method
#include <stdio.h>
#include <conio.h>
#include <math.h>

int fact(int n) {
    if (n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}

int main() {
    float x, x0, y0, yx, fdy, sdy, tdy;

    printf("Enter initial values of x & y \n");
    scanf("%f %f", &x0, &y0);

    printf("Enter x at which function to be evaluated \n");
    scanf("%f", &x);

    // First derivative (example: dy/dx = f(x,y) = x + y)
    fdy = (x0) + (y0);  

    // Second derivative: d2y/dx2 = d/dx(f(x,y)) = 1 + dy/dx
    sdy = 2 * (x0) + 2 * (y0) + 2 * fdy;  

    // Third derivative (example logic, assuming d3y/dx3 = constant + combinations)
    tdy = 2 + 2 * y0 * sdy + 2 * fdy * fdy;

    // Taylor series expansion up to 3rd order
    yx = y0 + (x - x0) * fdy + (pow(x - x0, 2) * sdy) / fact(2) + (pow(x - x0, 3) * tdy) / fact(3);

    printf("Function value at x = %f is %f\n", x, yx);

    getch();
    return 0;
}

