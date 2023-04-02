#include <stdio.h>
int main()
{
    int n = 1634; // 153, 370, 371, 407
    int sum = 0, digit = 0, copy = 0;
    copy = n;
    digit = n % 10;
    sum += digit * digit * digit;
    n /= 10;
    digit = n % 10;
    sum += digit * digit * digit;
    n /= 10;
    digit = n % 10;
    sum += digit * digit * digit;
    n /= 10;
    if (copy == sum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}