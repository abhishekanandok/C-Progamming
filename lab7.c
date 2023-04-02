#include <stdio.h>

int expo(int x,int n);

int main ()
{
    int x,n;
    printf("enter x to n\n");
    scanf("%d%d",&x,&n);
    printf("%d",expo(x,n));
    return 0;
}

int expo(int x,int n)
{
    if (n==0)
    {
        return 1;
    }
    int pown = x*expo(x,(n-1));
    return pown;
}