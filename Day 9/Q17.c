/*Q17.Write a program to find the roots of a quadratic equation and categorize them.*/
#include<stdio.h>
#include<math.h>
	int main()
	{
		float a,b,c,d,r1,r2;
		printf("Enter coefficients a, b, c\n");
		scanf("%f %f %f",&a, &b, &c);
		d=b*b-4*a*c;
		if(d>0)
		{
			r1=(-b +sqrt(d))/(2*a);
			r2=(-b -sqrt(d))/(2*a);
			printf("Roots are real and distinct: %f and %f\n",r1, r2);
		}
		else if(d==0)
		{
			r1 = r2 = -b/ (2*a);
		printf("Roots are real and equal: %f and %f\n",r1, r2);
		}
		else
		{
			float real= -b/(2*a);
			float img= sqrt(-d)/(2*a);
			printf("Roots are imaginary: %f+%f and %f-%f\n",real,img,real,img);
		}
		return 0;
		
		
	}
	
