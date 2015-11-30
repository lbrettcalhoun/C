/***********************************************************************

Name: 8-4

Date: 11/10/2014

Purpose: Display the multiplication table

Arguments: None

***********************************************************************/

#include <stdio.h>
const int x = 10;
const int y = 10;
int i, j;

// Main
int main (void) {
  
  printf ("%d x %d Multiplication Table\n\n", x, y);

  for (i = 1; i <= x; i++) {
    for (j = 1; j <= y; j++) {
      printf ("|%d x %d = %d| ", i, j, (i * j));
    }
    printf ("\n");
  }

  return (0);
}
