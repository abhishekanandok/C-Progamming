#include <stdio.h>
#include <math.h>

int main()
{
    // Write a program to check if a given number of n digits is Armstrong number or not.

    int n, r, sum = 0, temp, i, p = 0;
    printf("enter number \n");
    scanf("%d", &n);
    temp = n;

    for (i = 0; n > 0; i++)
    {
        n = n / 10;
        p++;
    }
    n = temp;
    for (i = 0; n != 0; i++)
    {
        r = n % 10;
        sum = sum + pow(r, p);
        n = n / 10;
    }
    printf("sum is %d\n",sum);

    if (sum == temp)
    {
        printf("%d is a armstrong number", temp);
    }
    else
    {
        printf("%d is not a armstrong number", temp);
    }

    return 0;
}