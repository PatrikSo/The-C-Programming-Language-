/* 1-10 */
#include <stdio.h>

int main()
{
  int c; /*input*/

  while( (c = getchar()) != EOF){
    if(c == '\t')
      printf("|t");
    if(c == '\b')
      printf("|b");
    if(c == '\\')
      printf("\\");
    putchar(c);
  }
}
