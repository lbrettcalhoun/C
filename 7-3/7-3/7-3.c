/***********************************************************************

Name: 7-3

Date: 10/23/2014

Purpose: Calculate the time required to transmit a file over a 960 baud
	 serial connection.

Arguments: None

Notes:

***********************************************************************/

#include <stdio.h>
#include <math.h>
#include <string.h>
const int BAUDRATE = 960;

char line [100];
int filesize, nummins, numhours, numdays;
long int secs;

// Main
int main (void) {

  // Get file size.
  printf ("Enter file size (MB):  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%d", &filesize);

  // Perform the calculation
  secs = (filesize * 1024 * 1024) / BAUDRATE;
  nummins = secs / 60;
  numhours = secs / 60 / 60;
  numdays = secs / 60 / 60 / 24;

  if (numdays > 1) 
    printf ("It will take %d days to transmit a %d MB file at %d baud\n", numdays, filesize, BAUDRATE);
  else if (numhours > 1)
    printf ("It will take %d hours to transmit a %d MB file at %d baud\n", numhours, filesize, BAUDRATE);
  else
    printf ("It will take %d minutes to transmit a %d MB file at %d baud\n", nummins, filesize, BAUDRATE);

  return (0);
}
