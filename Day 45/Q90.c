/*Q90.Toggle case of each character in a string.*/
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
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    printf("%s", str);
    return 0;
}