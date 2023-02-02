#include<stdio.h>

int main(){
    //Write a program to print the average of 3 numbers
    
    int a,b,c;
    printf("enter a \n");
    scanf("%d", &a);
    printf("enter b \n");
    scanf("%d", &b);
    printf("enter c \n");
    scanf("%d", &c);
    printf("average of 3 numbers: %d", (a+b+c)/3);

    return 0;
}