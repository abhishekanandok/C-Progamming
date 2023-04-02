#include <stdio.h>
// swap two number usnig pointer function

void swap(int *x, int *y);

int main()
{
    int x, y;
    printf("enter number\n");
    scanf("%d%d", &x, &y);
    printf("%d\t%d\n", x, y);

    swap(&x, &y);

    printf("%d\t%d\n", x, y);

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}