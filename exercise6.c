#include <stdio.h>

void add_arrays(int a[], int b[], int c[], int n)
{
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
}

int main(void)
{
    int a[4] = {1, 2, 3, 4};
    int b[4] = {5, 6, 7, 8};
    int c[4];

    add_arrays(a, b, c, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}