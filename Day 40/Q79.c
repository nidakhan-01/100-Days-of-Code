/*Q79. Perform diagonal traversal of a matrix.*/

#include <stdio.h>
int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    for(int s=0; s<r+c-1; s++) {
        int i = s < r ? s : r-1;
        int j = s - i;
        while(i >= 0 && j < c) {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
    }
    return 0;
}