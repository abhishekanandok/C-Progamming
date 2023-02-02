#include<stdio.h>

//area and perimeter of rectangle

int main()
{
    int a,b;
    printf("enter a \n");
    scanf("%d", &a);
    printf("enter b \n");
    scanf("%d", &b);
    printf("area of rectangle is: %d \n", a * b );
    printf("perimeter of rectangle is: %d", 2*(a + b));
   
    return 0;
}