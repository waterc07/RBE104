#include <stdio.h>

int main()
{
    int quack = 2;
    printf("The value of quack is: %d\n", quack);
    quack += 5;
    printf("The value of quack is: %d\n", quack);
    quack *= 10;
    printf("The value of quack is: %d\n", quack);
    quack -= 6;
    printf("The value of quack is: %d\n", quack);
    quack /= 8;
    printf("The value of quack is: %d\n", quack);
    return 0;
}