/*Q56.Read and print elements of a one-dimensional array.*/
#include <stdio.h>
int main()
 {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}