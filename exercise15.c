#include <stdio.h>

int main()
{
    char c = 'A';
    int i = 5, j = 10;

    printf("%d\t%d\t%d\n", !c, !!c, !!!c);
    printf("%d\t%d\t%d\n", -!i, !-i, !-i - !j);
    printf("%d\t%d\t%d\n", !(6 * j + i - c), !i - 5, !j - 10);

    return 0;
}
