#include <stdio.h>
int main ()
/*print the pattern
1234
aaaa
9101112
bbbb
*/
{
    int n=4,x=1,s=1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (i==1 || i==3)
            {
                printf("%d",x);
            }
            else
            {
                printf("%c",96+s);
            }
            x++;
        }
       printf(" \n");
       if (i%2==0)
       {
        s++;
       }
       
    }

    return 0;
    
}