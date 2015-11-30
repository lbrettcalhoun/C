/***********************************************************************

Name: 7-2

Date: 10/22/2014

Purpose: Perform date arithmetic

Arguments: None

Notes:
	This program makes use of the time functions and structures
	from time.h.  See below for details.

***********************************************************************/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

char line [100], date_1[100], date_2[100];
int numdays, mon_1, day_1, year_1, mon_2, day_2, year_2; 
struct tm time_1, time_2;
double secs;

// Main
int main (void) {

  // Get date.  Don't forget to truncate the CRLF at the end of 
  // string.
  printf ("Enter a date (MM/DD/YY):  ");
  fgets (line, sizeof (line), stdin);
  strcpy (date_1, line);
  date_1[strlen(date_1) - 1] = '\0';

  // Parse the date into it's components
  sscanf (date_1, "%d/%d/%d", &mon_1, &day_1, &year_1);

  // Check for valid date
  if (mon_1 < 1 || mon_1 > 12 ) {
    printf ("Invalid date: %s\n", date_1);
    return (2);
  }
  
  if (day_1 < 1 || day_1 > 31) { 
    printf ("Invalid date: %s\n", date_1);
    return (2);
  }

  if (year_1 < 1 || year_1 > 99) {
    printf ("Invalid date: %s\n", date_1);
    return (2);
  }

  // Get date.  Don't forget to truncate the CRLF at the end of 
  // string.
  printf ("Enter a date (MM/DD/YY):  ");
  fgets (line, sizeof (line), stdin);
  strcpy (date_2, line);
  date_2[strlen(date_2) - 1] = '\0';

  // Parse the date into it's components
  sscanf (date_2, "%d/%d/%d", &mon_2, &day_2, &year_2);

  // Check for valid date
  if (mon_2 < 1 || mon_2 > 12 ) {
    printf ("Invalid date: %s\n", date_2);
    return (2);
  }
  
  if (day_2 < 1 || day_2 > 31) { 
    printf ("Invalid date: %s\n", date_2);
    return (2);
  }

  if (year_2 < 1 || year_2 > 99) {
    printf ("Invalid date: %s\n", date_2);
    return (2);
  }

  // Create the tm structures.  These seem to be easier
  // to create (with the %D format) than time_t datatypes.
  // So we'll use tm structures and convert to time_t later on.
  strptime (date_1, "%D", &time_1);
  strptime (date_2, "%D", &time_2);
 
  // Now use the difftime function to calculate the 
  // number of seconds between the 2 dates.  Note that you 
  // must convert the tm structures to time_t datatypes to
  // use difftime.
  secs = difftime (mktime(&time_2), mktime(&time_1));
  numdays = secs / 60.0 / 60.0 / 24.0;
  printf ("There are %d days between %s and %s\n", numdays, date_1, date_2);

  return (0);
}
