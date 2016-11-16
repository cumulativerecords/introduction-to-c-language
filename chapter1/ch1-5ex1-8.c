#include <stdio.h>

int main(void)
{
  int c, blnk, tabs, nlin;

  blnk = tabs = nlin = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')     /* Blank identified */
    {
      ++blnk;
    }
    if (c == '\t')    /* Tab identified */
    {
      ++tabs;
    }
    if (c == '\n')    /* Newline identified */
    {
      ++nlin;
    }
  }
  printf("Tab: %d\nLine: %d\nBlank: %d\n", tabs, nlin, blnk);
  return 0;
}
