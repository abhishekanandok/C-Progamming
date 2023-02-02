//Write a function to find sum of digits of a number
#include <stdio.h>

int digitsum (int n);

int main ()
{
    int n;
    printf("enter number");
    scanf("%d",&n);

    printf("sum of digits is :- %d",digitsum(n));

    return 0;
}

int digitsum (int n)
{
    int r,sum=0;
    for (int i = 0; n > 0; i++)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    return sum;
    
}