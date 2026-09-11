#include <stdio.h>

int main()
{
    char name[] = "white";
    printf("%s", name);
    char name1[] = {'W', 'h', 'i', 't', 'e', '\0'};
    printf("%s", name1);
    return 0;
}