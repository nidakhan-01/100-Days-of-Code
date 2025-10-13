/*Q27. Write a program to print the sum of the first n odd numbers.*/
#include <stdio.h>
int main() {
    int n, i = 1, count = 0, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    while(count < n) {
        if(i % 2 != 0) {
            sum += i;
            count++;
        }
        i++;
    }
    printf("Sum of first %d odd numbers = %d", n, sum);
    return 0;
}