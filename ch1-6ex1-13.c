/*
*   ch1-6ex1-13.c | Tiest van Gool
*   Exersize 1-13 - Write a program to print a histogram of the lenghts
*   of words in its input. It is easy to draw a histogram with the bars
*   horizontal; a vertical orientation is more challenging.
*/
#include <stdio.h>

/* Count digits, white spaces, others */
int main(void) {

  int c, i;
  int wordlen, wordmax;
  int hindex, hyaxis, hxaxis, hentry, bindex, bsize;
  int histolen[10];

  wordlen = wordmax = 0;
  hindex = hentry = hxaxis = 0;
  hyaxis = 1;
  bindex = bsize = 0;

  for (i = 0; i < 10; i++) {                    /* Initialize array */
    histolen[i] = 0;
/*    printf(" %d", histolen[hindex]); */
  }

  while ((c = getchar()) != EOF) {              /*Issue word is ended /w CTRL-Z */
    if (c == ' ' || c == '\t' || c == '\n') {   /* End of word */
      histolen[hindex] = wordlen;
      ++hindex;
      if (wordlen > wordmax) {
          wordmax = wordlen;
      }
      wordlen = 0;
    }
    else {                                      /* Counting word lenght */
      ++wordlen;
    }
  }
  hentry = hindex;                              /* Number of records in array */
/* Print the histogram horizontally */
  printf("\nHorizontal oriented histogram\n");
  for (hindex = 0; hindex < hentry; hindex++) {
    printf("%2d |", hyaxis);
    bsize = histolen[hindex];
    for (bindex = 0; bindex < bsize; bindex++) {
      printf(" * ");
    }
    printf("\n");
    hyaxis = hyaxis + 1;
  }
  printf("   +");
  for (hindex = 1; hindex <= wordmax; hindex++) {
    printf("---");
  }
  printf("\n");
  printf("    ");
  for (hindex = 1; hindex <= wordmax; hindex++) {
    printf(" %d ", hindex);
  }
  printf("\n\n\n");
/* Print the histogram vertically */
  printf("\nVertical oriented histogram\n");
  for (hyaxis = wordmax; hyaxis > 0; hyaxis--) {
      printf("%2d |", hyaxis);
      for (hindex = 0; hindex < hentry; hindex++) {
        if (histolen[hindex] >= hyaxis) {
          printf(" * ");
        }
        else {
          printf("   ");
        }
      }
      printf("\n");
  }
  printf("   +");
  for (hindex = 1; hindex <= hentry; hindex++) {
    printf("---");
  }
  printf("\n");
  printf("    ");
  for (hindex = 1; hindex <= hentry; hindex++) {
    printf(" %d ", hindex);
  }


  return 0;
}
