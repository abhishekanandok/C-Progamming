#include <stdio.h>
int main() //find frequency of a element by using binary search
{
    int arr[] = {2, 5, 8, 8, 9, 10, 35, 56, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8, low = 0, high = n - 1, mid,count=0;

    for (int i = 0; i<n; i++)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            printf("element is found at %d position",mid+1);
            count++;
        }
        if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (count==0)
    {
        printf("element is not found");
    }
    else
    {
        printf("elemnt found %d times",count);
    }
    
    return 0;
}