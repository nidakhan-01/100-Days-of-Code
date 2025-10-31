/*Q98: Print initials of a name with the surname displayed in full.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a full name: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, start, spaceCount = 0;
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] == ' ') spaceCount++;
        i++;
    }

    i = 0;
    int wordCount = 0;
    while(str[i] != '\0' && str[i] != '\n') {
        start = i;
        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') i++;
        wordCount++;
        if(wordCount < spaceCount) {
            printf("%c.", str[start]);
        } else {
            for(int j = start; j < i; j++)
                printf("%c", str[j]);
        }
        if(str[i] == ' ') printf(" ");
        if(str[i] != '\0') i++;
    }
    return 0;
}