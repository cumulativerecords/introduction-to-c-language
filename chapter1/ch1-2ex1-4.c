/*
*   ch1-2ex1-4.c | Tiest van Gool
*   Exersize 1-4 - Write a program to print the corresponding Celsius to
*   Fahrenheit table.
*/
#include <stdio.h>

#define LOWER 0         /* Lower limit of temperature table */
#define UPPER 300       /* Upper limit of temperature table */
#define STEP  20        /* Step size */

int main(void)
{
  float fahr, celsius;

  celsius = LOWER;

  printf(" C      F \n");
  printf("----------\n");

  while (celsius <= UPPER) {
    fahr = (celsius * 1.8) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + STEP;
  }
  return 0;
}
