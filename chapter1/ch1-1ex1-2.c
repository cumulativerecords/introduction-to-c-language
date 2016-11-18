/*
*   ch1-1ex1-2.c | Tiest van Gool
*   Exersize 1-2 - Experiment to find out what happens when printf's argument
*   string contains \c, where c is some character not listed above.
*/
#include <stdio.h>

int main(void) {
  printf("Description | ASCII char | Esc Seq | Dec ASCII Code\n");
  printf("===================================================\n\n");
  printf("Escape sequences:\n");
  printf("Horizontal tab   HT         \\t           %d\n", '\t');
  printf("Newline          LF         \\n           %d\n", '\n');
  printf("Vertical tab     VT         \\v           %d\n", '\v');
  printf("llegal escape sequence      \\c           %d\n", '\c');
  return 0;
}
