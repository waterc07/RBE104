#include <stdio.h>

int main()
{
    int a = 1, b = 1, aplus, plusb;
    aplus = a++;
    plusb = b++;
    printf("%1s \t%5s \t%5s \t%5s\n", "a", "aplus", "plusb", "b");
    printf("%1d \t%5d \t%5d \t%5d\n", a, aplus, plusb, b);
    return 0;
}