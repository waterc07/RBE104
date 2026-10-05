#include <stdio.h>

int mul2(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int mul3(int x)
{
    if (x % 3 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    printf("Enter a number: ");
    int x;
    scanf("%d", &x);
    if (mul2(x) == 0 && mul3(x) == 0)
    {
        printf("The number is odd, not a multiple of 3, and not a multiple of 6.\n");
    }
    else
    {
        printf("The number does not meet all three conditions.\n");
    }
    return 0;
}
