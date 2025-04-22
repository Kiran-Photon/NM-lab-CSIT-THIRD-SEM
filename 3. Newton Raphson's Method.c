/*
Numerical Method Lab Sheet Question B.Sc.CSIT 3rd Sem

3. WAP to implement Newton Raphson Method.

	Algorithm
	1. Start
	2. Define the function fx ie. F(x) and error tolerance.
	3. Input the initial guess value Xo.
	4. Calculate fo=F(Xo) and Go=G(Xo)=F'(x)
	5. Calculate X_new= Xo -F(Xo)/G(Xo) and F(X_new)
	6.	Test for the accuracy
		if (F(X_new)==0) then prin the root as X_new and exit.
		if  (fabs((X_new-Xo)/X_new)<= E)  then, Print the root as X_new and exit.
		else  set, Xo=X_new  and goto step 4.
 	7. Stop! 
	
*/

#include<stdio.h>
#include<math.h>
#include<conio.h>

#define F(x) (x*x*x+5*x-3)
#define E 0.001
#define G(x) (3*x*x+5)

void main()
{
	float Xo,X_new,fo,go,fx_new;
	printf("Enter the intial guess value.");
	scanf("%f",&Xo);
	
	Label:
	fo=F(Xo);
	go=G(Xo);
	
	X_new=Xo-fo/go;
	fx_new=F(X_new);
	if (fx_new==0)
	{
	printf("The root is %f",X_new);	
	return;
	}
	if(fabs((X_new-Xo)/X_new)<=E)
	{
		printf("The root is %f",X_new);
	}
	else{
		Xo=X_new;
		goto Label;
	}
	}
	
