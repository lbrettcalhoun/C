/***********************************************************************

Name: 12-2

Date: 01/29/2016

Purpose: Create a struct to hold date and time.  Use a function to subtract time.

Arguments: None

***********************************************************************/

#include <stdio.h>
#include <string.h>

struct date_time {
  unsigned short int year;
  unsigned char month;
  unsigned char day;
  unsigned char hour;
  unsigned char minute;
};

typedef struct date_time date_t;
date_t time1 = {2016,1,5,13,24};
date_t time2 = {2016,1,5,13,53};

int subtract_time (date_t t1, date_t t2) {
  int difference = 0;
  difference = ((t2.hour * 60) + t2.minute) - ((t1.hour * 60) + t1.minute);
  return difference;
}

// Main
int main (void) {
  printf ("%d minutes\n", subtract_time(time1, time2));
}
 
