/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
#include<stdio.h>
int main()
{
	float l,b,a=0,p=0;
	printf("Enter length of rectangle\n");
	scanf("%f",&l);
	printf("Enter breadth of rectangle\n");
	scanf("%f",&b);
	a=l*b;
	p=2*(l+b);
	printf("Perimeter%f\n", p);
	printf("Area%f\n", a);
	return 0;
	
	
}

