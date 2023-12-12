/* Convert IST time to UTC time */
#include <stdio.h>
#include <time.h>

int main ()
{
  time_t rawtime;
  
  /* 1st approach
  struct tm * timeinfo, *utctime;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  printf ( "Current local time and date: %s", asctime (timeinfo) );

  utctime = gmtime (&rawtime);
  printf("UTC time and date: %s", asctime(utctime));
  */

  /* 2nd approach
  time(&rawtime);
  printf("Current IST time and date: %s", asctime(localtime(&rawtime)));
  printf("Current UTC time and date: %s", asctime(gmtime(&rawtime)));
  */
  
  return 0;
}
