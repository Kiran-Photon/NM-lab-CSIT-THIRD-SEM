/*
6. WAP to implement linear interpolation.

Algorithm 
	1. Start.
	2. Input two known data points:
	   -(x0,y0) and (x1,y1)
	3.Input the value of x for which you want to find y, where x0 < x < x1
	4. Apply the formula:
		
		y = y0 + (x-x0)*(y1-y0)/(x1-x0)
		
	6. Stop!
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	float x0,y0,x1,y1,x,y;
	
	printf("Enter the first known points.\n");
	scanf("%f%f",&x0,&y0);
	
	printf("Enter the second known points.");
	scanf("%f%f",&x1,&y1);
	
	Label:
	printf("Enter the value of x for which you want to find y: ");
    scanf("%f", &x);
	
	if (x < x0 || x > x1) 
	{
        printf("X is not between x0 and x1.\n Input again the value of x.\n");
        goto Label;
	}
	
	 y = y0 + ((x - x0) * (y1 - y0)) / (x1 - x0);
	 
	 printf("The interpolated value at x = %.2f is y = %.4f\n", x, y);
	
}
