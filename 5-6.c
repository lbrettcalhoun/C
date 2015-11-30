/***********************************************************************

Name: 5-6

Date: 5/30/2014

Purpose: Convert minutes to hours and minutes

Arguments: None

Notes:  

***********************************************************************/

#include <stdio.h>

char line [100];
int hours;
int minutes;
int total_minutes;

// Main
int main (void) {

  // Get total minutes
  printf ("Enter total minutes:  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%d", &total_minutes);

  hours = (total_minutes / 60);
  minutes = (total_minutes % 60);

  printf ("%d total minutes is %d hours and %d minutes\n", total_minutes, hours, minutes);

  return (0);
}
