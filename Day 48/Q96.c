/*Q96: Reverse each word in a sentence without changing the word order.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, start;
    while(str[i] != '\0' && str[i] != '\n') {
        start = i;
        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') i++;
        for(int j = i-1; j >= start; j--)
            printf("%c", str[j]);
        if(str[i] == ' ') printf(" ");
        if(str[i] != '\0') i++;
    }
    return 0;
}