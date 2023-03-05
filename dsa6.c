#include <stdio.h>
int main() // sorting using selection sort
{
    int arr[] = {25, 36, 8, 3, 56, 78};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}