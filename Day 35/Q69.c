/*Q69.Find the second largest element in an array.*/
#include <stdio.h>
int main()
 {
	int n, i, a[100], max1, max2;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if(a[0] > a[1]) {
        max1 = a[0];
        max2 = a[1];
    } else {
        max1 = a[1];
        max2 = a[0];
    }
    for(i = 2; i < n; i++) 
	{
        if(a[i] > max1) 
		{
            max2 = max1;
            max1 = a[i];
        } else if(a[i] > max2 && a[i] != max1) 
		{
            max2 = a[i];
        }
    }
    printf("Second largest element: %d", max2);
    return 0;
}