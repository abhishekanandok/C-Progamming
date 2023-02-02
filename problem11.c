#include <stdio.h>
int main ()
{
  //Write a program to print prime numbers in a range.

  int n,m,i,j,c;
  printf("enter range where to print prime  \n");
  scanf("%d%d",&n,&m);

  for (i = n; i <= m; i++)
  {
    c = 0;
    for (j = 2; j <= i/2; j++)
    {
      if (i % j == 0)
      {
        c++;
        break;
      }
    }
    if (c == 0)
      {
        printf("%d \n",i);
      }    
  }
  return 0;
}