/*Q33.Write a program to check if a number is an Armstrong number.*/
#include <stdio.h>
int main()
 {
    int n, temp, sum = 0, digit;
    printf("Enter a number:\n");
    scanf("%d",&n);

    temp = n;
    while(temp > 0) 
	{
        digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }

    if(n == sum)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number");

    return 0;
}