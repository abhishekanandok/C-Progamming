#include <stdio.h>
int main ()
{
    //find greatest of three number
    int a,b,c;
    printf("enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);

    // if (a>b)
    // {
    //     if (a>c)
    //     {
    //         printf("%d is greatest",a);
    //     }
        
    // }
    // else{
    //     if (b>c)
    //     {
    //         printf("%d is greatest",b);
    //     }
    //     else
    //      printf("%d is greatest",c);
        
    // }

    if ((a>b) && (a>c))
    {
        printf("%d is greatest",a);
    }
    else{
         if (b>c)
         {
             printf("%d is greatest",b);
         }
         else
          printf("%d is greatest",c);
    }
    
//logic ye ha : hamko sirf greatest number print karna ha, not 2nd greatest.

    return 0;
}