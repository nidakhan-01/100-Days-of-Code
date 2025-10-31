/*Q72.Find the sum of all elements in a matrix.*/
#include <stdio.h>
int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], sum = 0;
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    printf("%d", sum);
    return 0;
}