/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n], freq[n+1];
    for(int i=0;i<=n;i++) freq[i] = 0;

    for(int i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        if(freq[arr[i]] == 1){
            printf("%d", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    return 0;
}