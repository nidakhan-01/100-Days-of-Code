/*Q38.Write a program to find the sum of digits of a number.*/
#include <stdio.h>
int main() 
{
    int n, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);

    while(n > 0) 
	{
        sum = sum + n % 10;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);
    return 0;
}