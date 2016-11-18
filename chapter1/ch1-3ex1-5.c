/*
*   ch1-3ex1-5.c | Tiest van Gool
*   Exersize 1-5 - Modify the temperature conversion program to print the
*   table in reverse order, that is, from 300 degrees to 0.
*/
#include <stdio.h>

#define LOWER 0         /* Lower limit of temperature table */
#define UPPER 300       /* Upper limit of temperature table */
#define STEP  20        /* Step size */

int main(void)
{
  float fahr, celsius;

  fahr = UPPER;

  printf(" F      C \n");
  printf("----------\n");

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
  }
}
