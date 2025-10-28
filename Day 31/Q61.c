/*Q61: Search for an element in an array using linear search.*/
#include <stdio.h>
int main() 
{
    int n, i, x, a[100], found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++)
	 {
        if(a[i] == x)
		 {
            found = 1;
            break;
        }
    }
    if(found == 1)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");
    return 0;
}