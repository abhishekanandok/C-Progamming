#include <stdio.h>
#include <math.h>
//covert decimal to binary and vice-versa

int main()
{
    int i,n,r,ban=0,dec=0;
    printf("enter decimal number to convert binary \n");
    scanf("%d",&n);

    for (i=1; n!=0; i=i*10)
    {
        r=n%2;
        n=n/2;
        ban=ban+r*i;
    }
    printf("binary is : %d \n",ban);
    
    for (i=0; ban!=0; i++)
    {
        r=ban%10;
        ban=ban/10;
        dec=dec+r*pow(2,i);
    }
    printf("decimal is : %d \n",dec);

    return 0;
}