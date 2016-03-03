/***********************************************************************

Name: 12-4

Date: 02/02/2016

Purpose: Print all planes that leave from 2 airports specified by user

Arguments: None

***********************************************************************/

#include <stdio.h>
#include <string.h>

char airport1 [5];
char airport2 [5];

struct flight_information {
  unsigned int flight_number;
  char originating_airport_code[4];
  char destination_airport_code[4];
  char start_time[64];
  char arrive_time[64]; 
};

typedef struct flight_information flight_i;

flight_i flights[6] = {{1245,"KNX","LVG","Saturday, March 1, 9:30 AM", "Saturday, March 1, 1:00 pm"},{2415,"NYC","ATL","Friday, March 7, 6:30 AM", "Saturday, March 1, 1:00 pm"},{1255,"STP","NYC","Sunday, March 16, 7:30 AM", "Saturday, March 1, 2:00 pm"},{1345,"ATL","MIA","Sunday, March 16, 9:30 AM", "Saturday, March 1, 3:00 pm"},{9245,"CHL","HOU","Saturday, March 8, 6:30 AM", "Saturday, March 1, 4:00 pm"},{111,"KNX","DET","Saturday, March 8, 9:30 AM", "Saturday, March 1, 5:00 pm"}};

// Main
int main (void) {

  int i = 0;

  printf ("Enter 1st airport:  ");
  fgets (airport1, sizeof (airport1), stdin);
  printf ("Enter 2nd airport:  ");
  fgets (airport2, sizeof (airport2), stdin);

  // Strip the new line character from the input strings ... KNX\n\0 (4th character ... 3rd index position)
  airport1[3] = '\0';
  airport2[3] = '\0';

  for (i = 0; i < 6; i++) {
    if ((strcmp (airport1, flights[i].originating_airport_code) == 0) || (strcmp (airport2, flights[i].originating_airport_code) == 0)) {
      printf ("Flight %d leaves %s at %s\n", flights[i].flight_number, flights[i].originating_airport_code, flights[i].start_time);
    }
  }  
}
 
