/*Q65. Search in a sorted array using binary search.*/
#include <stdio.h>
int main() 
{
    int n, i, x, a[100], low, high, mid, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements in sorted order: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &x);
    low = 0;
    high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == x) 
		{
            printf("Found at index %d", mid);
            found = 1;
            break;
        } else if(a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if(!found)
        printf("-1");
    return 0;
}