#include<stdio.h>
//In an array of numbers, find how many times does a number 'x' occurs
void repeated(int arr[],int n);

int main ()
{
    int arr[]={3,4,5,4,7,4};
    repeated(arr,6);
    
    return 0;
}

void repeated(int arr[],int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==4)
        {
            count++;
        }
    }
    printf("%d",count);
    
}