#include <stdio.h>

float Celsius(float depth)
{
    return depth * 10 + 20;
}

float Fahrenheit(float celsius)
{
    return celsius * 1.8 + 32;
}

int main()
{
    float depth, celsius, fahrenheit;

    printf("Enter the depth in kilometers: ");
    scanf("%f", &depth);

    celsius = Celsius(depth);
    fahrenheit = Fahrenheit(celsius);

    printf("Temperature at %.2f kilometers depth: %.2f C (%.2f F)\n", depth, celsius, fahrenheit);
    return 0;
}