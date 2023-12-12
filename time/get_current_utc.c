// C program to get current UTC time

#include <stdio.h>
#include <time.h>

int main()
{
    time_t tmi;
    struct tm* utcTime;

    localtime(&tmi);
    utcTime = gmtime(&tmi);

    printf("UTC Time: %2d:%02d:%02d\n", (utcTime->tm_hour) % 24, utcTime->tm_min, utcTime->tm_sec);
    printf("Time in India: %2d:%02d:%02d\n", (utcTime->tm_hour + 5) % 24, utcTime->tm_min, utcTime->tm_sec);

    return (0);
}
