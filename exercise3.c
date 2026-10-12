#include <stdio.h>

void sum(float (*t)[4], float *sum)
{
    *sum = 0.0f;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            *sum += *(*(t + i) + j);
        }
    }
}
int main()
{
    float sum_value;
    float t[3][4] = {{1.0, 2.0, 3.0, 4.0},
                     {5.0, 6.0, 7.0, 8.0},
                     {9.0, 10.0, 11.0, 12.0}};
    sum(t, &sum_value);
    printf("sum: %f\n", sum_value);
    return 0;
}