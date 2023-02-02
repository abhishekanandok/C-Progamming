#include<stdio.h>

int main()
{
    //print number 1 to 10 except 3 (use of countinue)

    int i;
    for (i = 1; i <= 10; i++) 
    {
        if(i == 3) {//skip
            continue;
        }
        printf("%d \n", i);
    }
    
    
   
    return 0;
}