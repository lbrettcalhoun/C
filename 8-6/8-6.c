/***********************************************************************

Name: 8-6

Date: 12/10/2014

Purpose: Convert numbers to words

Arguments: None

***********************************************************************/

#include <stdio.h>
#include <string.h>

char buffer[100];
char output[600];
int i;
char number;

// Main
int main (void) {
  
    printf ("Enter a number:  ");
    fgets (buffer, sizeof(buffer), stdin);

    for (i = 0; i < (strlen(buffer) - 1); i++) {
      number = buffer[i];
      switch (number) { 
        case '0':
          strcat (output, "zero ");
          break;
        case '1':
          strcat (output, "one ");
          break;
        case '2':
          strcat (output, "two ");
          break;
        case '3':
          strcat (output, "three ");
          break;
        case '4':
          strcat (output, "four ");
          break;
        case '5':
          strcat (output, "five ");
          break;
        case '6':
          strcat (output, "six ");
          break;
        case '7':
          strcat (output, "seven ");
          break;
        case '8':
          strcat (output, "eight ");
          break;
        case '9':
          strcat (output, "nine ");
          break;
      default:
        printf ("%c is not a number\n", number); 
        continue;
      }
    }
 
  printf ("%s\n", output);

  return (0);

}
