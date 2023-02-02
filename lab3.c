#include <stdio.h>
int main ()
{
    int n=5,m;
    m=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i-i; k++)
        {
            printf("%c",i+64);
            //The ASCII value of the lowercase alphabet is from 97 to 122. And, the ASCII value of the uppercase alphabet is from 65 to 90
        }
        printf("\n");
        
    }

    return 0;
    
}