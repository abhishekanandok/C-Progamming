#include <stdio.h>
int main ()

//print 3 star in row and colum respectively using nested loop

{
    int i,j;
    for ( i = 1; i <= 3 ; i++)
    {
       for ( j = 1; j <= 3; j++)
       {
        printf("*");
       }
       printf("\n");
    }

    return 0;
    
}