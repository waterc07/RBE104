#include <stdio.h>

int main()
{
    int y = 2, n = 3;
    int result = (y + n++) * 6;
    printf("The value of result is: %d\n", result);
    return 0;
}