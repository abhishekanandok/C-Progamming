#include<stdio.h>

int main(){
    //Write a program to check if a given number is Armstrong number or not.

    int n,r,sum=0,temp;
    printf("enter number \n");
    scanf("%d",&n);

    for (temp=n; n>0; n=n/10)
    {
        r=n%10;
        sum=sum+(r*r*r);
    }
    if (sum==temp)
    {
        printf("%d is a armstrong number",temp);
    }
    else
    {
        printf("%d is not a armstrong number",temp);
    }
    
    
   
    return 0;
}