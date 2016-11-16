/*
*   ch1-6ex1-15.c | Tiest van Gool
*   Exersize 1-15 - Rewrite the temperature conversion program of Section 1.2
*   to use a function for conversion.
*/

#include <stdio.h>

#define LOWER 0         /* Lower limit of conversion table */
#define UPPER 300       /* Higher limit of conversion tavble */
#define STEP  20        /* Step size */

float func_conv(float conv_f);

int main(void) {

  float celsius, fahr;

  fahr = LOWER;
  while (fahr <= UPPER) {
    printf("%3.0f %6.1f\n", fahr, func_conv(fahr));
    fahr = fahr + STEP;
  }
  return 0;
}

/* Function for fahr-to-celsius conversion */
float func_conv(float conv_f) {

  float conv_c;

  conv_c = (5.0/9.0) * (conv_f-32.0);
  return conv_c;
}
