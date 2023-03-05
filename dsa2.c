#include <stdio.h>
int main() //binary search
{
    int arr[] = {2, 5, 8, 9, 10, 35, 56, 78, 99, 104};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8, low = 0, high = n - 1, mid;

    for (int i = 0; low<=high; i++)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            printf("element is found at %d position",mid+1);
            break;
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
    return 0;
}