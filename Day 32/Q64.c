/*Q64.Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>
int main() 
{
    long num;
    int count[10] = {0}, rem, max = 0, digit = 0, i;
    printf("Enter a number: ");
    scanf("%ld", &num);
    while(num > 0) {
        rem = num % 10;
        count[rem]++;
        num /= 10;
    }
    for(i = 0; i < 10; i++) 
	{
        if(count[i] > max) 
		{
            max = count[i];
            digit = i;
        }
    }
    printf("The digit that occurs the most is: %d", digit);
    return 0;
}