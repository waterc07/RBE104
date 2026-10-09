#include <stdio.h>

int main()
{
    float a[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float b[5];
    float sum = 0.0;
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum += b[i];
        printf("%f ", b[i]);
    }
    printf("\naverage: %f\n", sum / 5.0);
}