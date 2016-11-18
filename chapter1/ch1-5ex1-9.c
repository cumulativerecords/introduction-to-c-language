/*
*   ch1-5ex1-9.c | Tiest van Gool
*   Exersize 1-9 - Write a program to copy its input to its output, replacing
*   each string of one or more blanks by a single blank.
*/
#include <stdio.h>

#define NBLNK 0               /* No blank was found */
#define BLANK 1               /* Blank was found */

int main(void) {
  int c, d;

  d = NBLNK;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {           /* Blank is entered */
      if (d == NBLNK) {       /* First blank entered */
        d = BLANK;            /* Set indcator first blank outputted */
        putchar(c);
      } else {                /* More blanks entered in succession */
        /* Do nothing */
      }
    } else {                  /* Non blank is enetered */
        d = NBLNK;
        putchar(c);
    }
  }
  return 0;
}
