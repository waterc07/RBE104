#include <stdio.h>

int main()
{
    int miles, yards;
    float kilometers;
    miles = 26;
    yards = 385;
    kilometers = 1.609 * (miles + (yards / 1760.0));

    printf("To win a marathon you must run for %f kilometers!", kilometers);
    return 0;
}