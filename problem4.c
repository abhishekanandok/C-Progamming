#include<stdio.h>
//Write a program to print the smallest number of two.

int main(){

    int a,b;
    printf("enter a \n");
    scanf("%d", &a);
    printf("enter b \n");
    scanf("%d", &b);

    if (a >= b) {
        printf("b");
    }
    else {
        printf("a");
    }
    
   
    return 0;
}