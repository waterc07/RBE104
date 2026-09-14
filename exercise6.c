#include <stdio.h>

int main()
{

    // exercise 4
    int x = (12 + 6) / 2 * 3;
    printf("The value of x is: %d\n", x);
    int y = x = (2 + 3) / 4;
    printf("The value of y is: %d\n", y);
    y = 3 + 2 * (x = 7 / 2);
    printf("The value of y is: %d\n", y);

    // exercise 5
    x = (int)3.8 + 3.3;
    printf("The value of x is: %d\n", x);
    x = (2 + 3) * 10.5;
    printf("The value of x is: %d\n", x);
    x = 22.0 * (int)3 / 10;
    printf("The value of x is: %d\n", x);
    x = 22.0 * (int)(3 / 10);
    printf("The value of x is: %d\n", x);

    return 0;
}