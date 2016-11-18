/*
*   ch1-5ex1-10.c | Tiest van Gool
*   Exersize 1-10 - Write a program to copy its input to its output, replacing
*   each tab by \t, each backspace by \b, and each backslash by \\. This makes
*   tabs and backspaces visible in an unambigious way.
*/
#include <stdio.h>

int main(void) {
  int c, d;

  while ((c = getchar()) != EOF) {
    d = 0;
    if (c == '\t') {  /* Tab identified */
      putchar('\\');
      putchar('t');
      d = 1;
    }
    if (c == '\b') {  /* Backspace identified */
      putchar('\\');
      putchar('b');
      d = 1;
    }
    if (c == '\\') {  /* Backslash identified */
      c = '\\';
      putchar('\\');
      putchar('\\');
      d = 1;
    }
    if (d == 0) {
      putchar(c);
    }
  }
}
