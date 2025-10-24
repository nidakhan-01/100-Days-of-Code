/*Q43.Write a program to check if a number is a strong number.*/
#include <stdio.h>
int main() 
{
    int n, temp, digit, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n > 0) {
        digit = n % 10;
        fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if(sum == temp)
        printf("Strong number");
    else
        printf("Not strong number");
    return 0;
}