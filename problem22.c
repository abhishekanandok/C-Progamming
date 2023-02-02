#include <stdio.h>
//print nth term of fobinnachi
int fib(int n);

int main ()
{
    int n;
    printf("enter nth term\n");
    scanf("%d",&n);

    for (int i = 0; i <= n-1; i++)
    {
        printf("%d",fib(i));
        printf(" ");
    }
    
    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fib1 = fib(n-1);
    int fib2 = fib(n-2);
    int fibN = fib1 + fib2;
    return fibN;
}