/*Q66. Insert an element in a sorted array at the appropriate position.*/
#include <stdio.h>
int main() 
{
    int n, i, x, a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements in sorted order: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to insert: ");
    scanf("%d", &x);
    for(i = n - 1; i >= 0 && a[i] > x; i--)
        a[i + 1] = a[i];
    a[i + 1] = x;
    n++;
    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}