#include <stdio.h>

int main()
{
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    int month;
    printf("Enter month\n");
    scanf("%d", &month);
    index = --month;
    printf("Number of days in month %d is %d\n", ++month, days[index]);

    return 0;
}