/*Q81.Count characters in a string without using built-in length functions.*/
#include <stdio.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int count = 0;
    while(str[count] != '\0' && str[count] != '\n')
        count++;
    printf("%d", count);
    return 0;
}