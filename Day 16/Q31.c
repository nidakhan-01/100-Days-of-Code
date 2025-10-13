/*Q31.Write a program to take a number as input and print its equivalent binary representation.*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    if(n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int temp = n, div = 1;

    while(temp > 0) {
        temp = temp / 2;
        div = div * 2;
    }
    div = div / 2;

    printf("Binary: ");
    while(div > 0) {
        if(n >= div) {
            printf("1");
            n = n - div;
        } else {
            printf("0");
        }
        div = div / 2;
    }

    printf("\n");
    return 0;
}