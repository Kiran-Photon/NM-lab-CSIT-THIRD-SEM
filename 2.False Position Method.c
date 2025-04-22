/*
Numerical Method Lab Sheet Question B.Sc.CSIT 3rd Sem

2. WAP to implement False Position Method.	

	Algorithm
	1. Start
	2. Define the function fx ie. F(x) and error tolerance.
	3. Input the initial guess values a and b.
	4. Compute fa=f(a) and fb=f(b).
	5. Compare fa and fb with the below condition: 
			if(fa*fb>=0) then root will not lies in the given interval so goto step 3 for new guesses value
			else contine from step-6  
	6. Compute c=a-fa*(b-a)/(fb-fa) and fc=f(c).
	7. Check the condition as:
		if fc==0 the print the root as c and go to step 9.
		else if  fc * fa < 0 then set b=c
		else  set a=c
	8.	Test for the accuracy
		if fabs((b-a)/b)<= E then, Print the root as c and goto step 8.
		else goto step 6.
 	9. Stop! 
	
*/

// 1. Start

#include<stdio.h>
#include<math.h>
#include<conio.h>

// 	2. Define the function fx ie. F(x) and error tolerance.

#define F(x) (x*x*x-4*x-9)
#define E 0.0001		// up to three decimal placess or three significant digits after decimal point.

void main()
{
	float a,b,c,fa,fb,fc;

//  3. Input the initial guesses value a and b.

	lebel_1:
	printf("Enter the two intial guess value.");
	scanf("%f%f",&a,&b);
	
// 4. Compute fa=f(a) and fb=f(b).
	fa=F(a);
	fb=F(b);
	
/*	5. Compare fa and fb with the below condition: 
			if(fa*fb>=0) then root will not lies in the given interval so goto step 3 for new guesses value
			else contine from step-6  
*/
	if(fa*fb>=0)
	{
		printf("The root does not converge\n so Enter the correct initial guess value.");
		goto lebel_1;
	}
 	else
	 {
	 
	 		
//	6. Compute c=a-fa*(b-a)/(fb-fa) and fc=f(c).
	Lebel_3:
	c=c=a-fa*(b-a)/(fb-fa);
	fc=F(c);
	
/*
	7. Compare the following case with fc as 
	     if fc==0 then print the root of given equation is c go to step 9 .
	     else if( fc*fa>=0) then set b==c.
	     else set a==c 

*/
	
	if(fc==0)
	{
		printf("The root is %f",c);
		goto lebel_2;
	}
	else if(fc*fa<0)
	{
		b=c;
	}
	else
	{
		a=c;
	}

/*
		8. Test for the accuracy  
	     Compare as if Abs( (b-a)/b ) <=E  print c is the root of the given equation. and goto step 9.
 					else  goto step 6.
*/

	if(fabs((b-a)/b)<=E)
	{
		printf("The root is %f",c);
	}
	else{
		goto Lebel_3;
	}
	}
	
	// Stop!
	
	lebel_2:
		return;
	
}

