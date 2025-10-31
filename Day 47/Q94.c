/*Q94: Find the longest word in a sentence.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char longest[1000] = "", word[1000];
    int i = 0, j = 0;
    while(1) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if(strlen(word) > strlen(longest))
                strcpy(longest, word);
            j = 0;
            if(str[i] == '\0' || str[i] == '\n') break;
        }
        i++;
    }
    printf("%s", longest);
    return 0;
}