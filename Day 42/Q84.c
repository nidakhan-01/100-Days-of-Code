/*Q84.Convert a lowercase string to uppercase without using built-in functions.*/
#include <stdio.h>
int main() 
{
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    printf("%s", str);
    return 0;
}