#include <stdio.h>
//print nth term Fibonacci Series i.e. - 0 1 1 2 3 5 8 13 21 ..............

int main()
{
    int n;
    printf("enter nth term");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++)
    {
        printf("nth term Fibonacci number is : %d \n",i);
    }
    

    return 0;
}