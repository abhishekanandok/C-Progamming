#include <stdio.h>
//write a function to calculate sum,product and average of 2 number using pointer .Print all in main function.

void dowork(int a,int b,int *sum,int *prod,int *avg);

int main ()
{
    int sum,prod,avg,a,b;
    a=3;
    b=5;

    dowork(a, b, &sum, &prod, &avg);
    printf("sum is = %d \nproduct is = %d \nAvg is = %d \n",sum,prod,avg);

    return 0;
}

void dowork(int a,int b,int *sum,int *prod,int *avg)
{
    *sum=a+b;
    *prod=a*b;
    *avg=*sum/2;
}