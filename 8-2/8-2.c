/***********************************************************************

Name: 8-2

Date: 11/4/2014

Purpose: Compute total resistance:

1/T = 1/R1 + 1/R2 + 1/R3 + 1/RN 

Arguments: None

***********************************************************************/

#include <stdio.h>
char line[100];
int resistance;
int i = 1;
float total_resistance = 0;

// Main
int main (void) {

  // Calculate total resistance
  while (i) {
    printf ("Enter resistor value or 0 to exit:  ");
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%d", &resistance); 

    switch (resistance) {
      case 0:
        i = 0;
        break; 
      default:
        total_resistance = total_resistance + (1.0/resistance);
    } 

  } 

  if (total_resistance != 0.0)
    printf ("Total resistance is %f\n", (1/total_resistance));

  return (0);
}
