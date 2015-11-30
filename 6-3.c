/***********************************************************************

Name: 6-3

Date: 6/30/2014

Purpose:  Print letter grades with + or - modifier

Arguments: None

***********************************************************************/

#include <stdio.h>
#include <string.h>

char line [100];
int numericgrade;
char lettergrade [3];

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
        strncpy (lettergrade, "F", 1);
    if (numericgrade >= 61 && numericgrade <= 70)
        if (numericgrade <= 63)
            strncpy (lettergrade, "D-", 2);
        if (numericgrade >= 64 && numericgrade <= 67)
    	    strncpy (lettergrade, "D ", 2);
        if (numericgrade >= 68)
            strncpy (lettergrade, "D+", 2);
    if (numericgrade >= 71 && numericgrade <= 80)
        if (numericgrade <= 73)
            strncpy (lettergrade, "C-", 2);
        if (numericgrade >= 74 && numericgrade <= 77)
    	    strncpy (lettergrade, "C ", 2);
        if (numericgrade >= 78)
            strncpy (lettergrade, "C+", 2);
    if (numericgrade >= 81 && numericgrade <= 90)
        if (numericgrade <= 83)
            strncpy (lettergrade, "B-", 2);
        if (numericgrade >= 84 && numericgrade <= 87)
    	    strncpy (lettergrade, "B ", 2);
        if (numericgrade >= 88)
            strncpy (lettergrade, "B+", 2);
    if (numericgrade >= 91 && numericgrade <= 100)
        if (numericgrade <= 93)
            strncpy (lettergrade, "A-", 2);
        if (numericgrade >= 94 && numericgrade <= 97)
    	    strncpy (lettergrade, "A ", 2);
        if (numericgrade >= 98)
            strncpy (lettergrade, "A+", 2);

    printf ("The letter grade is: %s \n", lettergrade);
  }

  return (0);
}
