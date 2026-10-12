#include <stdio.h>
/*
int main()
{
    int *ptr;
    int arr2D[2][3] = {2, 3, 4, 5, 6, 7};
    ptr = arr2D[0];
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 2));
    return 0;
}
*/

int main()
{
    int *ptr;
    int arr2D[3][3] = {{2}, {3, 4, 5}, {6}};
    ptr = arr2D[0];
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 2));
    return 0;
}