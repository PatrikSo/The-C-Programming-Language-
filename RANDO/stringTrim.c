#include <stdio.h>

char* strip(char* s);
int sLength(char s[]);
int isWhiteSpace(char s);

int main()
{
  char s[10] = "hi  hi  ";

  int len = sLength(s);
  printf("length of word: %d\n", len);

  printf("the word: %s\n", s);

  printf("the trim: %s\n", strip(s));
  printf("trim length: %d\n", sLength(s));
  return 0;
}

char* strip(char* s)
{
  int lwCount = 0;
  int i = sLength(s) - 1;

  printf("i: %d\n", i);
  
  while(isWhiteSpace(s[i])){
    lwCount++;
    s[i] = '\0';
    i--;
  }

  /*
  unsigned int newL = sLength(s) - lwCount;
  while(s[newL] != sLength(s)){
    s[newL] = '\0';
    newL++;
  }
  */
  
  return s;
}

int sLength(char s[])
{
  int i = 0;
  while(s[i] !='\0'){
    i++;
  }
  return i;
}

int isWhiteSpace(char s)
{
  if(s==' ' || s=='\t' || s=='\n' || s=='\r')
    return 1;
  return 0;
}
