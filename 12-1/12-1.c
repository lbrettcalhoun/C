/***********************************************************************

Name: 12-1

Date: 12/07/2015

Purpose: Create a struct to hold mailing labels.  Use a function to print.

Arguments: None

***********************************************************************/

#include <stdio.h>
#include <string.h>

struct mail_label {
  char name[64];
  char address[64];
  char city[64];
  char state[3];
  long int zip;
};

typedef struct mail_label mailing_label;
mailing_label list[16]  = {{"Brett Calhoun", "1111 Main St.", "Knoxville", "TN", 37902},{"B. Calhoun", "11 Main St.", "Knox", "TN", 37902}};

void printlabel (mailing_label label) {
  printf ("%s\n", label.name);
  printf ("%s\n", label.address); 
  printf ("%s %s %5ld\n", label.city, label.state, label.zip); 
  printf ("\n");
}

// Main
int main (void) {
  int i;
  for (i = 0; i < 2; i++) {
    printlabel (list[i]);
  } 
}
 
