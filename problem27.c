#include<stdio.h>
//Write a program to print the largest number in an array
void largest(int arr[],int n);

int main ()
{
    int arr[]={3,4,5,9,7,4};
    largest(arr,6);
    
    return 0;
}

void largest(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            arr[i+1]=arr[i];
        }
        
    }
    printf("largest number is : %d",arr[5]);
}