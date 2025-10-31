/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    int maxSum = 0;
    for(int i=0;i<k;i++)
        maxSum += arr[i];

    int windowSum = maxSum;
    for(int i=k;i<n;i++) {
        windowSum = windowSum - arr[i-k] + arr[i];
        if(windowSum > maxSum) maxSum = windowSum;
    }

    printf("%d", maxSum);
    return 0;
}