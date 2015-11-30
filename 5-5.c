/***********************************************************************

Name: 5-5

Date: 5/30/2014

Purpose: Convert hours and minutes to minutes

Arguments: None

Notes:  This example uses multiple variables in sscanf to retreive
and parse values from a single input line. Input must be entered as
follows (note specific keywords and comma):
  X hour(s), Y minute(s)

***********************************************************************/

#include <stdio.h>

char line [100];
int hours;
int minutes;
int total_minutes;

// Main
int main (void) {

  // Get hours and minutes
  printf ("Enter X hour(s), Y minute(s):  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%d hour(s), %d minute(s)", &hours, &minutes);

  total_minutes = (hours * 60) + minutes;

  printf ("%d hours and %d minutes is %d total minutes\n", hours, minutes, total_minutes);

  return (0);
}
