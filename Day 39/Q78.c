/*Q78.Find the sum of main diagonal elements for a square matrix.*/
#include <stdio.h>
int main() 
{
    int r, c, sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);
    if(r == c)
        for(int i=0;i<r;i++)
            sum += a[i][i];
    printf("%d", sum);
    return 0;
}