#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        printf("Calculating fibonacci(%d) = fibonacci(%d) + fibonacci(%d)\n", n, n - 1, n - 2);
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    printf("Fibonacci of %d is %d\n", n, fibonacci(n));
    return 0;
}