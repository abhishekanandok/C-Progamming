#include <stdio.h>
#include <math.h>

//conver binary to decimal

int main()
{
    int n, r, dec = 0, i = 0;

    printf("enter the no");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        dec = dec + r * pow(2, i);
        i++;
    }
    printf("%d", dec);

     return 0;
}