/***********************************************************************

Name: 6-2

Date: 6/25/2014

Purpose:  Print letter grades

Arguments: None

***********************************************************************/

#include <stdio.h>

char line [100];
int numericgrade;
char lettergrade;

// Main
int main (void) {

  // Loop until user enters -1
  while (1) {

    // Get numeric grade
    printf ("Enter numeric grade (or -1 to stop):  ");
    fgets (line, sizeof (line), stdin);
    sscanf (line, "%d", &numericgrade);

    if (numericgrade == -1) 
      break;

    if (numericgrade >= 0 && numericgrade <= 60)
        lettergrade = 'F';
    if (numericgrade >= 61 && numericgrade <= 70)
        lettergrade = 'D';
    if (numericgrade >= 71 && numericgrade <= 80)
        lettergrade = 'C';
    if (numericgrade >= 81 && numericgrade <= 90)
        lettergrade = 'B';
    if (numericgrade >= 91 && numericgrade <= 100)
        lettergrade = 'A';

    printf ("The letter grade is: %c \n", lettergrade);
  }

  return (0);
}
