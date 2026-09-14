#include <stdio.h>

int main()
{
    int x = (12 + 6) / 2 * 3;
    printf("The value of x is: %d\n", x);
    int y = x = (2 + 3) / 4;
    printf("The value of y is: %d\n", y);
    y = 3 + 2 * (x = 7 / 2);
    printf("The value of y is: %d\n", y);
    return 0;
}
