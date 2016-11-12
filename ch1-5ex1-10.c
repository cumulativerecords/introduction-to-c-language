#include <stdio.h>

int main() {
  int c, d;

  while ((c = getchar()) != EOF) {
    d = 0;
    if (c == '\t') {  /* Tab identified */
      putchar('\\');
      putchar('t');
      d = 1;
    }
    if (c == '\b') {  /* Baxkspace identified */
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
