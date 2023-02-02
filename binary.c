#include <stdio.h>
//covert decimal to binary

int main()
{
    int i,n,r,sum=0;
    printf("enter decimal number to convert binary \n");
    scanf("%d",&n);

    for (i=1; n!=0; i=i*10)
    {
        r=n%2;
        n=n/2;
        sum=sum+r*i;
    }
    printf("binary is : %d \n",sum);
    

    return 0;
}