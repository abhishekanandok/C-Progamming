#include <stdio.h>

void callsum (int a,int b);//sum of two number using function

int main ()
{
    int x,y;
    printf("enter number\n");
    scanf("%d%d",&x,&y);

    callsum (x,y);
    return 0;
}

void callsum (int a,int b)
{
    printf("%d",a+b);
}