/*Q9.Write a program to calculate simple and compound interest for given principal, rate, and time.*/
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate ");
    scanf("%lf", &rate);

    printf("Enter time in years: ");
    scanf("%lf", &time);

    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * pow(1 + rate/100, time) - principal;

    printf("Simple Interest: %.2lf\n", simpleInterest);
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}