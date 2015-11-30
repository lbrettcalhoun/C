/***********************************************************************

Name: 5-1

Date: 5/12/2014

Purpose: Convert centigrade to fahrenheit

Arguments: None

Notes:

***********************************************************************/

#include <stdio.h>

char line [100];
float centigrade;
float fahrenheit;

// Main
int main (void) {

  // Get temperature in centigrade
  printf ("Enter temperature in centigrade:  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%f", &centigrade);

  fahrenheit = ((9.0/5.0) * centigrade) + 32.0;

  printf ("%f degrees centigrade is %f degrees fahrenheit\n", centigrade, fahrenheit);

  return (0);
}
