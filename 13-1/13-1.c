/***********************************************************************

Name: 13-1

Date: 03/02/2016

Purpose: Use a pointer to zero all elements of an array

Arguments: None
 
Note 1:  Don't try to do something like this in print_array:
  for (i = 0; i < 10; ++i) {
    printf ("%d\n", *array_ptr);
    **array_ptr;
  }
 Why?  Well it will work correctly ... but only the first time the
function is called.  Check out the increment ... you are incrementing
the pointer.  When you get finished with the loop, your pointer no longer
points to the start of your array; instead, it points to 10 characters
past the start of your array!  Don't ask how I know.

Note 2:  Same as Note 1 ... don't try to loop and increment pointer in
the body of the loop.  You'll end up with a pointer that points to 10
characters past the start of your array! 

***********************************************************************/

#include <stdio.h>

#define LENGTH 10

// Function to print the array using pointer arithmetic ... see Note 1.
void print_array (char *array_ptr) {
  int i;
  for (i = 0; i < 10; ++i) {
    printf ("%d\n", *(array_ptr + i));
  }
}

// Main
int main (void) {

  int i;
  char array[LENGTH] = {1,2,3,4,5,6,7,8,9,10};
  char *array_pointer = array;

  printf ("Original Array:\n");
  print_array (array_pointer);

  // Zero out the array using pointer arithmetic ... see Note 2.
  for (i = 0; i < 10; ++i) {
    *(array_pointer + i) = 0;
  }

  printf ("Modified Array:\n");
  print_array (array_pointer);
}
 
