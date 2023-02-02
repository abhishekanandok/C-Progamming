#include <stdio.h>
//reverse a number

int main ()
{
    int n,r,sum=0;
    printf("enter number to reverse \n");
    scanf("%d",&n);

    for(int i = 0; n != 0 ; i++)
    {
        r=n%10;
        n=n/10;
        sum=sum*10+r;
    }
    printf("reverse number is : %d",sum);
    
    return 0;
}