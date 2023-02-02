#include <stdio.h>
// function to print factorial of n

int factorial(int n);

int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    printf("factorial is : %d", factorial(n));
    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int fact1 = factorial(n - 1);
    int factn = fact1 * n;
    return factn;
}