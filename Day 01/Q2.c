/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.*/
#include<stdio.h>
int main()
{
	int x,y,sum=0,dif=0,mul=0;
	float div;
	printf("Enter first Number\n");
	scanf("%d",&x);
	printf("Enter second number\n");
	scanf("%d",&y);
	sum=x+y;
	dif=x-y;
	mul=x*y;
	if(y!=0)
	{
		div=(float)x/y;
	}
	printf("Sum of two numbers is %d\n", sum);
	printf("Difference of two numbers is %d\n", dif);
	printf("Multipication of two numbers is %d\n", mul);
	if(y!=0)
	{
		printf("Quotients is %f\n", div);
	}
	else
	{
		printf("Division by zero not allowed");
	}
	return 0;
}


