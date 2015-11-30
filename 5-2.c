/***********************************************************************

Name: 5-2

Date: 5/12/2014

Purpose: Calculate volume of a sphere

Arguments: None

Notes:

***********************************************************************/

#include <stdio.h>

const float PI = 3.1417592;

char line [100];
float radius;
float volume;

// Main
int main (void) {

  // Get radius
  printf ("Enter radius:  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%f", &radius);

  volume = ((4.0/3.0) * PI) * (radius * radius * radius);

  printf ("Volume of a sphere with radius %f is %f\n", radius, volume);

  return (0);
}
