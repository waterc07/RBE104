#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    if (a < 0)
    {
        printf("This is a negative number,and please provide a non-negatice number.\n");
    }
    else
    {
        printf("The square root of %f is %f\n", a, sqrt(a));
    }
    return 0;
}