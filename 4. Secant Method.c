/*

4. WAP to implement Secant Method.
Algorithm
	1. Start
	2. Define the function fx ie. F(x) and error tolerance.
	3. Input the initial guess values a and b.
	4. Calculate fa=F(a) and fa=F(a).
	5. Calculate c=b-fb*(b-a)/(fb-fa) and fc-F(c). 
	6.	Test for the result and accuracy:
		if (fc==0) then print the root as c and exit.
		if  (fabs((c-b)/c)<= E)  then, Print the root as c and exit.
		else  set, a=b and b=c  and goto step 4.
 	7. Stop! 
	

*/

// 	1. Start

#include<stdio.h>
#include<math.h>
#include<conio.h>

// 	2. Define the function fx ie. F(x) and error tolerance.

#define F(x) (x*x*x-2*x-5)
#define E 0.001


void main()
{
	float a,b,c,fa,fb,fc;

//	3. Input the initial guess values a and b.		
	
	printf("Enter the two intial guess value.\n");
	scanf("%f%f",&a,&b);
	
// 	4. Calculate fa=F(a) and fa=F(a).	
	Label:	
	fa=F(a);
	fb=F(b);

//	5. Calculate c=b-fb*(b-a)/(fb-fa) and fc-F(c).

	c=b-fb*(b-a)/(fb-fa);
	fc=F(c);
	
/*
		6.	Test for the result and accuracy:
		if (fc==0) then print the root as c and exit.
		if  (fabs((c-b)/c)<= E)  then, Print the root as c and exit.
		else  set, a=b and b=c  and goto step 4.
*/	
	if (fc == 0.0) 
	{
   	 printf("The root is %f", c);
   	 return;
	}
	
	// test for the Accuracy!
	if(fabs((c-b)/c)<=E)
	{
		printf("The root is %f",c);
	}
	else{
		a=b;
		b=c;
		goto Label;
	}
	
	// Stop!
	
	}
	
