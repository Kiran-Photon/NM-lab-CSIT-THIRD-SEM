/*
 8. WAP to implement straight line curve fitting.
 
 Algorithm
 	1. Start
 	2. Input the number of data points 'n'.
 	3. Input each data element associated with the data points x[i] and y[i].
 	4. Compute
 		- Sum of Xi.Yi
 		- Sum of Xi
 		- Sum of yi
 		- sum of xi * xi
 		
 	&	
 		b = ( ( n * sum (xi . yi) )- (Sum xi * Sum yi) ) / (( n * sum (xi * xi )) - (sum (xi) sum(xi )));
 		a= ( Sum yi - b * sum yi) / n; 
 	
	 5. Print the equation as y = a + b * x
	 6. Stop !  
*/

#include <stdio.h>

void main() 
{
    int n, i;
    float sum_x = 0.0, sum_y = 0.0, sum_xy = 0.0, sum_x2 = 0.0;
    float a, b;

    // Input the number of data points
    printf("Enter the number of data points: ");
    scanf("%d", &n);

    float x[n], y[n];

    // Input each data point and update sums
    for (i = 0; i < n; i++) {
        printf("Enter x[%d] and y[%d]: ", i, i);
        scanf("%f %f", &x[i], &y[i]);
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    // Calculate slope (b) and intercept (a)
    b = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    a = (sum_y - b * sum_x) / n;

    // Print the straight line equation
    printf("The best fit line is: y = %.2f + %.2f*x\n", a, b);

}

