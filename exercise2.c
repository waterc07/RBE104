#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);

    int min_value = (x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z);

    printf("min(x, y, z) = %d\n", min_value);
    return 0;
}
