#include <stdio.h>

int strle(char s[]);

int main()
{
  int i = 0;
  char s[20]; /*un-dynamic*/
  
  printf("Enter a word: \n");
  scanf("%s", s);

  int wrLen = strle(s);
  printf("Word length: %d\n", wrLen );

  return 0;
}

int strle(char s[])
{
  int i = 0;

  while(s[i] != '\0')
    ++i;

  return i;
}
