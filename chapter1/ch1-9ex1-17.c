/*
*   ch1-8ex1-17.c | Tiest van Gool
*   Exersize 1-17 - Write a program to print all input lines that are longer
*   than 10 characters.
*/

#include <stdio.h>

#define MAXLINE 100       /* Maximum input line size */
#define MINLINE 10        /* Minimum lenght of input lines to be printed */

int func_getline(char line[], int maxline);
void func_copy(char to[], char from[]);

/* print longest input line */
int main(void) {
  int len;                            /* Lenght input line */
  int clen;                           /* Cumultative lenght of input line */
  char line[MAXLINE];                 /* Current input line */

  len = clen = 0;

  while ((len = func_getline(line, MAXLINE)) > 0) {
    clen = clen + len;
/* Only if input line lenght >= MINLINE and Newline is entered, print output */
    if (clen >= MINLINE && line[len-1] == '\n') {
      printf("%s", line);
      clen = 0;
    } else {
      /* do nothing */
    }
  }
  return 0;
}

/* function getline: read line into s, return lenght */
int func_getline(char s[], int lim)
{
  int c, i;

  for (i = 0; i <= lim-1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
