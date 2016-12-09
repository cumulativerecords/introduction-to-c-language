/*
*   ch1-10ex1-20.c | Tiest van Gool
*   Exersize 1-20 - Wtite a program detab that replaces tabs in the input with
*   the proper number of blanks to space to the next tab stop. Assume a fixed
*   set of tab stops, say every n columns. Should n be a variable or symobolic
*   parameter?
*/
#include <stdio.h>

#define TABWIDTH 8

int main(void) {
  int i, c, col, spaces;
  int test0, test1, test2, test4;
  float test3;

  col = 0;
  while((c = getchar()) != EOF) {
        if (c == '\t') {
            spaces = TABWIDTH - col % TABWIDTH;
            for (i = 0; i < spaces; ++i)
                putchar(' ');
            col = col + spaces;
        } else {
            putchar(c);
            col = col + 1;
            if (c == '\n')
                col = 0;
        }
    }
}
