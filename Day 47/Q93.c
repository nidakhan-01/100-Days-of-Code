/*Q93.Check if two strings are anagrams of each other.*/
#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(int i=0; str1[i] != '\0' && str1[i] != '\n'; i++)
        if(str1[i]>='a' && str1[i]<='z')
            freq1[str1[i]-'a']++;
    for(int i=0; str2[i] != '\0' && str2[i] != '\n'; i++)
        if(str2[i]>='a' && str2[i]<='z')
            freq2[str2[i]-'a']++;

    int flag = 1;
    for(int i=0;i<26;i++)
        if(freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }

    if(flag) printf("Anagrams");
    else printf("Not anagrams");
    return 0;
}