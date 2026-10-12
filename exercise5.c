#include <stdio.h>

#include <stdio.h>

double difference(double arr[], int n)
{
    double max = arr[0];
    double min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return max - min;
}

int main(void)
{
    double arr[] = {2.5, 8.0, -1.5, 4.2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Difference: %.2f\n", difference(arr, n));
    return 0;
}