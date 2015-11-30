/***********************************************************************

Name: 7-5

Date: 10/28/2014

Purpose: Determine if a number is prime

Arguments: None

Notes:

***********************************************************************/

#include <stdio.h>
#include <math.h>

char line [100];
int num;
int i = 2;
int prime = 0;

// Main
unsigned int main (void) {

  // Get number.
  printf ("Enter number:  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%d", &num);

  if ((num == 1) || (num == 2) || (num == 3)) {
    printf ("%d is prime\n", num);
    return (0);
  }

  // Loop from 2 - num and compute the modulus.  
  // Modulus of zero means the number is not prime.
  while (i <= (num - 1)) { 
    if ((num % i) == 0) {
      printf ("%d is not prime (divisible by %d)\n", num, i);
      prime = 1;
      break;
    }
    i++;
  } // End WHILE loop

  // We made it to the end of the loop ... so the number is prime!
  if (prime == 0) 
    printf ("%d is prime\n", num);

  return (0);
}
