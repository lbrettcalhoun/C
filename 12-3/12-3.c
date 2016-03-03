/***********************************************************************

Name: 12-3

Date: 01/29/2016

Purpose: Create a struct to hold airline flight information

Arguments: None

***********************************************************************/

#include <stdio.h>
#include <string.h>

struct flight_information {
  unsigned int flight_number;
  char originating_airport_code[4];
  char destination_airport_code[4];
  char start_time[64];
  char arrive_time[64]; 
};

typedef struct flight_information flight_i;
flight_i flights[10] = {{1245,"KNX","LVG","Saturday, March 1, 9:30 AM", "Saturday, March 1, 1:00 pm"},{2415,"NYC","ATL","Friday, March 7, 6:30 AM", "Saturday, March 1, 1:00 pm"},{1255,"STP","NYC","Sunday, March 16, 7:30 AM", "Saturday, March 1, 2:00 pm"},{1345,"ATL","MIA","Sunday, March 16, 9:30 AM", "Saturday, March 1, 3:00 pm"},{9245,"CHL","HOU","Saturday, March 8, 6:30 AM", "Saturday, March 1, 4:00 pm"},{111,"KNX","DET","Saturday, March 8, 9:30 AM", "Saturday, March 1, 5:00 pm"}};

// Main
int main (void) {
}
 
