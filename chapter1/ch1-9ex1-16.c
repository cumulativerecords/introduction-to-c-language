/*
*   ch1-8ex1-16.c | Tiest van Gool
*   Exersize 1-16 - Revise the main routine of the longest-line program so it
*   will correctly print the lenght of arbitrairy long input lines, and as much
*   possible of the text.
*/

#include <stdio.h>

#define MAXLINE 15     /* Maximum input line size */

int func_getline(char line[], int maxline);
void func_copy(char to[], char from[]);

/* print longest input line */
int main(void)
{
  int len;                            /* current line lenght */
  int max;                            /* maximimum line length thus far */
  int lmax;                           /* longest maximimum line length thus far */
  int tlen;                           /* total number of characters current line */
  char line[MAXLINE];                 /* Current input line */
  char longest[MAXLINE];              /* Longest line saved here */
  char temp[MAXLINE];                 /* Start of line before reaching max */

  max = lmax = tlen = 0;
  while ((len = func_getline(line, MAXLINE)) > 0) {
    max = tlen + len;

    if (tlen == 0 && max >= lmax) {   /* Start AND longest line */
      func_copy(longest, line);
    } else if (max >= lmax) {         /* Longest input line identified */
      func_copy(longest, temp);
    } else {                          /* Shorter input line identified */
      /* Do nothing */
    }

    if (line[len-1] != '\n') {        /* Input line not yet at Endline */
      if (tlen == 0) {
        func_copy(temp, line);        /* Copy start input to temporary placeholder */
      }
      tlen += len;
    }
    else {                            /* Input line at Endline */
      printf("Input line is %d characters long.\n", max - 1);
      if (tlen == 0) {
        printf("%s", line);           /* Lenght input line < MAXLINE */
      }
      else {
        printf("%s\n", temp);         /* Lenght input line > MAXLINE */
      }
      tlen = 0;
    }
    if (max > lmax) {
      lmax = max;
    }
  }
  if (max > 0) {
    printf("The longest inputted line contained %d characters which was:\n", lmax - 1);
    printf("%s", longest);
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

/* function copy: copy 'from' into 'to'; assume to is big enough */
void func_copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
