/*Q30.Write a program to reverse a given number.*/
#include <stdio.h>
int main() 
{
    int n, d, rev = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while(n > 0) 
	{
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    printf("Reversed number  %d", rev);
    return 0;
}