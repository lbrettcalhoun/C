/***********************************************************************

Name: 5-4

Date: 5/30/2014

Purpose: Convert KPH to MPH

Arguments: None

Notes:

***********************************************************************/

#include <stdio.h>

char line [100];
float mph;
float kph;

// Main
int main (void) {

  // Get KPH
  printf ("Enter KPH:  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%f", &kph);

  mph = (kph * 0.6213712);

  printf ("%f KPH is %f MPH\n", kph, mph);

  return (0);
}
