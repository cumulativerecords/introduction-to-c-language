/*
*   ch1-6ex1-14.c | Tiest van Gool
*   Exersize 1-14 - Write a program to print a histogram of the frequencies
*   of different characters in its input.
*/

#include <stdio.h>

#define NUMCHARS 128 /* Number of ASCII non-extended characters */

int main(void) {

  int c, i;
  int hxaxis;
  int charfreq[NUMCHARS];

  c = i = hxaxis = 0;

  for (i = 0; i < NUMCHARS; i++) {        /* Initialize array */
    charfreq[i] = 0;
  }

/* Count the characters entered */
  while ((c =getchar()) != EOF) {
    charfreq[c] = charfreq[c] + 1;
  }

/* Draw horizontal histogram */
  for (i = 0; i < NUMCHARS; i++) {
    if (charfreq[i] > 0) {
      printf("%3d |", i);
      for (c = 1; c <= charfreq[i]; c++) {
        printf(" * ");
      }
      printf("\n");
      if (charfreq[i] > hxaxis) {
        hxaxis = charfreq[i];             /* Width X-axis histogram */
      }
    }
  }
  printf("    +");
  for (i = 1; i <= hxaxis; i++) {         /* Print x-axis histogram */
    printf("---");
  }
  printf("\n");
  printf("     ");
  for (i = 1; i <= hxaxis; i++) {         /* Print x-axis values histogram */
    printf("%3d", i);
  }

  return 0;
}
