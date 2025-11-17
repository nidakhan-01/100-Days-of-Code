/*Q114: Write a program to take a string s as input.
 The task is to find the length of the longest substring without repeating characters. Print the length as output.*/
 #include <stdio.h>
#include <string.h>
int main() 
{
    char s[200];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);
    int freq[256] = {0};
    int left = 0, maxlen = 0;

    for(int right = 0; right < n; right++) {
        freq[(int)s[right]]++;
        while(freq[(int)s[right]] > 1) {
            freq[(int)s[left]]--;
            left++;
        }
        int len = right - left + 1;
        if(len > maxlen) maxlen = len;
    }

    printf("%d", maxlen);
    return 0;
}