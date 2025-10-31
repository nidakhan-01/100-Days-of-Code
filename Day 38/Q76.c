/*Q76. Check if a matrix is symmetric.*/
#include <stdio.h>
int main()
 {
    int r, c, flag = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    if(r != c) {
        printf("False");
        return 0;
    }
    printf("Enter matrix elements:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d", &a[i][j]);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(a[i][j] != a[j][i])
                flag = 0;
    if(flag) printf("True");
    else printf("False");
    return 0;
}