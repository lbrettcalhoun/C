/***********************************************************************

Name: 8-5

Date: 11/18/2014

Purpose: Read a character and print out verb or consonant

Arguments: None

***********************************************************************/

#include <stdio.h>
char buffer[100];
char character;

// Main
int main (void) {
  
  while (1) {
    character = 0;

    printf ("Enter an alphabetic character (or 0 to quit):  ");
    fgets (buffer, sizeof(buffer), stdin);
    character = buffer[0];

    if (character == 48)
      return (0);

    if ((character < 65) || (character > 122)) {
      printf ("%c is not an alphabetic character\n", character);
      continue;
    }

    switch (character) {
      case 'A':
      case 'a':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        printf ("%c is a verb\n", character);
        break;
      default:
        printf ("%c is a consonant\n", character);
        break;
    }
 
  }

  return (0);

}
