/*Q41.Write a program to swap the first and last digit of a number.*/
#include <stdio.h>
#include <math.h>

int main() 
{
    int n, first, last, digits, mid, res;
    printf("Enter a number:");
    scanf("%d", &n);
    last = n % 10;
    digits = (int)log10(n);
    first = n / pow(10, digits);
    mid = n % (int)pow(10, digits);
    mid = mid / 10;
    res = last * pow(10, digits) + mid * 10 + first;
    printf("Number after swapping first and last digit: %d", res);
    return 0;
}