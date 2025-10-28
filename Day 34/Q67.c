/*Q67. Insert an element in an array at a given position.*/
#include <stdio.h>
int main() 
{
    int n, i, pos, x, a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &x);
    for(i = n - 1; i >= pos; i--)
        a[i + 1] = a[i];
    a[pos] = x;
    n++;
    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}