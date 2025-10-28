/*Q13.Write a program to input a year and check whether it is a leap year or not using conditional statements.*/
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year to be checked \n");
	scanf("%d",&year);
	if((year%400==0)||(year%4==0&&year%100!=0))
	{
		printf("It is a Leap year\n");
	}
	else
	{
		printf("It is not  a Leap year\n");
	}
	return 0;
}