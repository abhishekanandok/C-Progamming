#include <stdio.h>
int main ()
//check prime number using for loop

{
    int n,c=0;
    printf("enter number");
    scanf("%d",&n);

    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            c++;
            break;
        }
        
    }
    if (c == 0)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
    
   return 0; 
    
}