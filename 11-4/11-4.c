/***********************************************************************

Name: 11-4

Date: 11/16/2015

Purpose: Write a program to count the bits in a number.  Example:  5
(0101) has 2 bits set. 

Arguments: None

***********************************************************************/

#include <stdio.h>
#include <string.h>

char buffer[128];
char bits[128];
char reversebits[128];
int i, j, number, lshift, andnumber, bitcount;


// Main
int main (void) {
  
    bitcount = 0;
    lshift = 0;
    andnumber = 0;
    j = 0;

    printf ("Enter a number:  ");
    fgets (buffer, sizeof(buffer), stdin);
    sscanf (buffer, "%d", &number);

    for (i = 1; i <= number; i = i * 2) {
      lshift = 1 << j;
      andnumber = number & lshift;
      if (andnumber > 0) {
        bitcount++;
        bits[j] = '1';
      } 
      else {
        bits[j] = '0';
      }
      j++;
    }
   
    for (i = 0; i < strlen(bits); i++) {
      reversebits[strlen(bits) - 1 - i] = bits[i];
    }

  printf ("%d has %d bits set:  %s\n", number, bitcount, reversebits);

  return (0);

}
