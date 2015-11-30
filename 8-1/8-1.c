/***********************************************************************

Name: 8-1

Date: 11/4/2014

Purpose:  Print an 8 x 8 grid as follows:  5 chars wide x 3 chars high:
	+-----+-----+-----+-----+-----+-----+-----+-----+
	|     |     |     |     |     |     |     |     |
	|     |     |     |     |     |     |     |     |
	|     |     |     |     |     |     |     |     |
	+-----+-----+-----+-----+-----+-----+-----+-----+
	|     |     |     |     |     |     |     |     |
	|     |     |     |     |     |     |     |     |
	|     |     |     |     |     |     |     |     |
	+-----+-----+-----+-----+-----+-----+-----+-----+
	|     |     |     |     |     |     |     |     |
	|     |     |     |     |     |     |     |     |
	|     |     |     |     |     |     |     |     |
	+-----+-----+-----+-----+-----+-----+-----+-----+
	|     |     |     |     |     |     |     |     |
	|     |     |     |     |     |     |     |     |
	|     |     |     |     |     |     |     |     |

Arguments: None

***********************************************************************/

#include <stdio.h>

int i, j, k, l; 

// Main
int main (void) {

// Outer loop ... repeat the inner loops 8 times to make 8 rows
for (l = 0; l <=7; l++) {  

  // Print the header line (+-----+-----+----- ...)
  for (i = 0; i <= 7; i++) {
    for (k = 0; k <= 5; k++) {
      if (k == 0) 
        printf ("+");
      else
        printf ("-");
    }
  }
  printf ("+\n");

  // Print the column lines
for (j = 0; j <= 2; j++) {
  for (i = 0; i <= 7; i++) {
    for (k = 0; k <= 5; k++) {
      if (k == 0) 
        printf ("|");
      else
        printf (" ");
    }
  }
  printf ("|\n");
}

}

// Print the footer line (+-----+-----+----- ...)
for (i = 0; i <= 7; i++) {
  for (k = 0; k <= 5; k++) {
    if (k == 0) 
      printf ("+");
    else
      printf ("-");
  }
}
printf ("+\n");

  return (0);
}
