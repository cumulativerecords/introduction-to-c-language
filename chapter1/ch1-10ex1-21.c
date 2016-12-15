/*
*   ch1-10ex1-21.c | Tiest van Gool
*   Exersize 1-21 - Wtite a program entab that replaces strings of blanks by the
*   minimum number of tabs and blanks to achieve the same spacing. Use the same
*   tab stops as for detab. When either a tab or single blank would suffice to
*   reach a tab stop, which should be given preference?
*/
#include <stdio.h>

#define TABWIDTH 8

int main(void) {
  int i, c, col, blanks, tabs, spaces;

  col = blanks = tabs = spaces = 0;
  while((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks = blanks + 1;
            col = col +1;
        } else {
          spaces = col % TABWIDTH;
          if (blanks == 1) {
            putchar(' ');
          } else if (blanks > 1) {
            tabs = col/TABWIDTH - (col-blanks)/TABWIDTH;
            for (i = 0; i < tabs; i++) {
              putchar('\t');
            }
            for (i = 0; i < spaces; i++) {
              putchar(' ');
            }
          }
          blanks = 0;
          putchar(c);
          col = col + 1;
          if (c == '\n')
            col = 0;
        }
    }
}
