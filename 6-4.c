/***********************************************************************

Name: 6-4

Date: 7/01/2014

Purpose:  Determine the number of quarters, dimes, nickels, pennies
given an input of less than $1.00

Arguments: None

***********************************************************************/

#include <stdio.h>

char line [100];
int amount, amtremainder;
int numquarters, numdimes, numnickels;

// Main
int main (void) {
  
  printf ("Convert amount (less than $1.00) to number of coins.\n");
  printf ("Enter amount in cents format.  Example: 99 \n");

  // Loop until user enters 0
  while (1) {

    amount = 0;
    amtremainder = 0;
    numquarters = 0;
    numdimes = 0;
    numnickels = 0;

    // Get amount
    printf ("Enter amount (or 0 to stop):  ");
    fgets (line, sizeof (line), stdin);
    sscanf (line, "%d", &amount);

    if (amount == 0) 
      break;

    numquarters = amount / 25;
    amtremainder = amount % 25;
    numdimes = amtremainder / 10;
    amtremainder = amtremainder % 10;
    numnickels = amtremainder / 5;
    amtremainder = amtremainder % 5;

    printf ("%d cents is: %d quarters, %d dimes, %d nickels and %d pennies \n", amount, numquarters, numdimes, numnickels, amtremainder);
  }

  return (0);
}
