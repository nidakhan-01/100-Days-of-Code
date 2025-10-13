/*Q37.Write a program to find the LCM of two numbers.*/
#include <stdio.h>
int main() {
    int a, b, lcm, max;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    if(a > b)
        max = a;
    else
        max = b;

    while(max % a != 0 || max % b != 0)
        max++;

    lcm = max;
    printf("LCM  %d", lcm);

    return 0;
}