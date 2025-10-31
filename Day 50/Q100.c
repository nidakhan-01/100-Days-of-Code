/*Q100: Print all sub-strings of a string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while(str[len] != '\0' && str[len] != '\n') len++;

    for(int i=0;i<len;i++) {
        for(int j=1;j<=len-i;j++) {
            for(int k=i;k<i+j;k++)
                printf("%c", str[k]);
            printf(",");
        }
    }
    return 0;
}