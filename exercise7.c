#include <stdio.h>

int main()
{
    int ref[] = {9, 10, 20, 12, 101, 32};
    int *ptr;
    int index;
    for (index = 0, ptr = ref + 5; index < 6; index++, ptr--)
    {
        printf("%d %d\n", ref[index], *ptr);
    }
    return 0;
}