/***********************************************************************

Name: 7-6

Date: 10/30/2014

Purpose: Count number of positive and negative values in a series.

Arguments: None

Notes:

***********************************************************************/

#include <stdio.h>
#include <math.h>

char line [100];
int begin_num, end_num;
int i, positive = 0, negative = 0;

// Main
unsigned int main (void) {

  // Get first number in series.
  printf ("Enter first number in series:  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%d", &begin_num);

  // Get last number in series
  printf ("Enter last number in series:  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%d", &end_num);

  // Loop from begin_num to end_num and count positives and negatives
  // Modulus of zero means the number is not prime.
  i = begin_num;
  while (i <= end_num) { 
    if (i < 0)
      negative++;
    else
      positive++;
    i++;
  } // End WHILE loop

  printf ("There are %d positive values and %d negative values in this series\n", positive, negative);

  return (0);
}
