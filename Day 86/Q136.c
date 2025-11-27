/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.*/
#include<stdio.h>
#include<string.h>

enum Choice {ADD, SUBTRACT, MULTIPLY};

int main()
{
    char op[20];
    int a, b;
    scanf("%s %d %d", op, &a, &b);

    enum Choice ch;

    if(strcmp(op, "ADD") == 0) ch = ADD;
    else if(strcmp(op, "SUBTRACT") == 0) ch = SUBTRACT;
    else ch = MULTIPLY;

    switch(ch)
    {
        case ADD: printf("%d", a + b); break;
        case SUBTRACT: printf("%d", a - b); break;
        case MULTIPLY: printf("%d", a * b); break;
    }

    return 0;
}