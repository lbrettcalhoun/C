/***********************************************************************

Name:  4-5.c

Date:  05/08/14

Purpose:  Make 3 deliberate mistakes

Arguments: None

Notes:

***********************************************************************/

#include <stdio.h>

// Main
int main (void) {
  printf ("Float (1.0) with integer conversion:  %d\n", 1.0);
  printf ("Integer (1) with float conversion:  %f\n", 1);
  printf ("Character (A) with integer conversion:  %d\n", 'A');
  return (0);
}
