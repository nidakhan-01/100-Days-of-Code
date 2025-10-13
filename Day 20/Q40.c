/*Q40.Write a program to find the 1’s complement of a binary number and print it.*/
#include <stdio.h>
int main() {
    int n, d;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    printf("1's complement = ");

    int p = 1, temp = n;
    while(temp > 0)
	 {
        temp = temp / 10;
        p = p * 10;
    }
    p = p / 10;

    while(p > 0) 
	{
        d = n / p;
        n = n % p;
        p = p / 10;
        if(d == 0)
            printf("1");
        else
            printf("0");
    }

    return 0;
}