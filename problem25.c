#include<stdio.h>
//Write a program in C to print the elements of an array in reverse order
void reverse(int arr[],int n);

int main ()
{
    int arr[]={3,4,5,6,7};
    reverse(arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}

void reverse(int arr[],int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int x=arr[i];
        int y=arr[n-i-1];
        arr[i]=y;
        arr[n-i-1]=x;
    }
    
}