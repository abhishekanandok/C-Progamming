#include<stdio.h>

int main(){
    //print factorial of given number-

    int n;
    printf("enter number : \n");
    scanf("%d", &n);
    
    int b = 1;
    for(int i=1; i<=n; i++) {
        b = b * i;
    }
    printf("final factorial is %d", b);
   
    return 0;
}