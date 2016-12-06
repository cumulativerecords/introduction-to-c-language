/*
*   ch1-9ex1-18.c | Tiest van Gool
*   Exersize 1-18 - Wtite a program to remove trailing blanks and tabs from
*   each line of input, and to delete entirely blank lines.
*/
#include <stdio.h>

#define MAXLINE 1000

int gotline(char line[], int maxline);
int removeblank(char line[]);

int main(void) {
  int len;
  char line[MAXLINE];

  while ((len = gotline(line, MAXLINE)) > 0) {
    if (line[0] != '\n') {
      removeblank(line);
      printf("%s", line);
    }
  }
}

/* function getline: read line into s, return lenght */
int gotline(char s[], int lim)
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

/* function removeblank: remove trailing blanks and tabs from input line */
int removeblank(char s[]) {
  int i, e;

  e = 0;
  for (i = 0; s[i] != '\0'; i++) {
    if (s[i] != 'w' && s[i] != '\t' && s[i] != '\n') {
      e = i + 1;
    }
  }
  if (i >= 1 && s[i-1] == '\n') {
    s[e] = '\n';
    s[e+1] = '\0';
  } else {
    s[e] = '\0';
  }
  return e;
}
