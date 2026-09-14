#include <stdio.h>

int main()
{
    int x = (int)3.8 + 3.3;
    printf("The value of x is: %d\n", x);
    x = (2 + 3) * 10.5;
    printf("The value of x is: %d\n", x);
    x = 22.0 * (int)3 / 10;
    printf("The value of x is: %d\n", x);
    x = 22.0 * (int)(3 / 10);
    printf("The value of x is: %d\n", x);
    return 0;
}