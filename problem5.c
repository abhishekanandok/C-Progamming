#include<stdio.h>
//Write a program to check if the given number is a natural number

int main(){

    int a;
    printf("enter a \n");
    scanf("%d", &a);
    
    if (a >= 1) {
        printf("Natural number");
    }
    else {
        printf("Not natural number");
    }
    
   
    return 0;
}