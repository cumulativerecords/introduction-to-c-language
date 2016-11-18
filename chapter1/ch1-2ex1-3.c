/*
*   ch1-2ex1-3.c | Tiest van Gool
*   Exersize 1-3 - Modify the temperature conversion program to print a heading
*   above the table.
*/
#include <stdio.h>

#define LOWER 0         /* Lower limit of temperature table */
#define UPPER 300       /* Upper limit of temperature table */
#define STEP  20        /* Step size */

int main(void)
{
  float fahr, celsius;

  fahr = LOWER;

  printf(" F      C \n");
  printf("----------\n");

  while (fahr <= UPPER) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + STEP;
  }
  return 0;
}
