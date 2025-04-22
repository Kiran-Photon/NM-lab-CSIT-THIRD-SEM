/*
5. WAP to implement Fixed Point Method.
Algorithm
	1. Start.
	2. Define a function G(x) from the equation F(x)=0  such that x=G(x)
	3. Input the initial guess value Xo.
	4. Estimate the new value i.e. X1 =G(Xo)
	5.	Test for the result and accuracy:
		if (fX1==0) then print the root as X1 and exit.
		if  (fabs((X1-Xo)/X1)<= E)  then, Print the root as X1 and exit.
		else  set, Xo=X1  and goto step 4.
 	6. Stop! 
	
*/

// 	1. Start

#include<stdio.h>
#include<math.h>
#include<conio.h>

// 	2. Define a function F(x) and G(x) such that x=G(x) which is converted from the equation.
#define F(x) (x*x*x-x*x-1)
#define G(x) (1/sqrt(x+1))
#define E 0.001

void main()
{
	float Xo,X1,fX1;
	
//		3. Input the initial guess value Xo.		
	
	printf("Enter the intial guess value.\n");
	scanf("%f",&Xo);
	
//		4. Estimate the new value i.e. X1 =G(Xo)
	Label:
	X1=G(Xo);
	fX1=F(X1);

/*
	5.	Test for the result and accuracy:
		if (fX1==0) then print the root as X1 and exit.
		if  (fabs((X1-Xo)/X1)<= E)  then, Print the root as X1 and exit.
		else  set, a=b and b=c  and goto step 4.

*/
		if(fX1==0) 
	{
   	 printf("The root is %f", X1);
   	 return;
	}
	
	// test for the Accuracy!
	if(fabs((X1-Xo)/X1)<= E)
	{
		printf("The root is %f",X1);
	}
	else{
		Xo=X1;	
		goto Label;
	}
}
	
