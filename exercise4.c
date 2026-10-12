#include <stdio.h>

int max_index(int arr[], int n)
{
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[index])
        {
            index = i;
        }
    }
    return index;
}

int main(void)
{
    int arr[] = {5, 9, 7, 66, 88, 12, 54};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = max_index(arr, n);

    printf("Index of the largest element: %d\n", index);
    return 0;
}