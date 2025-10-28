/*Q18.Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/
#include<stdio.h>
int main()
{
	int x;
	printf("Enter Percentage(0-100)\n");
	scanf("%d",&x);
	if(x>=90 && x<=100)
	{
	printf("Grade A\n");
	}
	else if(x>=80 && x<=89)
	{
	printf("Grade B\n");
	}
	else if(x>=60 && x<=69)
	{
	printf("Grade C\n");
	}
	else
	{
	printf("Grade F");
	}
}