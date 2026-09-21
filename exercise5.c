#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d    %d\n", i, i * i);
    }

    int i = 1;
    while (i <= 10)
    {
        printf("%d    %d\n", i, i * i);
        i++;
    }

    return 0;
}