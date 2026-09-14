#include <stdio.h>

int main()
{
    char name[] = "white";
    printf("%s", name);
    char name2[] = {'W', 'h', 'i', 't', 'e', '\0'};
    printf("%s", name2);
    return 0;
}