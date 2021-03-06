#include <stdio.h>
#include <stdlib.h>

char* uppercase();
int sLength(char* s);
int isUpper(char s);
int isLower(char s);

int main()
{
  char s[10] = "hi There .";

  int len = sLength(s);
  printf("length of word: %d\n", len);

  printf("the word: %s\n", s);

  printf("uppercase word: %s\n", uppercase(s));
  return 0;
}

char* uppercase(char* s)
{
  int len = sLength(s);
  char *upS = (char*)malloc(sizeof(char)*len);

  for(int i = 0; i < len; i++){
    if(isUpper(s[i])){
      upS[i] = s[i];
    }else if(isLower(s[i])){
      upS[i] = s[i] - 32;
    }else{
      upS[i] = s[i];
    } 
  }
  return upS;
}

int sLength(char* s)
{
  int i = 0;
  while(s[i] !='\0'){
    i++;
  }
  return i;
}

int isUpper(char s)
{
  if(s >= 65 && s <= 90)
    return 1;
  return 0;
}

int isLower(char s)
{
  if(s >= 97 && s <= 122)
    return 1;
  return 0;
}
