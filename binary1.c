#include <stdio.h>
#include <math.h>
// covert decimal to binary

int main()
{
    int i, n, r, sum = 0, x;
    printf("enter decimal number to convert binary \n");
    scanf("%d", &n);

    for (i = 0; n != 0; i++)
    {
        r = n % 2;
        n = n / 2;
        x = pow(10, i);
        sum = sum + r * x;
    }
    printf("binary is : %d \n", sum);
    return 0;
}