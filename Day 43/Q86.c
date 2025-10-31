/*Q86.Check if a string is a palindrome.*/
#include <stdio.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while(str[len] != '\0' && str[len] != '\n') len++;
    int flag = 1;
    for(int i=0;i<len/2;i++) {
        if(str[i] != str[len-1-i]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome");
    else printf("Not palindrome");
    return 0;
}