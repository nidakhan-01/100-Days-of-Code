/*Q34.Write a program to check if a number is prime.*/
#include <stdio.h>
int main()
 {
    int n, i;
    printf("Enter a number:\n");
    scanf("%d", &n);

    for(i = 2; i < n; i++) 
	{
        if(n % i == 0)
            break;
    }

    if(n > 1 && i == n)
        printf("Prime\n");
    else
        printf("Not prime");

    return 0;
}