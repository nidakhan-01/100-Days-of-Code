/*Q88.Replace spaces with hyphens in a string.*/
#include <stdio.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ')
            str[i] = '-';
        i++;
    }
    printf("%s", str);
    return 0;
}