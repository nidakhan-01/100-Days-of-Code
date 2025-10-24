/*Q25. Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/
#include <stdio.h>
int main() {
    float a, b;
    char op;
    printf("Enter first number:\n");
    scanf("%f", &a);
     printf("Enter second number:\n");
     scanf("%f", &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
   
    switch(op) {
        case '+':
            printf("Result = %f", a + b);
            break;
        case '-':
            printf("Result = %f", a - b);
            break;
        case '*':
            printf("Result = %f", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %f", a / b);
            else
                printf("Division by zero not allowed");
            break;
        case '%':
            printf("Result = %d", (int)a % (int)b);
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}