/*Q89.Count frequency of a given character in a string.*/
#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to count: ");
    scanf("%c", &ch);
    for(int i=0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i] == ch)
            count++;
    }
    printf("%d", count);
    return 0;
}