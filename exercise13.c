#include <stdio.h>

int main(void)
{
    int exp1, exp2;

    printf("exp1\texp2\tAND\tOR\tNOT exp1\n");

    exp1 = 0;
    exp2 = 0;
    printf("%d\t%d\t%d\t%d\t%d\n",
           exp1, exp2, exp1 && exp2, exp1 || exp2, !exp1);

    exp1 = 0;
    exp2 = 5;
    printf("%d\t%d\t%d\t%d\t%d\n",
           exp1, exp2, exp1 && exp2, exp1 || exp2, !exp1);

    exp1 = -3;
    exp2 = 0;
    printf("%d\t%d\t%d\t%d\t%d\n",
           exp1, exp2, exp1 && exp2, exp1 || exp2, !exp1);

    exp1 = -3;
    exp2 = 5;
    printf("%d\t%d\t%d\t%d\t%d\n",
           exp1, exp2, exp1 && exp2, exp1 || exp2, !exp1);

    return 0;
}
