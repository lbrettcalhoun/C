/***********************************************************************

Name: 6-1

Date: 6/25/2014

Purpose: Compute distance between 2 points

Arguments: None

Notes:  This example uses multiple variables in sscanf to retreive
and parse values from a single input line. Input must be entered as
follows (note specific use of comma):
  X,Y

***********************************************************************/

#include <stdio.h>
#include <math.h>

char line [100];
int xa, ya, xb, yb;
int dx, dy;
float dist;

// Main
int main (void) {

  // Get input coordinates
  printf ("Enter coordinates for point 1 (X,Y):  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%d,%d", &xa, &ya);
  printf ("Enter coordinates for point 2 (X,Y):  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%d,%d", &xb, &yb);

  dx = (xa - xb);
  dy = (ya - yb);

  dist = sqrtf ((dx*dx) + (dy*dy));
 
  printf ("The distance is %f: \n", dist);

  return (0);
}
