#include <stdio.h>
int main ()
//check prime number

{
    int i,num;
    printf("enter number \n");
    scanf("%d",&num);

//if we do using for loop ,then we use n=n/2

    i=2;
    while (i <= num-1)
    {
        if (num % i == 0)
        {
            printf("not prime");
            break;
        }
        i++;
    }
    if (i == num)
    {
        printf("prime number");
    }

    return 0;
    
    
}