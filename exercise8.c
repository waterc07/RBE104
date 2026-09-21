#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;
    printf("Enter a positive number n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("n must be positive.\n");
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("The sum of the series is: %f\n", sum);
    return 0;
}