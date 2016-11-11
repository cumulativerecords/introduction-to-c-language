#include <stdio.h>

/* Count digits, white spaces, others */
int main() {

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
  /* Print the histogram */
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
  for (hindex = 0; hindex <= hentry; hindex++) {
    printf("---");
  }
  printf("\n");
  printf("    ");
  for (hindex = 0; hindex <= hentry; hindex++) {
    printf(" %d ", hindex);
  }
  printf("\n");
/*  for (hyaxis = wordmax; hyaxis > 0; hyaxis--) {
      code
  } */

  return 0;
}
