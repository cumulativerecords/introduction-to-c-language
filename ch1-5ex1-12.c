#include <stdio.h>

#define IN  1 /* Inside a word */
#define OUT 0 /* Outside a word */

/* Count lines, words and characters in input */
int main(void) {
  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == 0) {
        putchar('\n');
        state = IN;
      }
      /* else dont print anything */
    }
    else {
      putchar(c);
      state = OUT;
    }
  }
}
