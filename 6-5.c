/***********************************************************************

Name: 6-5

Date: 7/22/2014

Purpose:  Determine if a year is a leap year.

Arguments: None

***********************************************************************/

#include <stdio.h>

char line [100];
int year;
int leapyear; 

// Main
int main (void) {
  
  // Loop until user enters 0
  while (1) {

    // Get amount
    printf ("Enter year (or 0 to stop):  ");
    fgets (line, sizeof (line), stdin);
    sscanf (line, "%d", &year);

    if (year == 0) 
      break;
  
    leapyear = 0;

    if ((year % 4) == 0) 
      leapyear = 1;

    if ((year % 100) == 0 && (year % 400) != 0)
        leapyear = 0; 

    if (leapyear == 1)
      printf ("%d is a leap year \n", year);
    else
      printf ("%d is not a leap year \n", year);
  }

  return (0);
}
