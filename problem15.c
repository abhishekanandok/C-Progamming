//use of nested loop

#include <stdio.h>
int main ()

{
    int i,r,sum=0;
    for ( i = 1; i <= 3 ; i++)
    {
        for ( r = 1; r <= 2; r++) // phir se ane par r ki value 1 overrite hogi
        {
            sum=i+r;
            printf("i=%d,r=%d,sum=%d \n",i,r,sum);
        }
        printf("%d\n",r);
        
    }
    return 0;
    
}