#include <stdio.h>//mid sem ka question
void main()
{
    int a;
    a = 1;
    while (a <= 1)
    {
        if (a % 2)
        {
            printf("%d\n", a++);
        }
        else
        {
            printf("%d \n", ++a);
        }
        printf("%d", a + 10);
    }
}