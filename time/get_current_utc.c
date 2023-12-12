// C program to get current UTC time
/* 
struct tm {
    int tm_sec; // seconds (from 0 to 59)
    int tm_min; // minutes (from 0 to 59)
    int tm_hour; // hours (from 0 to 23)
    int tm_mday; // day of the month
    int tm_mon; // month (from 0 to 11)
    int tm_year; // year (number of years since 1990)
    int tm_wday; // day of the week (from 0 to 6)
    int tm_yday; // day in the year (from 0 to 365)
    int tm_isdst; // daylight saving time
};
*/

#include<stdio.h>
#include<time.h>

int main() {
    time_t tmi;
    struct tm* utcTime;

    localtime(&tmi);
    utcTime = gmtime(&tmi);

    printf("UTC Time: %2d:%02d:%02d\n", (utcTime->tm_hour) % 24, utcTime->tm_min, utcTime->tm_sec);
    printf("Time in India: %2d:%02d:%02d\n", (utcTime->tm_hour + 5) % 24, utcTime->tm_min, utcTime->tm_sec);

    return (0);
}
