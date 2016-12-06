/*
*   ch1-9ex1-19.c | Tiest van Gool
*   Exersize 1-19 - Wtite a function reverse(s) that reverses the character
*   strings. Use it to write a program that reverses its input one line at a
*   time.
*/
#include <stdio.h>

#define MAXLINE 1000

int gotline(char line[], int maxline);
void swapline(char line[], int linelen);

int main(void) {
  int len;
  char line[MAXLINE];
  char revline[MAXLINE];

  while ((len = gotline(line, MAXLINE)) > 0) {
    if (line[0] != '\n') {
      printf("len: %d\n", len);
      swapline(line, len);
      printf("reverse: %s", line);
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
void swapline(char s[], int len) {
  int i;
  char temp;

  for (i = 0; i < len; i++) {
    temp = s[i];
    s[i] = s[len-1];
    s[len-1] = temp;
/* Print indexes and swapping begin and end values - nifty(!) */
    printf("i: %d, len: %d, line: %s\n", i, len, s);
    --len;
  }
}
