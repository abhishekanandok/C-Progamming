#include <stdio.h>
int main()
{
    int r1, r2, c1, c2, i, j;
    int a[10][10], b[10][10], c[10][10];
    printf("enter the row and column of first matrix \n");
    scanf("%d%d", &r1, &c1);
    printf("enter the element of first matrix \n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    return 0;
}