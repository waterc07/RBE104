#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3;
    double x = 1.0;

    printf("%-22s %-40s %s\n", "Expression", "Parenthesised expression", "Value");

    printf("%-22s %-40s %d\n", "a>b && c<b",
           "((a > b) && (c < b))", ((a > b) && (c < b)));

    printf("%-22s %-40s %d\n", "a<!b || !!a",
           "((a < (!b)) || (!(!a)))", ((a < (!b)) || (!(!a))));

    printf("%-22s %-40s %d\n", "a+b<!c+c",
           "((a + b) < ((!c) + c))", ((a + b) < ((!c) + c)));

    printf("%-22s %-40s %d\n", "a-x || b*c && b/a",
           "((a - x) || ((b * c) && (b / a)))",
           ((a - x) || ((b * c) && (b / a))));

    return 0;
}
