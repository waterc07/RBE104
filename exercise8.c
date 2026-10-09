#include <stdio.h>
#include <math.h>
/*
float C(float x, float y)
{
    return pow(x, 3) + 2 * x * y + pow(y, 2);
}

int main()
{
    float x, y;
    printf("Enter x and y\n");
    scanf("%f %f", &x, &y);
    printf("C(%.2f, %.2f) = %.2f\n", x, y, C(x, y));
    return 0;
}
*/

/* Call by reference: x and y are pointers to the original variables,
   the result is written back through the result pointer. */
void C(float *x, float *y, float *result)
{
    *result = pow(*x, 3) + 2 * (*x) * (*y) + pow(*y, 2);
}

int main()
{
    float x, y, result;
    printf("Enter x and y\n");
    scanf("%f %f", &x, &y);
    C(&x, &y, &result);
    printf("C(%.2f, %.2f) = %.2f\n", x, y, result);
    return 0;
}

