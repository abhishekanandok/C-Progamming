#include <stdio.h>

void rect(int a,int b);
void circle(int r);
void squar(int s);
void triangle(int ba,int h);

int main ()
{
    int a,b,r,s,ba,h;
    printf("enter length and breadth of rectangle");
    scanf("%d%d",&a,&b);
    printf("enter radius of circle");
    scanf("%d",&r);
    printf("enter base and height of triangle");
    scanf("%d%d",&ba,&h);
    printf("enter side of square");
    scanf("%d",&s);

    rect(a,b);
    circle(r);
    squar(s);
    triangle(ba,h);

    return 0;
}

void rect(int a,int b)
{
    printf("area of rectangle : %d",a*b);
}

void circle(int r)
{
    printf("area of circle is : %f",3.14*r*r);
}

void squar(int s)
{
    printf("area of square : %d",s*s);
}

void triangle(int ba,int h)
{
    printf("area of triangle : %f",0.5*ba*h);
}