/***********************************************************************

Name: 8-3

Date: 11/10/2014

Purpose: Compute average of n numbers

Arguments: None

***********************************************************************/

#include <stdio.h>
char line[100];
int numbers, i;
float number, total, average;

// Main
int main (void) {
  
  average = 0.0;
  total = 0.0;
  number = 0.0;

  // How many numbers?
  printf ("How many numbers do you wish to average?:  ");
  fgets (line, sizeof(line), stdin);
  sscanf (line, "%d", &numbers); 

  for (i = 0; i <= (numbers - 1); i++) {
    printf ("  Enter number:  ");
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%f", &number);
    
    total = total + number;
    average = total / numbers; 
  }

  printf ("Average is %f\n", (average));

  return (0);
}
