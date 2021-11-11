#include <stdio.h>
#include <stdlib.h>

int length(char* s);
char* strrev(char* s);

int main()
{
  char s[] = "hello";
  printf("String s: %s\n", s);

  printf("Heap Rev s: %s\n", strrev(s));

  return 0;
}

int length(char* s)
{
  int i = 0;

  while(s[i] != '\0'){
    i++;
  }

  return i;
}

char* strrev(char* s){
  char* revS = (char*)malloc(sizeof(char)*length(s));

  int j = 0;
  int k = length(s)-1;
  while(s[j] != '\0'){
    revS[k] = s[j];
    j++;
    k--;
  }

  return revS;
}
