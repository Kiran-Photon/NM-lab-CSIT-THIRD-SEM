/*
Wap to find the first and second derivative of a continuous function.
*/

#include <stdio.h>
#define f(x) (x*x+3*x+2)
void main()
 {
    double x, h;
    double first_derivative, second_derivative;

    // Input the point and step size
    printf("Enter the point x: ");
    scanf("%lf", &x);

    printf("Enter small step size h (e.g., 0.001): ");
    scanf("%lf", &h);

    // Calculate first derivative using central difference
    first_derivative = (f(x + h) - f(x - h)) / (2 * h);

    // Calculate second derivative using central difference
    second_derivative = (f(x + h) - 2 * f(x) + f(x - h)) / (h * h);

    // Output the results
    printf("First Derivative at x = %.4lf is %.6lf\n", x, first_derivative);
    printf("Second Derivative at x = %.4lf is %.6lf\n", x, second_derivative);

}

