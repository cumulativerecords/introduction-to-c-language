/*
*   ch1-5ex1-6.c | Tiest van Gool
*   Exersize 1-6 - Verify that the expression getchar() != EOF is 0 or 1.
*/
#include <stdio.h>

int main(void) {
  printf("Enter a char or EOF (ctrl+D):\n");
  printf("getchar != EOF: %d\n", getchar() != EOF);
  return 0;
}
