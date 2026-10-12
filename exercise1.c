#include <stdio.h>

void maximin(int t[], int n, int *admax, int *admin)
{
    *admax = t[0];
    *admin = t[0];
    for (int i = 1; i < n; i++)
    {
        if (t[i] > *admax)
        {
            *admax = t[i];
        }
        if (t[i] < *admin)
        {
            *admin = t[i];
        }
    }
}

int main()
{
    int t[8] = {2, 5, 7, 2, 9, 3, 9, 4};
    int max, min;
    maximin(t, 8, &max, &min);
    printf("max: %d, min: %d\n", max, min);
    return 0;
}