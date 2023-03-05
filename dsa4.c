#include <stdio.h>
int main() //sort using insertion sorting
{
    int arr[] = {2,45,56,7,89,1,100};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            if (arr[j-1]>arr[j])
            {
                int t=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=t;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}