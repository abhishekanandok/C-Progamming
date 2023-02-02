#include <stdio.h>
int main()
//print star in a triangle
{
    int n, m;
    printf("Enter the number of rows");
    scanf("%d", &n);
    m = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}