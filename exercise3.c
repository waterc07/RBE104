#include <stdio.h>
#define SECONDS_PER_HOUR 3600
#define MINUTES_PER_HOUR 60

int main()
{
    int hours = 3, minutes = 25;
    int total_seconds = (hours * SECONDS_PER_HOUR) + (minutes * MINUTES_PER_HOUR);
    printf("Total time in seconds: %d\n", total_seconds);
    return 0;
}