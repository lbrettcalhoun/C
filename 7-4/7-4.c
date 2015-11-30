/***********************************************************************

Name: 7-4

Date: 10/28/2014

Purpose: Calculate 8% sales tax

Arguments: None

Notes:

***********************************************************************/

#include <stdio.h>
#include <math.h>

char line [100];
const float TAX = 1.08;
float amount, result;

// Main
int main (void) {

  // Get smount.
  printf ("Enter amount ($XX.YY):  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "$%f", &amount);

  // Perform the calculation
  result = amount * TAX;

  // Note the use of precision modifier (.2) to round the float to the nearest penny
  printf ("%.2f + 8 percent sales tax is:  %.2f\n", amount, result);

  return (0);
}
