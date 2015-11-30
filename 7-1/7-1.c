/***********************************************************************

Name: 7-1

Date: 7/29/2014

Purpose: Convert English to metric units

Arguments: None

***********************************************************************/

#include <stdio.h>
#include <math.h>
#include <string.h>

char line [100], english_unit[100], metric_unit[100];
int conversion; 
float english, metric;

// Main
int main (void) {

  // Get input unit of measure and value
  printf ("Convert English to Metric Units\n");
  printf ("(1) Yards to Meters\n");
  printf ("(2) Gallons to Liters\n");
  printf ("(3) Pounds to Kilograms\n");
  printf ("Select an English to metric conversion:  ");
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%d", &conversion);

  switch (conversion) {
    case 1:
      strncpy (english_unit, "yards\0", 6); 
      strncpy (metric_unit, "meters\0", 7); 
      break;
    case 2:
      strncpy (english_unit, "gallons\0", 8);
      strncpy (metric_unit, "liters\0", 6);
      break;
    case 3:
      strncpy (english_unit, "pounds\0", 7);
      strncpy (metric_unit, "kilograms\0", 10);
      break;
    default:
      printf ("Invalid selection\n");
      return (1);
      break;
  }
  
  printf ("Enter the number of %s:  ", english_unit);
  fgets (line, sizeof (line), stdin);
  sscanf (line, "%f", &english);

  switch (conversion) {
    case 1:
      metric = english * 0.9144;
      break;
    case 2:
      metric = english * 3.78541;
      break;
    case 3:
      metric = english * 0.453592;
      break;
    default:
      printf ("Invalid conversion\n");
      return (1);
      break;
  }
  
  printf ("%f %s is %f %s\n", english, english_unit, metric, metric_unit);

  return (0);
}
