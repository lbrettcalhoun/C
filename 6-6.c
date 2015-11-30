/***********************************************************************

Name: 6-6

Date: 7/22/2014

Purpose:  Calculate employee pay

Arguments: None

***********************************************************************/

#include <stdio.h>

char line [100];
float hours, OThours, Reghours, wage, OTwage, pay;

// Main
int main (void) {
  
  // Loop until user enters 0
  while (1) {

    // Get hours
    printf ("Enter employee hours (or -1 to stop):  ");
    fgets (line, sizeof (line), stdin);
    sscanf (line, "%f", &hours);

    if (hours <= 0) 
      break;

    // Get wage
    printf ("Enter employee wage:  ");
    fgets (line, sizeof (line), stdin);
    sscanf (line, "%f", &wage);

    if (hours > 40) {
      OThours = hours - 40;
      OTwage = wage * 1.5;
      Reghours = hours - OThours;
      pay = ((OThours * OTwage) + (Reghours * wage));
    }
    else
      pay = wage * hours;

    printf ("Pay is: %f \n", pay);
  }

  return (0);
}
