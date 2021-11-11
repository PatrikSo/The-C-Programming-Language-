#include <stdio.h>

/* copy intput to output; 2nd version */
int main(void)
{
  int c;

  while((c = getchar()) != EOF)
    putchar(c);
}
