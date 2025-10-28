/*Q70.Rotate an array to the right by k positions.*/
#include <stdio.h>
int main() 
{
    int n, i, k, a[100], temp[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;
    for(i = 0; i < n; i++)
        temp[(i + k) % n] = a[i];
    printf("Array after rotation: ");
    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);
    return 0;
}