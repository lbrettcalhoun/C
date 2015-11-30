/***********************************************************************

Name: 5-3

Date: 5/30/2014

Purpose: Calculate perimeter of a rectangle

Arguments: None

Notes: This example uses multiple variables in sscanf to retreive
and parse values from a single input line.  Input must be entered
as follows (note use of whitespace):
  X Y

***********************************************************************/

#include <stdio.h>

char line [100];
float width;
float height;
float perimeter;

// Main
int main (void) {

  // Get width and height
  printf ("Enter width and height:  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%f %f", &width, &height);

  perimeter = 2 * (width + height);

  printf ("Perimeter of a rectangle with width %f and height %f is %f\n", width, height, perimeter);

  return (0);
}
