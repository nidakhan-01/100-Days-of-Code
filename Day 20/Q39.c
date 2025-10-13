/*Q39.Write a program to find the product of odd digits of a number.*/
#include <stdio.h>
int main() 
{
    int n, d, p = 1, c = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);

    while(n > 0) 
	{
        d = n % 10;
        if(d % 2 != 0) 
		{
            p = p * d;
            c = 1;
        }
        n = n / 10;
    }

    if(c == 1)
        printf("Product of odd digits = %d", p);
    else
        printf("No odd digits");

    return 0;
}