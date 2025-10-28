/*Q1: Write a program to input two numbers and display their sum.*/
#include<stdio.h>
int main()
{
	int x,y,sum=0;
	printf("Enter a Number\n");
	scanf("%d",&x);
	printf("Enter another number\n");
	scanf("%d",&y);
	sum=x+y;
	printf("Sum of two numbers is %d\n", sum);
	return 0;
}