/*Q77. Check if the elements on the diagonal of a matrix are distinct.*/
#include <stdio.h>
int main() {
    int r, c, flag = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    for(int i=0;i<r;i++)
        for(int j=i+1;j<c;j++)
            if(i == j && a[i][i] == a[j][j])
                flag = 0;

    for(int i=0;i<r;i++)
        for(int j=i+1;j<c;j++)
            if(a[i][i] == a[j][j])
                flag = 0;

    if(flag) printf("True");
    else printf("False");
    return 0;
}