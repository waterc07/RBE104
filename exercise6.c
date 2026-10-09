#include <stdio.h>

int main()
{
    float r[3][4] = {
        {1.0, 2.0, 3.0, 4.0},
        {5.0, 6.0, 7.0, 8.0},
        {9.0, 10.0, 11.0, 12.0}};
    float sum = 0.0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%.2f ", r[i][j]);
            sum += r[i][j];
        }
        printf("\n");
    }
    printf("sun of all elements: %f\n", sum);
    return 0;
}