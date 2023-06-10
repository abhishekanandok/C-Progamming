#include <stdio.h>

int main()
{
    int i;
    // keep taking numbers as input from user until user enters a number which is multiple of 7

    do
    {
        printf("enter number : ");
        scanf("%d", &i);
        printf("%d\n", i);

        if (i % 7 == 0)
        {
            break;
        }

    } while (1);
    printf("thank");

    return 0;
}